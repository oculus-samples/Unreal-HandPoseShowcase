// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandPose() {}

// ********** Begin Cross Module References ********************************************************
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone();
OCULUSHANDPOSERECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FHandPose();
UPackage* Z_Construct_UPackage__Script_OculusHandPoseRecognition();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum RecognizedBone ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_RecognizedBone;
static UEnum* RecognizedBone_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_RecognizedBone.OuterSingleton)
	{
		Z_Registration_Info_UEnum_RecognizedBone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("RecognizedBone"));
	}
	return Z_Registration_Info_UEnum_RecognizedBone.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<RecognizedBone>()
{
	return RecognizedBone_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Bones that we care about. */" },
		{ "Index_1.Name", "Index_1" },
		{ "Index_2.Name", "Index_2" },
		{ "Index_3.Name", "Index_3" },
		{ "Middle_1.Name", "Middle_1" },
		{ "Middle_2.Name", "Middle_2" },
		{ "Middle_3.Name", "Middle_3" },
		{ "ModuleRelativePath", "Public/HandPose.h" },
		{ "NUM.Name", "NUM" },
		{ "Pinky_0.Name", "Pinky_0" },
		{ "Pinky_1.Name", "Pinky_1" },
		{ "Pinky_2.Name", "Pinky_2" },
		{ "Pinky_3.Name", "Pinky_3" },
		{ "Ring_1.Name", "Ring_1" },
		{ "Ring_2.Name", "Ring_2" },
		{ "Ring_3.Name", "Ring_3" },
		{ "Thumb_0.Name", "Thumb_0" },
		{ "Thumb_1.Name", "Thumb_1" },
		{ "Thumb_2.Name", "Thumb_2" },
		{ "Thumb_3.Name", "Thumb_3" },
		{ "ToolTip", "Bones that we care about." },
		{ "Wrist.Name", "Wrist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Thumb_0", (int64)Thumb_0 },
		{ "Thumb_1", (int64)Thumb_1 },
		{ "Thumb_2", (int64)Thumb_2 },
		{ "Thumb_3", (int64)Thumb_3 },
		{ "Index_1", (int64)Index_1 },
		{ "Index_2", (int64)Index_2 },
		{ "Index_3", (int64)Index_3 },
		{ "Middle_1", (int64)Middle_1 },
		{ "Middle_2", (int64)Middle_2 },
		{ "Middle_3", (int64)Middle_3 },
		{ "Ring_1", (int64)Ring_1 },
		{ "Ring_2", (int64)Ring_2 },
		{ "Ring_3", (int64)Ring_3 },
		{ "Pinky_0", (int64)Pinky_0 },
		{ "Pinky_1", (int64)Pinky_1 },
		{ "Pinky_2", (int64)Pinky_2 },
		{ "Pinky_3", (int64)Pinky_3 },
		{ "Wrist", (int64)Wrist },
		{ "NUM", (int64)NUM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"RecognizedBone",
	"RecognizedBone",
	Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone()
{
	if (!Z_Registration_Info_UEnum_RecognizedBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RecognizedBone.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_RecognizedBone_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_RecognizedBone.InnerSingleton;
}
// ********** End Enum RecognizedBone **************************************************************

// ********** Begin ScriptStruct FHandPose *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHandPose;
class UScriptStruct* FHandPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHandPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHandPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandPose, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("HandPose"));
	}
	return Z_Registration_Info_UScriptStruct_FHandPose.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHandPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct that represents a hand pose. */" },
		{ "ModuleRelativePath", "Public/HandPose.h" },
		{ "ToolTip", "A struct that represents a hand pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[] = {
		{ "Category", "Hand Pose" },
		{ "Comment", "/** Name for this pose. */" },
		{ "ModuleRelativePath", "Public/HandPose.h" },
		{ "ToolTip", "Name for this pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEncodedPose_MetaData[] = {
		{ "Category", "Hand Pose" },
		{ "Comment", "/** Hand pose encoded in a string. */" },
		{ "ModuleRelativePath", "Public/HandPose.h" },
		{ "ToolTip", "Hand pose encoded in a string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomConfidenceFloor_MetaData[] = {
		{ "Category", "Hand Pose" },
		{ "Comment", "/** Hand pose custom confidence floor, when greater than 0. */" },
		{ "ModuleRelativePath", "Public/HandPose.h" },
		{ "ToolTip", "Hand pose custom confidence floor, when greater than 0." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorAtMaxConfidence_MetaData[] = {
		{ "Category", "Hand Pose" },
		{ "ClampMin", "100.0" },
		{ "Comment", "/**\n\x09 * Hand pose error at max confidence of 1.0.\n\x09 * Confidence of 0.50 corresponds to twice this error.\n\x09 * Confidence of 0.25 corresponds to four times this error.\n\x09 * Confidence of 0.10 corresponds to ten times this error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandPose.h" },
		{ "ToolTip", "Hand pose error at max confidence of 1.0.\nConfidence of 0.50 corresponds to twice this error.\nConfidence of 0.25 corresponds to four times this error.\nConfidence of 0.10 corresponds to ten times this error." },
		{ "UIMin", "100.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PoseName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomEncodedPose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomConfidenceFloor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorAtMaxConfidence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPose, PoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseName_MetaData), NewProp_PoseName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_CustomEncodedPose = { "CustomEncodedPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPose, CustomEncodedPose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEncodedPose_MetaData), NewProp_CustomEncodedPose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_CustomConfidenceFloor = { "CustomConfidenceFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPose, CustomConfidenceFloor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomConfidenceFloor_MetaData), NewProp_CustomConfidenceFloor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_ErrorAtMaxConfidence = { "ErrorAtMaxConfidence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandPose, ErrorAtMaxConfidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorAtMaxConfidence_MetaData), NewProp_ErrorAtMaxConfidence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_PoseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_CustomEncodedPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_CustomConfidenceFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandPose_Statics::NewProp_ErrorAtMaxConfidence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	&NewStructOps,
	"HandPose",
	Z_Construct_UScriptStruct_FHandPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandPose_Statics::PropPointers),
	sizeof(FHandPose),
	alignof(FHandPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHandPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHandPose()
{
	if (!Z_Registration_Info_UScriptStruct_FHandPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHandPose.InnerSingleton, Z_Construct_UScriptStruct_FHandPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHandPose.InnerSingleton;
}
// ********** End ScriptStruct FHandPose ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPose_h__Script_OculusHandPoseRecognition_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ RecognizedBone_StaticEnum, TEXT("RecognizedBone"), &Z_Registration_Info_UEnum_RecognizedBone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2250481281U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHandPose::StaticStruct, Z_Construct_UScriptStruct_FHandPose_Statics::NewStructOps, TEXT("HandPose"), &Z_Registration_Info_UScriptStruct_FHandPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHandPose), 2561418882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPose_h__Script_OculusHandPoseRecognition_169701542(TEXT("/Script/OculusHandPoseRecognition"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPose_h__Script_OculusHandPoseRecognition_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPose_h__Script_OculusHandPoseRecognition_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPose_h__Script_OculusHandPoseRecognition_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPose_h__Script_OculusHandPoseRecognition_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
