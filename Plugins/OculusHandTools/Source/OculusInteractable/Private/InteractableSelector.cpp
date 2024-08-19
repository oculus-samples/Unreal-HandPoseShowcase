/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "InteractableSelector.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

namespace // local
{
	ECollisionChannel InteractableTraceChannel = ECollisionChannel::ECC_GameTraceChannel1;
	FName BeamSource("Source");
	FName BeamTarget("Target");
} // namespace

AInteractableSelector::AInteractableSelector()
{
	// Property defaults
	bSelectorStartsActivated = false;
	RaycastOffset = 0.0f;
	RaycastDistance = 1000.0f;
	RaycastAngleDegrees = 10.0f;
	RaycastStickinessAngleDegrees = 20.0f;
	DampeningFactor = 0.95f;
	AimingActorRotationRate = 0.1f;
	bRaycastDebugTrace = false;

	// State
	bAlignAimingActorWithHitNormal = false;
	bSelectorActivated = false;
	bAimingActorOwned = false;
	SelectedInteractable = nullptr;

	PrimaryActorTick.bCanEverTick = true;

	// Root
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

#if WITH_EDITORONLY_DATA
	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	ArrowComponent->SetupAttachment(RootComponent);

	if (!IsRunningCommandlet())
	{
		if (ArrowComponent)
		{
			ArrowComponent->ArrowColor = FColor(128, 92, 207);
			ArrowComponent->ArrowSize = 1.0f;
			ArrowComponent->bIsScreenSizeScaled = true;
		}
	}
#endif
}

void AInteractableSelector::BeginPlay()
{
	Super::BeginPlay();

	BuildAimingActor();
	BuildBeam();

	if (bSelectorStartsActivated)
	{
		ActivateSelector(true);
	}
}

void AInteractableSelector::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ActivateSelector(false);
	DestroyBeam();
	DestroyAimingActor();
	SetSelectedInteractable(nullptr); // Notify selected interactable that we are going away.

	Super::EndPlay(EndPlayReason);
}

void AInteractableSelector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bSelectorActivated)
	{
		UWorld* World = GetWorld();
		if (!World)
			return;

		UpdateDampenedForwardVector(DampeningFactor);

		FVector StartCast, EndCast;
		ComputeRaycastEndpoints(StartCast, EndCast);
		if (bRaycastDebugTrace)
		{
			DrawDebugLine(World, StartCast, EndCast, FColor::Green, false, -1.0f, 0, 0.1f);
		}

		// Do not change the selection if it is within some angle.
		if (SelectedInteractable != nullptr)
		{
			float AngleToCurrentSelection = ComputeAngularDistance(SelectedInteractable);
			if (AngleToCurrentSelection <= RaycastStickinessAngleDegrees)
			{
				// Re-orient the beam.
				OrientBeam();
				return;
			}
		}

		// Trace in a cone against interactable.
		float SphereRadius = ComputeSphereRadiusForCast();
		FCollisionShape CollisionSphere = FCollisionShape::MakeSphere(SphereRadius);
		TArray<FHitResult> Hits;
		World->SweepMultiByChannel(Hits, StartCast, EndCast, FQuat::Identity, InteractableTraceChannel, CollisionSphere);

		// Looking for the closest candidate by angle and distance.
		AInteractable* Candidate = nullptr;
		float CandidateAngle = RaycastAngleDegrees;
		float CandidateDistance = RaycastDistance;

		if (Hits.Num() > 0)
		{
			for (const FHitResult& Hit : Hits)
			{
				// UE_LOG(LogTemp, Error, TEXT("Hit %s at %0.0f"), *Hit.Actor->GetName(), Hit.Distance);
				if (Hit.GetActor() && Hit.GetActor()->GetClass()->IsChildOf(AInteractable::StaticClass()))
				{
					float Angle = ComputeAngularDistance(Hit.GetActor());

					// Since CandidateAngle starts at RaycastAngleDegrees, we cannot select outside of the cone.
					if (Angle > CandidateAngle || (Angle == CandidateAngle && Hit.Distance >= CandidateDistance))
						continue;

					CandidateAngle = Angle;
					CandidateDistance = Hit.Distance;
					Candidate = Cast<AInteractable>(Hit.GetActor());
				}
			}
		}

		if (Candidate == nullptr)
		{
			if (AimingActor)
			{
				// If there are no hits, we help by displaying the aiming actor.
				ActivateAimingActor(true);

				World->LineTraceMultiByChannel(Hits, StartCast, EndCast, ECollisionChannel::ECC_Visibility);

				FQuat AimingQuat = AimingActor->GetActorQuat();

				// Default target aiming when we have not hit normal.
				FVector RightVector = FVector::CrossProduct(DampenedForwardVector, FVector::UpVector);
				FVector ForwardVector = FVector::CrossProduct(StartCast - EndCast, RightVector);
				FQuat TargetAimingQuat = FQuat(FRotationMatrix::MakeFromXZ(ForwardVector, StartCast - EndCast).Rotator());

				if (Hits.Num() > 0)
				{
					NonInteractableActorHit = Hits[0].GetActor();

					if (bAlignAimingActorWithHitNormal)
					{
						// Align with hit normal.
						ForwardVector = FVector::CrossProduct(Hits[0].ImpactNormal, RightVector);
						TargetAimingQuat = FQuat(FRotationMatrix::MakeFromXZ(ForwardVector, Hits[0].ImpactNormal).Rotator());
					}

					AimingActor->SetActorLocation(Hits[0].ImpactPoint);
				}
				else
				{
					// Place the actor at the end of the cast of nothing is hit.
					AimingActor->SetActorLocation(EndCast);
				}

				FQuat LerpedTargetAimingQuat = FQuat::FastLerp(AimingQuat, TargetAimingQuat, AimingActorRotationRate);
				AimingActor->SetActorRotation(LerpedTargetAimingQuat);
			}
		}
		else
		{
			// Do no show the aiming actor when we hit an interactable.
			ActivateAimingActor(false);

			// When we have a candidate, this first non-interactable actor hit is cleared.
			NonInteractableActorHit.Reset();
		}

		SetSelectedInteractable(Candidate);
	}
}

void AInteractableSelector::SetSelectedInteractable(AInteractable* Candidate, bool Notify /* = true */)
{
	// Old interactable.
	if (SelectedInteractable)
	{
		if (SelectedInteractable == Candidate)
		{
			// Same non-null target, we only need to update the beam orientation.
			OrientBeam();
			return;
		}

		if (Notify)
		{
			SelectedInteractable->EndSelection(this);
		}
	}

	// Swapping to candidate.
	SelectedInteractable = Candidate;

	// New interactable (potentially nullptr).
	if (SelectedInteractable)
	{
		ActivateBeam(true);

		if (Notify)
		{
			SelectedInteractable->BeginSelection(this);
		}
	}
	else
	{
		ActivateBeam(false);
	}
}

AInteractable* AInteractableSelector::GetSelectedInteractable()
{
	return SelectedInteractable;
}

AActor* AInteractableSelector::GetNonInteractableHit()
{
	// Can return null.
	return NonInteractableActorHit.Get();
}

void AInteractableSelector::ActivateSelector(bool Activate)
{
	if (bSelectorActivated != Activate)
	{
		if (Activate)
		{
			UpdateDampenedForwardVector(0.0f);
		}
		else
		{
			SetSelectedInteractable(nullptr);
			ActivateAimingActor(false);
		}

		bSelectorActivated = Activate;
	}
}

void AInteractableSelector::UpdateDampenedForwardVector(float Dampening)
{
	DampenedForwardVector *= Dampening;
	DampenedForwardVector += GetActorForwardVector() * (1.0f - Dampening);
	DampenedForwardVector.Normalize();
}

void AInteractableSelector::ComputeRaycastEndpoints(FVector& Start, FVector& End) const
{
	FVector ActorPos = GetActorLocation();
	FVector ActorFwd = DampenedForwardVector;
	Start = ActorPos + ActorFwd * RaycastOffset;
	End = ActorPos + ActorFwd * (RaycastOffset + RaycastDistance);
}

float AInteractableSelector::ComputeSphereRadiusForCast() const
{
	return RaycastDistance * FMath::Tan(FMath::DegreesToRadians(RaycastAngleDegrees * 0.5f));
}

float AInteractableSelector::ComputeAngularDistance(AActor* Target) const
{
	FVector LineStart = GetActorLocation();
	FVector LineEnd = GetActorLocation() + 100.0f * DampenedForwardVector; // Any point will do, but projecting forward will reduce errors.
	FVector TargetLocation = Target->GetActorLocation();

	FVector NearestLocation = FMath::ClosestPointOnInfiniteLine(LineStart, LineEnd, TargetLocation);

	float DistNearestToUs = FVector::Distance(NearestLocation, LineStart);
	float DistNearestToTargetCenter = FVector::Distance(NearestLocation, TargetLocation);
	float DistNearestToTarget = FMath::Max(DistNearestToTargetCenter - (Target->GetSimpleCollisionRadius() * 0.5f), 0.0f);

	float AngleToTargetRadians = FMath::FastAsin(DistNearestToTarget / DistNearestToUs);

	return FMath::RadiansToDegrees(AngleToTargetRadians);
}

void AInteractableSelector::ActivateAimingActor(bool Activate)
{
	if (!AimingActor)
		return;

	if (Activate)
	{
		// This is one of AAimingActor's events.
		AimingActor->Activate();
	}
	else
	{
		// This is one of AAimingActor's events.
		AimingActor->Deactivate(SelectedInteractable);
	}
}

void AInteractableSelector::BuildAimingActor()
{
	// Minimum handling of multiplayer: don't spawn aiming actor if we are not on the server.
	if (!HasAuthority())
		return;

	UWorld* World = GetWorld();
	if (!World)
		return;

	if (!AimingActor && AimingActorClass)
	{
		FActorSpawnParameters Params;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		Params.bAllowDuringConstructionScript = true;
		Params.Owner = this;

		// Spawn actor of desired class.
		FVector Location = GetActorLocation();
		FRotator Rotation = GetActorRotation();
		AimingActor = Cast<AAimingActor>(World->SpawnActor(AimingActorClass, &Location, &Rotation, Params));

		if (!AimingActor)
		{
			UE_LOG(LogTemp, Error, TEXT("Could not spawn aiming actor of class %s for interactable selector %s"),
				*AimingActorClass->GetName(),
				*GetName());
		}
		else
		{
			bAimingActorOwned = true;
			AimingActor->SetActorTickEnabled(true);
			AimingActor->SetActorEnableCollision(false);
		}
	}
}

void AInteractableSelector::DestroyAimingActor()
{
	UWorld* World = GetWorld();
	if (!World)
		return;

	if (bAimingActorOwned && AimingActor->HasAuthority() && IsValid(AimingActor) && !AimingActor->IsUnreachable())
	{
		World->DestroyActor(AimingActor);
		AimingActor = nullptr;
		bAimingActorOwned = false;
	}
}

void AInteractableSelector::ActivateBeam(bool Activate)
{
	if (!Beam)
		return;

	if (Activate && SelectedInteractable == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("The beam should not be activated when there are no interactable selected."));
		Activate = false;
	}

	if (Activate)
	{
		Beam->SetActorParameter(BeamSource, this);
		Beam->SetActorParameter(BeamTarget, SelectedInteractable);
		Beam->SetComponentTickEnabled(true);
		Beam->SetHiddenInGame(false);
		OrientBeam();
	}
	else
	{
		Beam->SetHiddenInGame(true);
		Beam->SetComponentTickEnabled(false);
	}
}

void AInteractableSelector::OrientBeam()
{
	if (Beam)
	{
		FVector BeamTangent = DampenedForwardVector;
		// UE_LOG(LogTemp, Error, TEXT("*** BEAM UPDATE %0.2f %0.2f %0.2f"), DampenedForwardVector.X, DampenedForwardVector.Y, DampenedForwardVector.Z);
		Beam->SetBeamSourceTangent(0, BeamTangent, 0);
	}
}

void AInteractableSelector::BuildBeam()
{
	if (BeamTemplate)
	{
		Beam = UGameplayStatics::SpawnEmitterAttached(BeamTemplate, this->GetRootComponent());
		ActivateBeam(false);
	}
}

void AInteractableSelector::DestroyBeam()
{
	if (Beam)
	{
		Beam->DestroyComponent();
		Beam = nullptr;
	}
}
