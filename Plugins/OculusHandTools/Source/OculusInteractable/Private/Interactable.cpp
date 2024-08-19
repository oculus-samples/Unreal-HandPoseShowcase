/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "Interactable.h"
#include "InteractableSelector.h"

AInteractable::AInteractable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AInteractable::BeginPlay()
{
	Super::BeginPlay();
}

void AInteractable::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	while (Selectors.Num() > 0)
	{
		AInteractableSelector* Selector = Selectors.Pop(false);
		Selector->SetSelectedInteractable(nullptr, false); // Remove with no notification.
	}

	Super::EndPlay(EndPlayReason);
}

void AInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractable::BeginSelection_Implementation(AInteractableSelector* Selector)
{
	// Meant to be subclassed, but do not forget to call Super::BeginSelection_Implementation.
	if (!Selectors.Contains(Selector))
	{
		Selectors.Add(Selector);
	}
}

void AInteractable::EndSelection_Implementation(AInteractableSelector* Selector)
{
	// Meant to be subclassed, but do not forget to call Super::EndSelection_Implementation.
	if (Selectors.Contains(Selector))
	{
		Selectors.Remove(Selector);
	}
}

bool AInteractable::IsSelected()
{
	return Selectors.Num() > 0;
}

const TArray<AInteractableSelector*>& AInteractable::GetSelectors() const
{
	return Selectors;
}

void AInteractable::SetInteractablePhysicsSimulation_Implementation(bool SimulatePhysics)
{
	UPrimitiveComponent* RootPrimitive = Cast<UPrimitiveComponent>(GetRootComponent());
	if (RootPrimitive)
	{
		RootPrimitive->SetSimulatePhysics(SimulatePhysics);
	}
}
