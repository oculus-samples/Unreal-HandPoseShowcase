/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

class AInteractableSelector;

/** Base actor class of interactable objects. */
UCLASS()
class OCULUSINTERACTABLE_API AInteractable : public AActor
{
	GENERATED_BODY()

public:
	/** Sets default values for this actor's properties. */
	AInteractable();

protected:
	/** Called when the game starts or when spawned. */
	virtual void BeginPlay() override;

	/** Called when this actor is being removed from the level. */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	/** Called every frame. */
	virtual void Tick(float DeltaTime) override;

	/**
	 * Event fired when selection starts.
	 * Can only be called from C++.
	 * @param Selector - The Interactable Selector that just selected us.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void BeginSelection(AInteractableSelector* Selector);

	/**
	 * Event fired when selection ends.
	 * Can only be called from C++.
	 * @param Selector - The Interactable Selector that stopped selecting us.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void EndSelection(AInteractableSelector* Selector);

	/**
	 * Call to check if you are currently selected.
	 * @return boolean
	 */
	UFUNCTION(BlueprintCallable)
	bool IsSelected();

	/**
	 * Optional generic user event.
	 * The meaning, implementation and invocation is left to the user.
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Interaction1();

	/**
	 * Optional generic user event.
	 * The meaning, implementation and invocation is left to the user.
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Interaction2();

	/**
	 * Optional generic user event.
	 * The meaning, implementation and invocation is left to the user.
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Interaction3();

	/**
	 * Call to get all selectors currently selecting us.
	 * @return An array of Interactable Selectors.
	 */
	const TArray<AInteractableSelector*>& GetSelectors() const;

	/**
	 * Method called to turn on/off physics on interactable.
	 * By default it checks if the root component is a primitive and applies the change there.
	 * You can override this method in blueprint for special cases.
	 * @param SimulatePhysics - boolean.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetInteractablePhysicsSimulation(bool SimulatePhysics);

protected:
	/** List of selectors currently selecting us. */
	TArray<AInteractableSelector*> Selectors;
};
