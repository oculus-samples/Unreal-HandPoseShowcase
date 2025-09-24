// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandGestureRecognizer.h"
#include "HandGesture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandGestureRecognizer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandGestureRecognizer();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandGestureRecognizer_NoRegister();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle();
OCULUSHANDPOSERECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FHandGesture();
UPackage* Z_Construct_UPackage__Script_OculusHandPoseRecognition();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGestureConsumptionBehavior ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGestureConsumptionBehavior;
static UEnum* EGestureConsumptionBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGestureConsumptionBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGestureConsumptionBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("EGestureConsumptionBehavior"));
	}
	return Z_Registration_Info_UEnum_EGestureConsumptionBehavior.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureConsumptionBehavior>()
{
	return EGestureConsumptionBehavior_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * What to do with a gesture after it has been returned by GetRecognizedHandGesture().\n */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "NoReset.Name", "EGestureConsumptionBehavior::NoReset" },
		{ "Reset.Name", "EGestureConsumptionBehavior::Reset" },
		{ "ResetAll.Name", "EGestureConsumptionBehavior::ResetAll" },
		{ "ToolTip", "What to do with a gesture after it has been returned by GetRecognizedHandGesture()." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGestureConsumptionBehavior::Reset", (int64)EGestureConsumptionBehavior::Reset },
		{ "EGestureConsumptionBehavior::ResetAll", (int64)EGestureConsumptionBehavior::ResetAll },
		{ "EGestureConsumptionBehavior::NoReset", (int64)EGestureConsumptionBehavior::NoReset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"EGestureConsumptionBehavior",
	"EGestureConsumptionBehavior",
	Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior()
{
	if (!Z_Registration_Info_UEnum_EGestureConsumptionBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGestureConsumptionBehavior.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGestureConsumptionBehavior.InnerSingleton;
}
// ********** End Enum EGestureConsumptionBehavior *************************************************

// ********** Begin Enum EGestureStrengthBone ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGestureStrengthBone;
static UEnum* EGestureStrengthBone_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGestureStrengthBone.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGestureStrengthBone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("EGestureStrengthBone"));
	}
	return Z_Registration_Info_UEnum_EGestureStrengthBone.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureStrengthBone>()
{
	return EGestureStrengthBone_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Bones for gesture strength settings.\n */" },
		{ "Index1.Name", "EGestureStrengthBone::Index1" },
		{ "Index2.Name", "EGestureStrengthBone::Index2" },
		{ "Index3.Name", "EGestureStrengthBone::Index3" },
		{ "Middle1.Name", "EGestureStrengthBone::Middle1" },
		{ "Middle2.Name", "EGestureStrengthBone::Middle2" },
		{ "Middle3.Name", "EGestureStrengthBone::Middle3" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "Pinky0.Name", "EGestureStrengthBone::Pinky0" },
		{ "Pinky1.Name", "EGestureStrengthBone::Pinky1" },
		{ "Pinky2.Name", "EGestureStrengthBone::Pinky2" },
		{ "Pinky3.Name", "EGestureStrengthBone::Pinky3" },
		{ "Ring1.Name", "EGestureStrengthBone::Ring1" },
		{ "Ring2.Name", "EGestureStrengthBone::Ring2" },
		{ "Ring3.Name", "EGestureStrengthBone::Ring3" },
		{ "Thumb0.Name", "EGestureStrengthBone::Thumb0" },
		{ "Thumb1.Name", "EGestureStrengthBone::Thumb1" },
		{ "Thumb2.Name", "EGestureStrengthBone::Thumb2" },
		{ "Thumb3.Name", "EGestureStrengthBone::Thumb3" },
		{ "ToolTip", "Bones for gesture strength settings." },
		{ "Wrist.Name", "EGestureStrengthBone::Wrist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGestureStrengthBone::Thumb0", (int64)EGestureStrengthBone::Thumb0 },
		{ "EGestureStrengthBone::Thumb1", (int64)EGestureStrengthBone::Thumb1 },
		{ "EGestureStrengthBone::Thumb2", (int64)EGestureStrengthBone::Thumb2 },
		{ "EGestureStrengthBone::Thumb3", (int64)EGestureStrengthBone::Thumb3 },
		{ "EGestureStrengthBone::Index1", (int64)EGestureStrengthBone::Index1 },
		{ "EGestureStrengthBone::Index2", (int64)EGestureStrengthBone::Index2 },
		{ "EGestureStrengthBone::Index3", (int64)EGestureStrengthBone::Index3 },
		{ "EGestureStrengthBone::Middle1", (int64)EGestureStrengthBone::Middle1 },
		{ "EGestureStrengthBone::Middle2", (int64)EGestureStrengthBone::Middle2 },
		{ "EGestureStrengthBone::Middle3", (int64)EGestureStrengthBone::Middle3 },
		{ "EGestureStrengthBone::Ring1", (int64)EGestureStrengthBone::Ring1 },
		{ "EGestureStrengthBone::Ring2", (int64)EGestureStrengthBone::Ring2 },
		{ "EGestureStrengthBone::Ring3", (int64)EGestureStrengthBone::Ring3 },
		{ "EGestureStrengthBone::Pinky0", (int64)EGestureStrengthBone::Pinky0 },
		{ "EGestureStrengthBone::Pinky1", (int64)EGestureStrengthBone::Pinky1 },
		{ "EGestureStrengthBone::Pinky2", (int64)EGestureStrengthBone::Pinky2 },
		{ "EGestureStrengthBone::Pinky3", (int64)EGestureStrengthBone::Pinky3 },
		{ "EGestureStrengthBone::Wrist", (int64)EGestureStrengthBone::Wrist },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"EGestureStrengthBone",
	"EGestureStrengthBone",
	Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone()
{
	if (!Z_Registration_Info_UEnum_EGestureStrengthBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGestureStrengthBone.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBone_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGestureStrengthBone.InnerSingleton;
}
// ********** End Enum EGestureStrengthBone ********************************************************

// ********** Begin Enum EGestureStrengthBoneAngle *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGestureStrengthBoneAngle;
static UEnum* EGestureStrengthBoneAngle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGestureStrengthBoneAngle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGestureStrengthBoneAngle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("EGestureStrengthBoneAngle"));
	}
	return Z_Registration_Info_UEnum_EGestureStrengthBoneAngle.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureStrengthBoneAngle>()
{
	return EGestureStrengthBoneAngle_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Angles for gesture strength settings.\n */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "Pitch.Name", "EGestureStrengthBoneAngle::Pitch" },
		{ "Roll.Name", "EGestureStrengthBoneAngle::Roll" },
		{ "ToolTip", "Angles for gesture strength settings." },
		{ "Yaw.Name", "EGestureStrengthBoneAngle::Yaw" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGestureStrengthBoneAngle::Pitch", (int64)EGestureStrengthBoneAngle::Pitch },
		{ "EGestureStrengthBoneAngle::Yaw", (int64)EGestureStrengthBoneAngle::Yaw },
		{ "EGestureStrengthBoneAngle::Roll", (int64)EGestureStrengthBoneAngle::Roll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"EGestureStrengthBoneAngle",
	"EGestureStrengthBoneAngle",
	Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle()
{
	if (!Z_Registration_Info_UEnum_EGestureStrengthBoneAngle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGestureStrengthBoneAngle.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_EGestureStrengthBoneAngle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGestureStrengthBoneAngle.InnerSingleton;
}
// ********** End Enum EGestureStrengthBoneAngle ***************************************************

// ********** Begin Class UHandGestureRecognizer Function DumpAllGestureStates *********************
struct Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/** For debugging purposes: a state dump of all hand gestures. */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "For debugging purposes: a state dump of all hand gestures." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandGestureRecognizer, nullptr, "DumpAllGestureStates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandGestureRecognizer::execDumpAllGestureStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpAllGestureStates();
	P_NATIVE_END;
}
// ********** End Class UHandGestureRecognizer Function DumpAllGestureStates ***********************

// ********** Begin Class UHandGestureRecognizer Function GetGestureRecognitionState ***************
struct Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics
{
	struct HandGestureRecognizer_eventGetGestureRecognitionState_Parms
	{
		int32 Index;
		EGestureState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Call to get the state of recognition of a specific gesture.\n\x09 * @param Index - Index of the gesture to query.\n\x09 * @return Current state of gesture recognition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Call to get the state of recognition of a specific gesture.\n@param Index - Index of the gesture to query.\n@return Current state of gesture recognition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Gesture State" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetGestureRecognitionState_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetGestureRecognitionState_Parms, ReturnValue), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2613134979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandGestureRecognizer, nullptr, "GetGestureRecognitionState", Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::HandGestureRecognizer_eventGetGestureRecognitionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::HandGestureRecognizer_eventGetGestureRecognitionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandGestureRecognizer::execGetGestureRecognitionState)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGestureState*)Z_Param__Result=P_THIS->GetGestureRecognitionState(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UHandGestureRecognizer Function GetGestureRecognitionState *****************

// ********** Begin Class UHandGestureRecognizer Function GetRecognizedHandGesture *****************
struct Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics
{
	struct HandGestureRecognizer_eventGetRecognizedHandGesture_Parms
	{
		EGestureConsumptionBehavior Behavior;
		int32 Index;
		FString Name;
		FVector GestureDirection;
		float GestureOuterDuration;
		float GestureInnerDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Call to get the currently recognized gesture.\n\x09 * @param Behavior - Auto-reset of the behavior returned.\n\x09 * @param Index - Index of the recognized gesture.\n\x09 * @param Name - Name of the recognized gesture.\n\x09 * @param GestureDirection - Gesture vector, relative to owning actor.\n\x09 * @param GestureOuterDuration - Overall gesture duration.\n\x09 * @param GestureInnerDuration - Inner gesture duration.\n\x09 * @return A boolean that indicates if a gesture is currently recognized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Call to get the currently recognized gesture.\n@param Behavior - Auto-reset of the behavior returned.\n@param Index - Index of the recognized gesture.\n@param Name - Name of the recognized gesture.\n@param GestureDirection - Gesture vector, relative to owning actor.\n@param GestureOuterDuration - Overall gesture duration.\n@param GestureInnerDuration - Inner gesture duration.\n@return A boolean that indicates if a gesture is currently recognized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Gesture Recognized" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Behavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Behavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GestureOuterDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GestureInnerDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Behavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms, Behavior), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior, METADATA_PARAMS(0, nullptr) }; // 246412616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_GestureDirection = { "GestureDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms, GestureDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_GestureOuterDuration = { "GestureOuterDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms, GestureOuterDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_GestureInnerDuration = { "GestureInnerDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms, GestureInnerDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandGestureRecognizer_eventGetRecognizedHandGesture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandGestureRecognizer_eventGetRecognizedHandGesture_Parms), &Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Behavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Behavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_GestureDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_GestureOuterDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_GestureInnerDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandGestureRecognizer, nullptr, "GetRecognizedHandGesture", Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::HandGestureRecognizer_eventGetRecognizedHandGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::HandGestureRecognizer_eventGetRecognizedHandGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandGestureRecognizer::execGetRecognizedHandGesture)
{
	P_GET_ENUM(EGestureConsumptionBehavior,Z_Param_Behavior);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GestureDirection);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GestureOuterDuration);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GestureInnerDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRecognizedHandGesture(EGestureConsumptionBehavior(Z_Param_Behavior),Z_Param_Out_Index,Z_Param_Out_Name,Z_Param_Out_GestureDirection,Z_Param_Out_GestureOuterDuration,Z_Param_Out_GestureInnerDuration);
	P_NATIVE_END;
}
// ********** End Class UHandGestureRecognizer Function GetRecognizedHandGesture *******************

// ********** Begin Class UHandGestureRecognizer Function ResetAllHandGestures *********************
struct Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/** Resets all hand gestures. */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Resets all hand gestures." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandGestureRecognizer, nullptr, "ResetAllHandGestures", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandGestureRecognizer::execResetAllHandGestures)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllHandGestures();
	P_NATIVE_END;
}
// ********** End Class UHandGestureRecognizer Function ResetAllHandGestures ***********************

// ********** Begin Class UHandGestureRecognizer Function ResetHandGesture *************************
struct Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics
{
	struct HandGestureRecognizer_eventResetHandGesture_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Resets the specified hand gesture by index.\n\x09 * @param Index - Where to store the index of the recognized gesture.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Resets the specified hand gesture by index.\n@param Index - Where to store the index of the recognized gesture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandGestureRecognizer_eventResetHandGesture_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandGestureRecognizer, nullptr, "ResetHandGesture", Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::HandGestureRecognizer_eventResetHandGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::HandGestureRecognizer_eventResetHandGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandGestureRecognizer::execResetHandGesture)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetHandGesture(Z_Param_Out_Index);
	P_NATIVE_END;
}
// ********** End Class UHandGestureRecognizer Function ResetHandGesture ***************************

// ********** Begin Class UHandGestureRecognizer ***************************************************
void UHandGestureRecognizer::StaticRegisterNativesUHandGestureRecognizer()
{
	UClass* Class = UHandGestureRecognizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DumpAllGestureStates", &UHandGestureRecognizer::execDumpAllGestureStates },
		{ "GetGestureRecognitionState", &UHandGestureRecognizer::execGetGestureRecognitionState },
		{ "GetRecognizedHandGesture", &UHandGestureRecognizer::execGetRecognizedHandGesture },
		{ "ResetAllHandGestures", &UHandGestureRecognizer::execResetAllHandGestures },
		{ "ResetHandGesture", &UHandGestureRecognizer::execResetHandGesture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHandGestureRecognizer;
UClass* UHandGestureRecognizer::GetPrivateStaticClass()
{
	using TClass = UHandGestureRecognizer;
	if (!Z_Registration_Info_UClass_UHandGestureRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandGestureRecognizer"),
			Z_Registration_Info_UClass_UHandGestureRecognizer.InnerSingleton,
			StaticRegisterNativesUHandGestureRecognizer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHandGestureRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandGestureRecognizer_NoRegister()
{
	return UHandGestureRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandGestureRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Actor component that recognizes gestures (i.e. poses over time).\n *\n * @warning Must be attached to a UHandPoseRecognizer.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HandGestureRecognizer.h" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor component that recognizes gestures (i.e. poses over time).\n\n@warning Must be attached to a UHandPoseRecognizer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionInterval_MetaData[] = {
		{ "Category", "Hand Gesture Recognition" },
		{ "Comment", "/** Minimum time interval between hand recognitions (throttling). */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Minimum time interval between hand recognitions (throttling)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionSkippedFrames_MetaData[] = {
		{ "Category", "Hand Gesture Recognition" },
		{ "Comment", "/** Minimum number of frames to skip between hand recognitions (throttling). */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Minimum number of frames to skip between hand recognitions (throttling)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gestures_MetaData[] = {
		{ "Category", "Hand Gesture Recognition" },
		{ "Comment", "/** Collection of hand gestures to recognize. */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Collection of hand gestures to recognize." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRecognizedGesture_MetaData[] = {
		{ "Category", "Hand Gesture Recognition" },
		{ "Comment", "/**\n\x09 * Call to check if there is a recognized gesture pending.\n\x09 * @return A boolean that indicates if there's at least one pending gesture recognized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandGestureRecognizer.h" },
		{ "ToolTip", "Call to check if there is a recognized gesture pending.\n@return A boolean that indicates if there's at least one pending gesture recognized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecognitionInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecognitionSkippedFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gestures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gestures;
	static void NewProp_bHasRecognizedGesture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRecognizedGesture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandGestureRecognizer_DumpAllGestureStates, "DumpAllGestureStates" }, // 313743875
		{ &Z_Construct_UFunction_UHandGestureRecognizer_GetGestureRecognitionState, "GetGestureRecognitionState" }, // 490087448
		{ &Z_Construct_UFunction_UHandGestureRecognizer_GetRecognizedHandGesture, "GetRecognizedHandGesture" }, // 3105286793
		{ &Z_Construct_UFunction_UHandGestureRecognizer_ResetAllHandGestures, "ResetAllHandGestures" }, // 3398432743
		{ &Z_Construct_UFunction_UHandGestureRecognizer_ResetHandGesture, "ResetHandGesture" }, // 2996871496
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandGestureRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_RecognitionInterval = { "RecognitionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandGestureRecognizer, RecognitionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecognitionInterval_MetaData), NewProp_RecognitionInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_RecognitionSkippedFrames = { "RecognitionSkippedFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandGestureRecognizer, RecognitionSkippedFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecognitionSkippedFrames_MetaData), NewProp_RecognitionSkippedFrames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_Gestures_Inner = { "Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHandGesture, METADATA_PARAMS(0, nullptr) }; // 1441816886
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_Gestures = { "Gestures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandGestureRecognizer, Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gestures_MetaData), NewProp_Gestures_MetaData) }; // 1441816886
void Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_bHasRecognizedGesture_SetBit(void* Obj)
{
	((UHandGestureRecognizer*)Obj)->bHasRecognizedGesture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_bHasRecognizedGesture = { "bHasRecognizedGesture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHandGestureRecognizer), &Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_bHasRecognizedGesture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRecognizedGesture_MetaData), NewProp_bHasRecognizedGesture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandGestureRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_RecognitionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_RecognitionSkippedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_Gestures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_Gestures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandGestureRecognizer_Statics::NewProp_bHasRecognizedGesture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandGestureRecognizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHandGestureRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandGestureRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandGestureRecognizer_Statics::ClassParams = {
	&UHandGestureRecognizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHandGestureRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHandGestureRecognizer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandGestureRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandGestureRecognizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandGestureRecognizer()
{
	if (!Z_Registration_Info_UClass_UHandGestureRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandGestureRecognizer.OuterSingleton, Z_Construct_UClass_UHandGestureRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandGestureRecognizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandGestureRecognizer);
UHandGestureRecognizer::~UHandGestureRecognizer() {}
// ********** End Class UHandGestureRecognizer *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h__Script_OculusHandPoseRecognition_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGestureConsumptionBehavior_StaticEnum, TEXT("EGestureConsumptionBehavior"), &Z_Registration_Info_UEnum_EGestureConsumptionBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 246412616U) },
		{ EGestureStrengthBone_StaticEnum, TEXT("EGestureStrengthBone"), &Z_Registration_Info_UEnum_EGestureStrengthBone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1856051123U) },
		{ EGestureStrengthBoneAngle_StaticEnum, TEXT("EGestureStrengthBoneAngle"), &Z_Registration_Info_UEnum_EGestureStrengthBoneAngle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 683353905U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandGestureRecognizer, UHandGestureRecognizer::StaticClass, TEXT("UHandGestureRecognizer"), &Z_Registration_Info_UClass_UHandGestureRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandGestureRecognizer), 1832883219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h__Script_OculusHandPoseRecognition_43023827(TEXT("/Script/OculusHandPoseRecognition"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h__Script_OculusHandPoseRecognition_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h__Script_OculusHandPoseRecognition_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h__Script_OculusHandPoseRecognition_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGestureRecognizer_h__Script_OculusHandPoseRecognition_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
