// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandRecognitionFunctionLibrary.h"
#include "Engine/LatentActionManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandRecognitionFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandGestureRecognizer_NoRegister();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandPoseRecognizer_NoRegister();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandRecognitionFunctionLibrary();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandRecognitionFunctionLibrary_NoRegister();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType();
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType();
UPackage* Z_Construct_UPackage__Script_OculusHandPoseRecognition();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EWaitForHandPoseExitType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaitForHandPoseExitType;
static UEnum* EWaitForHandPoseExitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaitForHandPoseExitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaitForHandPoseExitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("EWaitForHandPoseExitType"));
	}
	return Z_Registration_Info_UEnum_EWaitForHandPoseExitType.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EWaitForHandPoseExitType>()
{
	return EWaitForHandPoseExitType_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Output exec pins for the WaitForHandPose blueprint node. */" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "PoseSeen.Name", "EWaitForHandPoseExitType::PoseSeen" },
		{ "TimeOut.Name", "EWaitForHandPoseExitType::TimeOut" },
		{ "ToolTip", "Output exec pins for the WaitForHandPose blueprint node." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaitForHandPoseExitType::PoseSeen", (int64)EWaitForHandPoseExitType::PoseSeen },
		{ "EWaitForHandPoseExitType::TimeOut", (int64)EWaitForHandPoseExitType::TimeOut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"EWaitForHandPoseExitType",
	"EWaitForHandPoseExitType",
	Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType()
{
	if (!Z_Registration_Info_UEnum_EWaitForHandPoseExitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaitForHandPoseExitType.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaitForHandPoseExitType.InnerSingleton;
}
// ********** End Enum EWaitForHandPoseExitType ****************************************************

// ********** Begin Enum EWaitForHandGestureExitType ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaitForHandGestureExitType;
static UEnum* EWaitForHandGestureExitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWaitForHandGestureExitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWaitForHandGestureExitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("EWaitForHandGestureExitType"));
	}
	return Z_Registration_Info_UEnum_EWaitForHandGestureExitType.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EWaitForHandGestureExitType>()
{
	return EWaitForHandGestureExitType_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Output exec pins for the WaitForHandGesture blueprint node. */" },
		{ "GestureSeen.Name", "EWaitForHandGestureExitType::GestureSeen" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "TimeOut.Name", "EWaitForHandGestureExitType::TimeOut" },
		{ "ToolTip", "Output exec pins for the WaitForHandGesture blueprint node." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWaitForHandGestureExitType::GestureSeen", (int64)EWaitForHandGestureExitType::GestureSeen },
		{ "EWaitForHandGestureExitType::TimeOut", (int64)EWaitForHandGestureExitType::TimeOut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"EWaitForHandGestureExitType",
	"EWaitForHandGestureExitType",
	Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType()
{
	if (!Z_Registration_Info_UEnum_EWaitForHandGestureExitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaitForHandGestureExitType.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWaitForHandGestureExitType.InnerSingleton;
}
// ********** End Enum EWaitForHandGestureExitType *************************************************

// ********** Begin Enum ERecordHandPoseEntryType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecordHandPoseEntryType;
static UEnum* ERecordHandPoseEntryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecordHandPoseEntryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecordHandPoseEntryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("ERecordHandPoseEntryType"));
	}
	return Z_Registration_Info_UEnum_ERecordHandPoseEntryType.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<ERecordHandPoseEntryType>()
{
	return ERecordHandPoseEntryType_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Input/output exec pins for the RecordHandPose blueprint node. */" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "StartRecording.Name", "ERecordHandPoseEntryType::StartRecording" },
		{ "StopRecording.Name", "ERecordHandPoseEntryType::StopRecording" },
		{ "ToolTip", "Input/output exec pins for the RecordHandPose blueprint node." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecordHandPoseEntryType::StartRecording", (int64)ERecordHandPoseEntryType::StartRecording },
		{ "ERecordHandPoseEntryType::StopRecording", (int64)ERecordHandPoseEntryType::StopRecording },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"ERecordHandPoseEntryType",
	"ERecordHandPoseEntryType",
	Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType()
{
	if (!Z_Registration_Info_UEnum_ERecordHandPoseEntryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecordHandPoseEntryType.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecordHandPoseEntryType.InnerSingleton;
}
// ********** End Enum ERecordHandPoseEntryType ****************************************************

// ********** Begin Enum ERecordHandPoseExitType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecordHandPoseExitType;
static UEnum* ERecordHandPoseExitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecordHandPoseExitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecordHandPoseExitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("ERecordHandPoseExitType"));
	}
	return Z_Registration_Info_UEnum_ERecordHandPoseExitType.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<ERecordHandPoseExitType>()
{
	return ERecordHandPoseExitType_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "RecordingStarted.Name", "ERecordHandPoseExitType::RecordingStarted" },
		{ "RecordingStopped.Name", "ERecordHandPoseExitType::RecordingStopped" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecordHandPoseExitType::RecordingStarted", (int64)ERecordHandPoseExitType::RecordingStarted },
		{ "ERecordHandPoseExitType::RecordingStopped", (int64)ERecordHandPoseExitType::RecordingStopped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"ERecordHandPoseExitType",
	"ERecordHandPoseExitType",
	Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType()
{
	if (!Z_Registration_Info_UEnum_ERecordHandPoseExitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecordHandPoseExitType.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecordHandPoseExitType.InnerSingleton;
}
// ********** End Enum ERecordHandPoseExitType *****************************************************

// ********** Begin Class UHandRecognitionFunctionLibrary Function RecordHandPose ******************
struct Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics
{
	struct HandRecognitionFunctionLibrary_eventRecordHandPose_Parms
	{
		UObject* WorldContextObject;
		UHandPoseRecognizer* Recognizer;
		ERecordHandPoseEntryType InExecs;
		ERecordHandPoseExitType OutExecs;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hand Recognition" },
		{ "Comment", "/**\n\x09 * Records the range of hand pose to be recognized.\n\x09 * @param Recognizer - HandPoseRecognizer used for hand side and wrist information.\n\x09 * @param InExecs - Entry pins.\n\x09 * @param OutExecs - Exit pins.\n\x09 */" },
		{ "ExpandEnumAsExecs", "InExecs,OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "ToolTip", "Records the range of hand pose to be recognized.\n@param Recognizer - HandPoseRecognizer used for hand side and wrist information.\n@param InExecs - Entry pins.\n@param OutExecs - Exit pins." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Recognizer_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExecs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Recognizer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InExecs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventRecordHandPose_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_Recognizer = { "Recognizer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventRecordHandPose_Parms, Recognizer), Z_Construct_UClass_UHandPoseRecognizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Recognizer_MetaData), NewProp_Recognizer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_InExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_InExecs = { "InExecs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventRecordHandPose_Parms, InExecs), Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseEntryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExecs_MetaData), NewProp_InExecs_MetaData) }; // 145839840
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventRecordHandPose_Parms, OutExecs), Z_Construct_UEnum_OculusHandPoseRecognition_ERecordHandPoseExitType, METADATA_PARAMS(0, nullptr) }; // 4220277439
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventRecordHandPose_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_Recognizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_InExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_InExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandRecognitionFunctionLibrary, nullptr, "RecordHandPose", Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::HandRecognitionFunctionLibrary_eventRecordHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::HandRecognitionFunctionLibrary_eventRecordHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandRecognitionFunctionLibrary::execRecordHandPose)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UHandPoseRecognizer,Z_Param_Recognizer);
	P_GET_ENUM_REF(ERecordHandPoseEntryType,Z_Param_Out_InExecs);
	P_GET_ENUM_REF(ERecordHandPoseExitType,Z_Param_Out_OutExecs);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHandRecognitionFunctionLibrary::RecordHandPose(Z_Param_WorldContextObject,Z_Param_Recognizer,(ERecordHandPoseEntryType&)(Z_Param_Out_InExecs),(ERecordHandPoseExitType&)(Z_Param_Out_OutExecs),Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UHandRecognitionFunctionLibrary Function RecordHandPose ********************

// ********** Begin Class UHandRecognitionFunctionLibrary Function WaitForHandGesture **************
struct Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics
{
	struct HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms
	{
		UObject* WorldContextObject;
		UHandGestureRecognizer* HandGestureRecognizer;
		float TimeToWait;
		EGestureConsumptionBehavior Behavior;
		EWaitForHandGestureExitType OutExecs;
		int32 GestureIndex;
		FString GestureName;
		FVector GestureDirection;
		float GestureOuterDuration;
		float GestureInnerDuration;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hand Recognition" },
		{ "Comment", "/**\n\x09 * Waits for a hand gesture to be recognized.\n\x09 * @param HandGestureRecognizer - The hand gesture recognizer component to wait on.\n\x09 * @param TimeToWait - The node will exit with TimeOut if no gesture is recognized in this amount of time.  Use negative seconds to never time out.\n\x09 * @param Behavior - Auto-reset of the behavior returned.\n\x09 * @param GestureIndex - Recognized gesture index.\n\x09 * @param GestureName - Recognized gesture name.\n\x09 * @param GestureDirection - Recognized gesture direction.\n\x09 * @param OutExecs - Exit pins.\n\x09 */" },
		{ "ExpandEnumAsExecs", "OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "PoseMinDuration", "0" },
		{ "TimeToWait", "-1" },
		{ "ToolTip", "Waits for a hand gesture to be recognized.\n@param HandGestureRecognizer - The hand gesture recognizer component to wait on.\n@param TimeToWait - The node will exit with TimeOut if no gesture is recognized in this amount of time.  Use negative seconds to never time out.\n@param Behavior - Auto-reset of the behavior returned.\n@param GestureIndex - Recognized gesture index.\n@param GestureName - Recognized gesture name.\n@param GestureDirection - Recognized gesture direction.\n@param OutExecs - Exit pins." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandGestureRecognizer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandGestureRecognizer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Behavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Behavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GestureIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GestureName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GestureDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GestureOuterDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GestureInnerDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_HandGestureRecognizer = { "HandGestureRecognizer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, HandGestureRecognizer), Z_Construct_UClass_UHandGestureRecognizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandGestureRecognizer_MetaData), NewProp_HandGestureRecognizer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_TimeToWait = { "TimeToWait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, TimeToWait), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_Behavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, Behavior), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureConsumptionBehavior, METADATA_PARAMS(0, nullptr) }; // 246412616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, OutExecs), Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandGestureExitType, METADATA_PARAMS(0, nullptr) }; // 3228071502
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureIndex = { "GestureIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, GestureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureName = { "GestureName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, GestureName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureDirection = { "GestureDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, GestureDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureOuterDuration = { "GestureOuterDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, GestureOuterDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureInnerDuration = { "GestureInnerDuration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, GestureInnerDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_HandGestureRecognizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_TimeToWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_Behavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_Behavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureOuterDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_GestureInnerDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandRecognitionFunctionLibrary, nullptr, "WaitForHandGesture", Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::HandRecognitionFunctionLibrary_eventWaitForHandGesture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandRecognitionFunctionLibrary::execWaitForHandGesture)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UHandGestureRecognizer,Z_Param_HandGestureRecognizer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToWait);
	P_GET_ENUM(EGestureConsumptionBehavior,Z_Param_Behavior);
	P_GET_ENUM_REF(EWaitForHandGestureExitType,Z_Param_Out_OutExecs);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GestureIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GestureName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GestureDirection);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GestureOuterDuration);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GestureInnerDuration);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHandRecognitionFunctionLibrary::WaitForHandGesture(Z_Param_WorldContextObject,Z_Param_HandGestureRecognizer,Z_Param_TimeToWait,EGestureConsumptionBehavior(Z_Param_Behavior),(EWaitForHandGestureExitType&)(Z_Param_Out_OutExecs),Z_Param_Out_GestureIndex,Z_Param_Out_GestureName,Z_Param_Out_GestureDirection,Z_Param_Out_GestureOuterDuration,Z_Param_Out_GestureInnerDuration,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UHandRecognitionFunctionLibrary Function WaitForHandGesture ****************

// ********** Begin Class UHandRecognitionFunctionLibrary Function WaitForHandPose *****************
struct Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics
{
	struct HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms
	{
		UObject* WorldContextObject;
		UHandPoseRecognizer* HandPoseRecognizer;
		float PoseMinDuration;
		float TimeToWait;
		EWaitForHandPoseExitType OutExecs;
		int32 PoseIndex;
		FString PoseName;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hand Recognition" },
		{ "Comment", "/**\n\x09 * Waits for a hand pose to be recognized.\n\x09 * @param HandPoseRecognizer - The hand pose recognizer component to wait on.\n\x09 * @param PoseMinDuration - The pose must be maintained for this amount of time to be recognized.\n\x09 * @param TimeToWait - The node will exit with TimeOut if no pose is recognized in this amount of time.  Use negative seconds to never time out.\n\x09 * @param PoseIndex - Recognized pose index.\n\x09 * @param PoseName - Recognized pose name.\n\x09 * @param OutExecs - Exit pins.\n\x09 */" },
		{ "ExpandEnumAsExecs", "OutExecs" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "PoseMinDuration", "0" },
		{ "TimeToWait", "-1" },
		{ "ToolTip", "Waits for a hand pose to be recognized.\n@param HandPoseRecognizer - The hand pose recognizer component to wait on.\n@param PoseMinDuration - The pose must be maintained for this amount of time to be recognized.\n@param TimeToWait - The node will exit with TimeOut if no pose is recognized in this amount of time.  Use negative seconds to never time out.\n@param PoseIndex - Recognized pose index.\n@param PoseName - Recognized pose name.\n@param OutExecs - Exit pins." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseRecognizer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandPoseRecognizer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseMinDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutExecs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutExecs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoseIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PoseName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_HandPoseRecognizer = { "HandPoseRecognizer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, HandPoseRecognizer), Z_Construct_UClass_UHandPoseRecognizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPoseRecognizer_MetaData), NewProp_HandPoseRecognizer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_PoseMinDuration = { "PoseMinDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, PoseMinDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_TimeToWait = { "TimeToWait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, TimeToWait), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_OutExecs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_OutExecs = { "OutExecs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, OutExecs), Z_Construct_UEnum_OculusHandPoseRecognition_EWaitForHandPoseExitType, METADATA_PARAMS(0, nullptr) }; // 2397974951
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_PoseIndex = { "PoseIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, PoseIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, PoseName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_HandPoseRecognizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_PoseMinDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_TimeToWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_OutExecs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_OutExecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_PoseIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_PoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandRecognitionFunctionLibrary, nullptr, "WaitForHandPose", Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::HandRecognitionFunctionLibrary_eventWaitForHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandRecognitionFunctionLibrary::execWaitForHandPose)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UHandPoseRecognizer,Z_Param_HandPoseRecognizer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PoseMinDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToWait);
	P_GET_ENUM_REF(EWaitForHandPoseExitType,Z_Param_Out_OutExecs);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PoseIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PoseName);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHandRecognitionFunctionLibrary::WaitForHandPose(Z_Param_WorldContextObject,Z_Param_HandPoseRecognizer,Z_Param_PoseMinDuration,Z_Param_TimeToWait,(EWaitForHandPoseExitType&)(Z_Param_Out_OutExecs),Z_Param_Out_PoseIndex,Z_Param_Out_PoseName,Z_Param_LatentInfo);
	P_NATIVE_END;
}
// ********** End Class UHandRecognitionFunctionLibrary Function WaitForHandPose *******************

// ********** Begin Class UHandRecognitionFunctionLibrary ******************************************
void UHandRecognitionFunctionLibrary::StaticRegisterNativesUHandRecognitionFunctionLibrary()
{
	UClass* Class = UHandRecognitionFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RecordHandPose", &UHandRecognitionFunctionLibrary::execRecordHandPose },
		{ "WaitForHandGesture", &UHandRecognitionFunctionLibrary::execWaitForHandGesture },
		{ "WaitForHandPose", &UHandRecognitionFunctionLibrary::execWaitForHandPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary;
UClass* UHandRecognitionFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UHandRecognitionFunctionLibrary;
	if (!Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandRecognitionFunctionLibrary"),
			Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUHandRecognitionFunctionLibrary,
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
	return Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandRecognitionFunctionLibrary_NoRegister()
{
	return UHandRecognitionFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Library for all hand pose recognition nodes. */" },
		{ "IncludePath", "HandRecognitionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HandRecognitionFunctionLibrary.h" },
		{ "ToolTip", "Library for all hand pose recognition nodes." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandRecognitionFunctionLibrary_RecordHandPose, "RecordHandPose" }, // 1607170404
		{ &Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandGesture, "WaitForHandGesture" }, // 1512814926
		{ &Z_Construct_UFunction_UHandRecognitionFunctionLibrary_WaitForHandPose, "WaitForHandPose" }, // 1242665761
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandRecognitionFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics::ClassParams = {
	&UHandRecognitionFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandRecognitionFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary.OuterSingleton;
}
UHandRecognitionFunctionLibrary::UHandRecognitionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandRecognitionFunctionLibrary);
UHandRecognitionFunctionLibrary::~UHandRecognitionFunctionLibrary() {}
// ********** End Class UHandRecognitionFunctionLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h__Script_OculusHandPoseRecognition_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWaitForHandPoseExitType_StaticEnum, TEXT("EWaitForHandPoseExitType"), &Z_Registration_Info_UEnum_EWaitForHandPoseExitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2397974951U) },
		{ EWaitForHandGestureExitType_StaticEnum, TEXT("EWaitForHandGestureExitType"), &Z_Registration_Info_UEnum_EWaitForHandGestureExitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3228071502U) },
		{ ERecordHandPoseEntryType_StaticEnum, TEXT("ERecordHandPoseEntryType"), &Z_Registration_Info_UEnum_ERecordHandPoseEntryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 145839840U) },
		{ ERecordHandPoseExitType_StaticEnum, TEXT("ERecordHandPoseExitType"), &Z_Registration_Info_UEnum_ERecordHandPoseExitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4220277439U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandRecognitionFunctionLibrary, UHandRecognitionFunctionLibrary::StaticClass, TEXT("UHandRecognitionFunctionLibrary"), &Z_Registration_Info_UClass_UHandRecognitionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandRecognitionFunctionLibrary), 2174329701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h__Script_OculusHandPoseRecognition_1041521562(TEXT("/Script/OculusHandPoseRecognition"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h__Script_OculusHandPoseRecognition_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h__Script_OculusHandPoseRecognition_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h__Script_OculusHandPoseRecognition_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h__Script_OculusHandPoseRecognition_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
