/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HandRecognitionFunctionLibrary.generated.h"

class UHandPoseRecognizer;
class UHandGestureRecognizer;

/** Output exec pins for the WaitForHandPose blueprint node. */
UENUM(BlueprintType)
enum class EWaitForHandPoseExitType : uint8
{
	PoseSeen,
	TimeOut,
};

/** Output exec pins for the WaitForHandGesture blueprint node. */
UENUM(BlueprintType)
enum class EWaitForHandGestureExitType : uint8
{
	GestureSeen,
	TimeOut,
};

/** Input/output exec pins for the RecordHandPose blueprint node. */
UENUM(BlueprintType)
enum class ERecordHandPoseEntryType : uint8
{
	StartRecording,
	StopRecording,
};

UENUM(BlueprintType)
enum class ERecordHandPoseExitType : uint8
{
	RecordingStarted,
	RecordingStopped,
};

/** Library for all hand pose recognition nodes. */
UCLASS()
class OCULUSHANDPOSERECOGNITION_API UHandRecognitionFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Waits for a hand pose to be recognized.
	 * @param HandPoseRecognizer - The hand pose recognizer component to wait on.
	 * @param PoseMinDuration - The pose must be maintained for this amount of time to be recognized.
	 * @param TimeToWait - The node will exit with TimeOut if no pose is recognized in this amount of time.  Use negative seconds to never time out.
	 * @param PoseIndex - Recognized pose index.
	 * @param PoseName - Recognized pose name.
	 * @param OutExecs - Exit pins.
	 */
	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject", ExpandEnumAsExecs = "OutExecs", PoseMinDuration = "0", TimeToWait = "-1"), Category = "Hand Recognition")
	static void WaitForHandPose(
		UObject* WorldContextObject,
		UHandPoseRecognizer* HandPoseRecognizer,
		float PoseMinDuration, float TimeToWait,
		EWaitForHandPoseExitType& OutExecs,
		int& PoseIndex, FString& PoseName,
		FLatentActionInfo LatentInfo);

	/**
	 * Waits for a hand gesture to be recognized.
	 * @param HandGestureRecognizer - The hand gesture recognizer component to wait on.
	 * @param TimeToWait - The node will exit with TimeOut if no gesture is recognized in this amount of time.  Use negative seconds to never time out.
	 * @param Behavior - Auto-reset of the behavior returned.
	 * @param GestureIndex - Recognized gesture index.
	 * @param GestureName - Recognized gesture name.
	 * @param GestureDirection - Recognized gesture direction.
	 * @param OutExecs - Exit pins.
	 */
	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject", ExpandEnumAsExecs = "OutExecs", PoseMinDuration = "0", TimeToWait = "-1"), Category = "Hand Recognition")
	static void WaitForHandGesture(
		UObject* WorldContextObject,
		UHandGestureRecognizer* HandGestureRecognizer,
		float TimeToWait, EGestureConsumptionBehavior Behavior,
		EWaitForHandGestureExitType& OutExecs,
		int& GestureIndex, FString& GestureName, FVector& GestureDirection, float& GestureOuterDuration, float& GestureInnerDuration,
		FLatentActionInfo LatentInfo);

	/**
	 * Records the range of hand pose to be recognized.
	 * @param Recognizer - HandPoseRecognizer used for hand side and wrist information.
	 * @param InExecs - Entry pins.
	 * @param OutExecs - Exit pins.
	 */
	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject", ExpandEnumAsExecs = "InExecs,OutExecs"), Category = "Hand Recognition")
	static void RecordHandPose(UObject* WorldContextObject, UHandPoseRecognizer* Recognizer, const ERecordHandPoseEntryType& InExecs, ERecordHandPoseExitType& OutExecs, FLatentActionInfo LatentInfo);
};
