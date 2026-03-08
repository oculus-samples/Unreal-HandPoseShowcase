// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseRecognizer.h"
#include "HandPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHandPoseRecognizer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandPoseRecognizer();
OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandPoseRecognizer_NoRegister();
OCULUSHANDPOSERECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FHandPose();
OCULUSXRINPUT_API UEnum* Z_Construct_UEnum_OculusXRInput_EOculusXRHandType();
UPackage* Z_Construct_UPackage__Script_OculusHandPoseRecognition();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHandPoseRecognizer Function GetRecognizedHandPose ***********************
struct Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics
{
	struct HandPoseRecognizer_eventGetRecognizedHandPose_Parms
	{
		int32 Index;
		FString Name;
		float Duration;
		float Error;
		float Confidence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Call to get the currently recognized hand pose.\n\x09 * @param Index - Index of the recognized pose.\n\x09 * @param Name - Name of the recognized pose.\n\x09 * @param Duration - How long this pose has been held.\n\x09 * @param Error - Raw recognition error.\n\x09 * @param Confidence - Confidence level from 0.0 to 1.0.\n\x09 * @return A boolean that indicates if a pose is currently recognized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Call to get the currently recognized hand pose.\n@param Index - Index of the recognized pose.\n@param Name - Name of the recognized pose.\n@param Duration - How long this pose has been held.\n@param Error - Raw recognition error.\n@param Confidence - Confidence level from 0.0 to 1.0.\n@return A boolean that indicates if a pose is currently recognized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Pose Recognized" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Error;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandPoseRecognizer_eventGetRecognizedHandPose_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandPoseRecognizer_eventGetRecognizedHandPose_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandPoseRecognizer_eventGetRecognizedHandPose_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandPoseRecognizer_eventGetRecognizedHandPose_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandPoseRecognizer_eventGetRecognizedHandPose_Parms, Confidence), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandPoseRecognizer_eventGetRecognizedHandPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandPoseRecognizer_eventGetRecognizedHandPose_Parms), &Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandPoseRecognizer, nullptr, "GetRecognizedHandPose", Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::HandPoseRecognizer_eventGetRecognizedHandPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::HandPoseRecognizer_eventGetRecognizedHandPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandPoseRecognizer::execGetRecognizedHandPose)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Error);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Confidence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRecognizedHandPose(Z_Param_Out_Index,Z_Param_Out_Name,Z_Param_Out_Duration,Z_Param_Out_Error,Z_Param_Out_Confidence);
	P_NATIVE_END;
}
// ********** End Class UHandPoseRecognizer Function GetRecognizedHandPose *************************

// ********** Begin Class UHandPoseRecognizer Function LogEncodedHandPose **************************
struct Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Call to log the current hand pose.\n\x09 * This is used to create reference poses that can then be tweaked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Call to log the current hand pose.\nThis is used to create reference poses that can then be tweaked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHandPoseRecognizer, nullptr, "LogEncodedHandPose", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandPoseRecognizer::execLogEncodedHandPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogEncodedHandPose();
	P_NATIVE_END;
}
// ********** End Class UHandPoseRecognizer Function LogEncodedHandPose ****************************

// ********** Begin Class UHandPoseRecognizer ******************************************************
void UHandPoseRecognizer::StaticRegisterNativesUHandPoseRecognizer()
{
	UClass* Class = UHandPoseRecognizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRecognizedHandPose", &UHandPoseRecognizer::execGetRecognizedHandPose },
		{ "LogEncodedHandPose", &UHandPoseRecognizer::execLogEncodedHandPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHandPoseRecognizer;
UClass* UHandPoseRecognizer::GetPrivateStaticClass()
{
	using TClass = UHandPoseRecognizer;
	if (!Z_Registration_Info_UClass_UHandPoseRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HandPoseRecognizer"),
			Z_Registration_Info_UClass_UHandPoseRecognizer.InnerSingleton,
			StaticRegisterNativesUHandPoseRecognizer,
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
	return Z_Registration_Info_UClass_UHandPoseRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UHandPoseRecognizer_NoRegister()
{
	return UHandPoseRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHandPoseRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Actor component that recognizes hand poses.\n *\n * @warning Must be attached to a component that moves with hands.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HandPoseRecognizer.h" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor component that recognizes hand poses.\n\n@warning Must be attached to a component that moves with hands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Side_MetaData[] = {
		{ "Category", "Hand Pose Recognition" },
		{ "Comment", "/** Hand side recognized (set to None to disable the component). */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Hand side recognized (set to None to disable the component)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionInterval_MetaData[] = {
		{ "Category", "Hand Pose Recognition" },
		{ "Comment", "/** Minimum time interval between hand recognitions (throttling). */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Minimum time interval between hand recognitions (throttling)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfidenceFloor_MetaData[] = {
		{ "Category", "Hand Pose Recognition" },
		{ "Comment", "/** Minimum confidence level needed to recognize a pose.  Can be overridden for each individual pose. */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Minimum confidence level needed to recognize a pose.  Can be overridden for each individual pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampingFactor_MetaData[] = {
		{ "Category", "Hand Pose Recognition" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Fraction of the current confidence level that we keep per unit of time. */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Fraction of the current confidence level that we keep per unit of time." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[] = {
		{ "Category", "Hand Pose Recognition" },
		{ "Comment", "/** Recognized hand pose patterns. */" },
		{ "ModuleRelativePath", "Public/HandPoseRecognizer.h" },
		{ "ToolTip", "Recognized hand pose patterns." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Side_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Side;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecognitionInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultConfidenceFloor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandPoseRecognizer_GetRecognizedHandPose, "GetRecognizedHandPose" }, // 2762886055
		{ &Z_Construct_UFunction_UHandPoseRecognizer_LogEncodedHandPose, "LogEncodedHandPose" }, // 2158538568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandPoseRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandPoseRecognizer, Side), Z_Construct_UEnum_OculusXRInput_EOculusXRHandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Side_MetaData), NewProp_Side_MetaData) }; // 1666178145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_RecognitionInterval = { "RecognitionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandPoseRecognizer, RecognitionInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecognitionInterval_MetaData), NewProp_RecognitionInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_DefaultConfidenceFloor = { "DefaultConfidenceFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandPoseRecognizer, DefaultConfidenceFloor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultConfidenceFloor_MetaData), NewProp_DefaultConfidenceFloor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_DampingFactor = { "DampingFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandPoseRecognizer, DampingFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampingFactor_MetaData), NewProp_DampingFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHandPose, METADATA_PARAMS(0, nullptr) }; // 2561418882
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandPoseRecognizer, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poses_MetaData), NewProp_Poses_MetaData) }; // 2561418882
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandPoseRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Side_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Side,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_RecognitionInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_DefaultConfidenceFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_DampingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Poses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandPoseRecognizer_Statics::NewProp_Poses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandPoseRecognizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHandPoseRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusHandPoseRecognition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandPoseRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandPoseRecognizer_Statics::ClassParams = {
	&UHandPoseRecognizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHandPoseRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHandPoseRecognizer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandPoseRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandPoseRecognizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandPoseRecognizer()
{
	if (!Z_Registration_Info_UClass_UHandPoseRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandPoseRecognizer.OuterSingleton, Z_Construct_UClass_UHandPoseRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandPoseRecognizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandPoseRecognizer);
UHandPoseRecognizer::~UHandPoseRecognizer() {}
// ********** End Class UHandPoseRecognizer ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h__Script_OculusHandPoseRecognition_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandPoseRecognizer, UHandPoseRecognizer::StaticClass, TEXT("UHandPoseRecognizer"), &Z_Registration_Info_UClass_UHandPoseRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandPoseRecognizer), 3406525679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h__Script_OculusHandPoseRecognition_223796124(TEXT("/Script/OculusHandPoseRecognition"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h__Script_OculusHandPoseRecognition_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandPoseRecognizer_h__Script_OculusHandPoseRecognition_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
