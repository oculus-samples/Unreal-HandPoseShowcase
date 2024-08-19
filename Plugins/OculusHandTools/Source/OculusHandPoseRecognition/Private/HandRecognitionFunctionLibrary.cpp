/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "HandRecognitionFunctionLibrary.h"
#include "Engine.h"
#include "FWaitForHandPoseAction.h"
#include "FWaitForHandGestureAction.h"
#include "FRecordHandPoseAction.h"

void UHandRecognitionFunctionLibrary::WaitForHandPose(
	UObject* WorldContextObject,
	UHandPoseRecognizer* HandPoseRecognizer,
	float PoseMinDuration, float TimeToWait,
	EWaitForHandPoseExitType& OutExecs,
	int& PoseIndex, FString& PoseName,
	FLatentActionInfo LatentInfo)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FWaitForHandPoseAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID,
				new FWaitForHandPoseAction(LatentInfo, HandPoseRecognizer, PoseMinDuration, TimeToWait, &PoseIndex, &PoseName, &OutExecs));
		}
	}
}

void UHandRecognitionFunctionLibrary::WaitForHandGesture(
	UObject* WorldContextObject,
	UHandGestureRecognizer* HandGestureRecognizer,
	float TimeToWait, EGestureConsumptionBehavior Behavior,
	EWaitForHandGestureExitType& OutExecs,
	int& GestureIndex, FString& GestureName, FVector& GestureDirection, float& GestureOuterDuration, float& GestureInnerDuration,
	FLatentActionInfo LatentInfo)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FWaitForHandGestureAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID,
				new FWaitForHandGestureAction(LatentInfo, HandGestureRecognizer, TimeToWait, Behavior, &GestureIndex, &GestureName, &GestureDirection, &GestureOuterDuration, &GestureInnerDuration, &OutExecs));
		}
	}
}

void UHandRecognitionFunctionLibrary::RecordHandPose(UObject* WorldContextObject, UHandPoseRecognizer* Recognizer, const ERecordHandPoseEntryType& InExecs, ERecordHandPoseExitType& OutExecs, FLatentActionInfo LatentInfo)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FRecordHandPoseAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FRecordHandPoseAction(LatentInfo, Recognizer, &InExecs, &OutExecs));
		}
	}
}
