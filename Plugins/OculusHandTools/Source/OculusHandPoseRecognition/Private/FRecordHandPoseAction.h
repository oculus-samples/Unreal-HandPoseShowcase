// Copyright (c) Facebook Technologies, LLC and its affiliates.  All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "Engine/LatentActionManager.h"
#include "LatentActions.h"
#include "HandPoseRecognizer.h"
#include "OculusHandPoseRecognitionModule.h"

/** Latent action for a blueprint node that can record the range of motion of a pose. */
class FRecordHandPoseAction : public FPendingLatentAction
{
public:
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;

	UHandPoseRecognizer* Recognizer;

	const ERecordHandPoseEntryType* InExecs;
	ERecordHandPoseExitType* OutExecs;

	FRecordHandPoseAction(const FLatentActionInfo& LatentInfo, UHandPoseRecognizer* Recognizer, const ERecordHandPoseEntryType* InExecs, ERecordHandPoseExitType* OutExecs)
		: ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, Recognizer(Recognizer)
		, InExecs(InExecs)
		, OutExecs(OutExecs)
	{
		bIsRecording = false;
		HandPoseRangeIndex = 0;
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		if (*InExecs == ERecordHandPoseEntryType::StartRecording)
		{
			if (!bIsRecording)
			{
				// Let's reset min and max poses.
				MinPose.UpdatePose(Recognizer->Side, Recognizer->GetComponentRotation());
				MaxPose.UpdatePose(Recognizer->Side, Recognizer->GetComponentRotation());
				bIsRecording = true;

				*OutExecs = ERecordHandPoseExitType::RecordingStarted;
				Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
			}
			else
			{
				FHandPose NewPose;
				NewPose.UpdatePose(Recognizer->Side, Recognizer->GetComponentRotation());

				MinPose.Min(NewPose);
				MaxPose.Max(NewPose);
			}
		}
		else // if (*InExecs == ERecordHandPoseEntryType::StopRecording)
		{
			if (bIsRecording)
			{
				LogHandPoseRecordedRange();
				bIsRecording = false;
			}

			*OutExecs = ERecordHandPoseExitType::RecordingStopped;
			Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);
		}
	}

#if WITH_EDITOR
	// Returns a human readable description of the latent operation's current state
	virtual FString GetDescription() const override
	{
		return FString::Format(
			TEXT("Hand Pose Recorder is %srecording the %s"),
			{ bIsRecording ? TEXT("") : TEXT("not "),
				*UEnum::GetValueAsString(Recognizer->Side) });
	}
#endif

protected:
	void LogHandPoseRecordedRange()
	{
		UE_LOG(LogHandPoseRecognition, Error, TEXT("Hand Pose Range Recorded #%d"), HandPoseRangeIndex++);

		// Error at 0.5 (half full range) is the maximum error.
		float TotalSquare0500Error = 0.0f;
		float TotalSquare0250Error = 0.0f;
		float TotalSquare0125Error = 0.0f;

		for (int Bone = 0; Bone < RecognizedBone::NUM; ++Bone)
		{
			FRotator MinRot = MinPose.GetRotator(RecognizedBone(Bone));
			FRotator MaxRot = MaxPose.GetRotator(RecognizedBone(Bone));

			// Range is as large as 180 degrees.
			float PitchRange = FMath::Abs(FMath::FindDeltaAngleDegrees(MaxRot.Pitch, MinRot.Pitch));
			float YawRange = FMath::Abs(FMath::FindDeltaAngleDegrees(MaxRot.Yaw, MinRot.Yaw));
			float RollRange = FMath::Abs(FMath::FindDeltaAngleDegrees(MaxRot.Roll, MinRot.Roll));

			// Max error is at most 180 degrees (0.5 * range).
			TotalSquare0500Error += FMath::Square(0.500 * PitchRange) + FMath::Square(0.500 * YawRange) + FMath::Square(0.500 * RollRange);
			TotalSquare0250Error += FMath::Square(0.250 * PitchRange) + FMath::Square(0.250 * YawRange) + FMath::Square(0.250 * RollRange);
			TotalSquare0125Error += FMath::Square(0.125 * PitchRange) + FMath::Square(0.125 * YawRange) + FMath::Square(0.125 * RollRange);

			UE_LOG(LogHandPoseRecognition, Warning, TEXT("%8s pitch %6.2f [%+7.2f .. %+7.2f]  yaw %6.2f [%+7.2f .. %+7.2f]  roll %6.2f [%+7.2f .. %+7.2f]"),
				*UEnum::GetValueAsString(RecognizedBone(Bone)),
				PitchRange, MinRot.Pitch, MaxRot.Pitch,
				YawRange, MinRot.Yaw, MaxRot.Yaw,
				RollRange, MinRot.Roll, MaxRot.Roll);
		}

		UE_LOG(LogHandPoseRecognition, Warning,
			TEXT("Hand pose range total square error - full=%0.2f half=%0.2f quarter=%0.2f"),
			TotalSquare0500Error, TotalSquare0250Error, TotalSquare0125Error);
	}

private:
	bool bIsRecording;
	FHandPose MinPose, MaxPose;
	int HandPoseRangeIndex;
};
