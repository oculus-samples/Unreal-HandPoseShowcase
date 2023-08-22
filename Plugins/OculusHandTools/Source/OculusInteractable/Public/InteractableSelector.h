// Copyright (c) Facebook Technologies, LLC and its affiliates.  All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Interactable.h"
#include "AimingActor.h"
#include "InteractableSelector.generated.h"

/**
 * Base actor class for interactable selectors.
 */

UCLASS()
class OCULUSINTERACTABLE_API AInteractableSelector : public AActor
{
	friend class AInteractable;

	GENERATED_BODY()

public:
	/** Sets default values for this actor's properties. */
	AInteractableSelector();

	/** Arrow component to indicate forward direction of selection. */
#if WITH_EDITORONLY_DATA
private:
	UPROPERTY()
	class UArrowComponent* ArrowComponent;

public:
#endif

	/** Initial activation state of the selector. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	bool bSelectorStartsActivated;

	/** Distance from selector at which we start raycasting. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	float RaycastOffset;

	/** Raycast range. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	float RaycastDistance;

	/** Raycast angle: we select within a cone. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	float RaycastAngleDegrees;

	/** Raycast stickiness angle: we stick to a selection while we do not exceed this angle. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	float RaycastStickinessAngleDegrees;

	/** Align aiming actor with hit normal. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	bool bAlignAimingActorWithHitNormal;

	/** Aiming actor placed at targeting location. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	AAimingActor* AimingActor;

	/** Aiming actor class to spawn if no AimingActor is specified. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AAimingActor> AimingActorClass;

	/** Particle system for beam. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadOnly)
	UParticleSystem* BeamTemplate;

	/** Aiming actor rotation rate. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	float AimingActorRotationRate;

	/** Aiming using a number of samples for stabilization. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float DampeningFactor;

	/** Raycast debug. */
	UPROPERTY(Category = "Selector", EditAnywhere, BlueprintReadWrite)
	bool bRaycastDebugTrace;

	/**
	 * Call to activate / deactivate the selector.
	 * @param Activate - A boolean.
	 */
	UFUNCTION(BlueprintCallable)
	void ActivateSelector(bool Activate);

	/**
	 * Access to the currently selected interactable actor.
	 * @return AInteractable or nullptr if none is selected.
	 */
	UFUNCTION(BlueprintCallable)
	AInteractable* GetSelectedInteractable();

	/**
	 * Access any non-interactable actor hit by the selector.
	 * @return AActor or nullptr if none is selected.
	 */
	UFUNCTION(BlueprintCallable)
	AActor* GetNonInteractableHit();

	/** Called every frame. */
	virtual void Tick(float DeltaTime) override;

protected:
	/** Called when the game starts or when spawned. */
	virtual void BeginPlay() override;

	/** Called when this actor is being removed from the level. */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** Whether the selector is currently activated or not. */
	bool bSelectorActivated;

	/** Dampened forward vector. */
	FVector DampenedForwardVector;

	/**
	 * Updates DampenedForwardVector.
	 * @param DampeningFactor - Fraction of the current vector to keep.
	 */
	void UpdateDampenedForwardVector(float DampeningFactor);

	/**
	 * Computes the current start and end locations for the selector.
	 * @param Start - Where to store the start location.
	 * @param End - Where to store the end location.
	 */
	void ComputeRaycastEndpoints(FVector& Start, FVector& End) const;

	/**
	 * Computes the radius of the sphere required to hit at RaycastDistance and RaycastAngle.
	 * @return Radius of sphere.
	 */
	float ComputeSphereRadiusForCast() const;

	/**
	 * Computes our approximative angular distance to an Actor.
	 * It is approximative because we take the actor's bounding volume into consideration.
	 * @param Target - The actor.
	 * @return An approximative angular distance in degrees.
	 */
	float ComputeAngularDistance(AActor* Target) const;

	/** AInteractable */
	AInteractable* SelectedInteractable;

	/** If we hit a non-interactable object, we keep a reference to it. */
	TWeakObjectPtr<AActor> NonInteractableActorHit;

	/**
	 * Implements changes of target.
	 * @param Candidate - An interactable actor.
	 * @param Notify - Whether we should notify the old and/or new selections.
	 */
	void SetSelectedInteractable(AInteractable* Candidate, bool Notify = true);

	/**
	 * Call to change the activation of the aiming actor.
	 * @param Activate - New activation state.
	 */
	void ActivateAimingActor(bool Activate);

	/** Do we own the aiming actor? */
	bool bAimingActorOwned;

	/** Constructs the aiming actor, if necessary. */
	void BuildAimingActor();

	/** Destroys the aiming actor, if we own it. */
	void DestroyAimingActor();

	/**
	 * Call to change the beam activation.
	 * @param Activate - New activation state.
	 */
	void ActivateBeam(bool Activate);

	/** Updates the beam start tangent. */
	void OrientBeam();

	/** Constructs the selection beam, if a template was provided. */
	void BuildBeam();

	/** Destroys the selection beam, if one has been created. */
	void DestroyBeam();

	/** The beam particle system component created based on the BeatTemplate particle system. */
	UParticleSystemComponent* Beam;
};
