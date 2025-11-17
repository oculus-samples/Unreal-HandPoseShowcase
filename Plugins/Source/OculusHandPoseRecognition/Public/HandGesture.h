/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

#include "CoreMinimal.h"
#include "OculusXRInputFunctionLibrary.h"
#include "HandPose.h"
#include "HandGesture.generated.h"

class UHandPoseRecognizer;

/** Gesture progress. */
UENUM(BlueprintType)
enum class EGestureState : uint8
{
	GestureNotStarted,
	GestureInProgress,
	GestureCompleted
};

/** A single pose with minimum duration. */
struct FHandGestureStep
{
	// Values provided by the gesture description.
	int PoseIndex;
	float PoseMinDuration;

	// Timings acquired during recognition of this step.
	float StepFirstTime, StepLastTime;
};

/** A struct that represents a series of poses over time. */
USTRUCT(BlueprintType)
struct OCULUSHANDPOSERECOGNITION_API FHandGesture
{
	GENERATED_USTRUCT_BODY()

public:
	/** Name for this gesture. */
	UPROPERTY(Category = "Hand Gesture", EditAnywhere, BlueprintReadWrite)
	FString GestureName;

	/** Tolerance (in seconds) for intermediate poses that do not match the sequence. */
	UPROPERTY(Category = "Hand Gesture", EditAnywhere, BlueprintReadWrite)
	float MaxTransitionTime;

	/** Is this gesture representing a looping series of poses? (e.g. waving) */
	UPROPERTY(Category = "Hand Gesture", EditAnywhere, BlueprintReadWrite)
	bool bIsLooping;

	/** Series of poses as a string. */
	UPROPERTY(Category = "Hand Gesture", EditAnywhere, BlueprintReadWrite)
	FString CustomEncodedGesture;

	/** If true, will log gesture updates and transitions. */
	UPROPERTY(Category = "Hand Gesture", EditAnywhere, BlueprintReadWrite)
	bool bGestureDebugLog = false;

	/**
	 * Decodes the gesture string.
	 * @param HandPoseRecognizer - Needed to identify poses by name.
	 */
	bool ProcessEncodedGestureString(UHandPoseRecognizer* HandPoseRecognizer);

	/**
	 * Called regularly with current pose information to recognize the gesture.
	 * @param PoseIndex - HandPoseRecognizer current recognized pose index.
	 * @param PoseDuration - How long this pose has been held.
	 * @param DeltaTime - Time elapsed since last call.
	 * @param CurrentTime - Current time.
	 * @param Location - Current controller location.
	 * @param Pose - Current hand pose information.
	 * @return A boolean that indicates if the gesture is recognized.
	 */
	bool Step(int PoseIndex, float PoseDuration, float DeltaTime, float CurrentTime, const FVector& Location, const FHandPose& Pose);

	/** Each pose has a first and last game time registered. */
	enum PoseTimeType
	{
		PoseFirstTime,
		PoseLastTime
	};

	/**
	 * Computes the time between two gestures steps.
	 * By default, it computes the time taken from the end of the first pose and the last.
	 * @param FirstPoseIndex
	 * @param SecondPoseIndex
	 * @return Duration to transition from the first and second poses.
	 */
	float ComputeTransitionTime(int FirstPoseIndex = 0, PoseTimeType FirstPoseType = PoseLastTime, int SecondPoseIndex = -1, PoseTimeType SecondPoseType = PoseFirstTime) const;

	/** Returns the outer gesture duration. */
	float ComputeOuterDuration() const
	{
		return ComputeTransitionTime(0, PoseFirstTime, -1, PoseLastTime);
	}

	/** Returns the outer gesture duration. */
	float ComputeInnerDuration() const
	{
		return ComputeTransitionTime(0, PoseLastTime, -1, PoseFirstTime);
	}

	/**
	 * Called to reset the gesture recognition state.
	 * @param Force - Normally only resets when in progress or completed.
	 */
	void Reset(bool Force = false);

	/**
	 * Debug gesture with full log dump.
	 * @param GestureIndex - Supplied by the gesture recognition system.
	 * @param HandPoseRecognizer - Used to retrieve the pose name.
	 */
	void DumpGestureState(int GestureIndex, const UHandPoseRecognizer* HandPoseRecognizer) const;

	/** Returns the gesture direction. */
	FVector GetGestureDirection() const
	{
		return GestureEndLocation - GestureStartLocation;
	}

	/** Returns the gesture recognition state. */
	EGestureState GetGestureState() const
	{
		return GestureState;
	}

protected:
	/** Array of decoded poses that represent the gesture. */
	TArray<FHandGestureStep> TimedPoses;

	/** Gesture progress. */
	EGestureState GestureState;

	int CurrentStep = -1;
	FVector GestureStartLocation, GestureEndLocation;
	float DirectionBufferingFactor;
	float DurationInCurrentStep, DurationInTransition;
};
