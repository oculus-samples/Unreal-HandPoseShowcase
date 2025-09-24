// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandGesture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandGesture() {}

// ********** Begin Cross Module References ********************************************************
OCULUSHANDPOSERECOGNITION_API UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState();
OCULUSHANDPOSERECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FHandGesture();
UPackage* Z_Construct_UPackage__Script_OculusHandPoseRecognition();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGestureState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGestureState;
static UEnum* EGestureState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGestureState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGestureState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("EGestureState"));
	}
	return Z_Registration_Info_UEnum_EGestureState.OuterSingleton;
}
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureState>()
{
	return EGestureState_StaticEnum();
}
struct Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Gesture progress. */" },
		{ "GestureCompleted.Name", "EGestureState::GestureCompleted" },
		{ "GestureInProgress.Name", "EGestureState::GestureInProgress" },
		{ "GestureNotStarted.Name", "EGestureState::GestureNotStarted" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "Gesture progress." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGestureState::GestureNotStarted", (int64)EGestureState::GestureNotStarted },
		{ "EGestureState::GestureInProgress", (int64)EGestureState::GestureInProgress },
		{ "EGestureState::GestureCompleted", (int64)EGestureState::GestureCompleted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	"EGestureState",
	"EGestureState",
	Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState()
{
	if (!Z_Registration_Info_UEnum_EGestureState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGestureState.InnerSingleton, Z_Construct_UEnum_OculusHandPoseRecognition_EGestureState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGestureState.InnerSingleton;
}
// ********** End Enum EGestureState ***************************************************************

// ********** Begin ScriptStruct FHandGesture ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHandGesture;
class UScriptStruct* FHandGesture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHandGesture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHandGesture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandGesture, (UObject*)Z_Construct_UPackage__Script_OculusHandPoseRecognition(), TEXT("HandGesture"));
	}
	return Z_Registration_Info_UScriptStruct_FHandGesture.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHandGesture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct that represents a series of poses over time. */" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "A struct that represents a series of poses over time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GestureName_MetaData[] = {
		{ "Category", "Hand Gesture" },
		{ "Comment", "/** Name for this gesture. */" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "Name for this gesture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTransitionTime_MetaData[] = {
		{ "Category", "Hand Gesture" },
		{ "Comment", "/** Tolerance (in seconds) for intermediate poses that do not match the sequence. */" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "Tolerance (in seconds) for intermediate poses that do not match the sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[] = {
		{ "Category", "Hand Gesture" },
		{ "Comment", "/** Is this gesture representing a looping series of poses? (e.g. waving) */" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "Is this gesture representing a looping series of poses? (e.g. waving)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEncodedGesture_MetaData[] = {
		{ "Category", "Hand Gesture" },
		{ "Comment", "/** Series of poses as a string. */" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "Series of poses as a string." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGestureDebugLog_MetaData[] = {
		{ "Category", "Hand Gesture" },
		{ "Comment", "/** If true, will log gesture updates and transitions. */" },
		{ "ModuleRelativePath", "Public/HandGesture.h" },
		{ "ToolTip", "If true, will log gesture updates and transitions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GestureName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTransitionTime;
	static void NewProp_bIsLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomEncodedGesture;
	static void NewProp_bGestureDebugLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGestureDebugLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandGesture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_GestureName = { "GestureName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandGesture, GestureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GestureName_MetaData), NewProp_GestureName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_MaxTransitionTime = { "MaxTransitionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandGesture, MaxTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTransitionTime_MetaData), NewProp_MaxTransitionTime_MetaData) };
void Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bIsLooping_SetBit(void* Obj)
{
	((FHandGesture*)Obj)->bIsLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHandGesture), &Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooping_MetaData), NewProp_bIsLooping_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_CustomEncodedGesture = { "CustomEncodedGesture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandGesture, CustomEncodedGesture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEncodedGesture_MetaData), NewProp_CustomEncodedGesture_MetaData) };
void Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bGestureDebugLog_SetBit(void* Obj)
{
	((FHandGesture*)Obj)->bGestureDebugLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bGestureDebugLog = { "bGestureDebugLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHandGesture), &Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bGestureDebugLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGestureDebugLog_MetaData), NewProp_bGestureDebugLog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHandGesture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_GestureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_MaxTransitionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bIsLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_CustomEncodedGesture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandGesture_Statics::NewProp_bGestureDebugLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandGesture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandGesture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
	nullptr,
	&NewStructOps,
	"HandGesture",
	Z_Construct_UScriptStruct_FHandGesture_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandGesture_Statics::PropPointers),
	sizeof(FHandGesture),
	alignof(FHandGesture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandGesture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHandGesture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHandGesture()
{
	if (!Z_Registration_Info_UScriptStruct_FHandGesture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHandGesture.InnerSingleton, Z_Construct_UScriptStruct_FHandGesture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHandGesture.InnerSingleton;
}
// ********** End ScriptStruct FHandGesture ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h__Script_OculusHandPoseRecognition_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGestureState_StaticEnum, TEXT("EGestureState"), &Z_Registration_Info_UEnum_EGestureState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2613134979U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHandGesture::StaticStruct, Z_Construct_UScriptStruct_FHandGesture_Statics::NewStructOps, TEXT("HandGesture"), &Z_Registration_Info_UScriptStruct_FHandGesture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHandGesture), 1441816886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h__Script_OculusHandPoseRecognition_1038361124(TEXT("/Script/OculusHandPoseRecognition"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h__Script_OculusHandPoseRecognition_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h__Script_OculusHandPoseRecognition_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h__Script_OculusHandPoseRecognition_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h__Script_OculusHandPoseRecognition_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
