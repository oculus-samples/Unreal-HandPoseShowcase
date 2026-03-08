// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusUtilsLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusUtilsLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCULUSUTILS_API UClass* Z_Construct_UClass_UBuildInfo();
OCULUSUTILS_API UClass* Z_Construct_UClass_UBuildInfo_NoRegister();
OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusUtilsLibrary();
OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusUtilsLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusUtils();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBuildInfo ***************************************************************
void UBuildInfo::StaticRegisterNativesUBuildInfo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildInfo;
UClass* UBuildInfo::GetPrivateStaticClass()
{
	using TClass = UBuildInfo;
	if (!Z_Registration_Info_UClass_UBuildInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BuildInfo"),
			Z_Registration_Info_UClass_UBuildInfo.InnerSingleton,
			StaticRegisterNativesUBuildInfo,
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
	return Z_Registration_Info_UClass_UBuildInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuildInfo_NoRegister()
{
	return UBuildInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuildInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Build configuration from the project's game configuration.\n */" },
		{ "IncludePath", "OculusUtilsLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "ToolTip", "Build configuration from the project's game configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageChangelist_MetaData[] = {
		{ "Comment", "/** Source control changelist */" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "ToolTip", "Source control changelist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageDateAndTime_MetaData[] = {
		{ "Comment", "/** Build date and time (Pacific time) \"YYYYMMDD HHMMSS\" */" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "ToolTip", "Build date and time (Pacific time) \"YYYYMMDD HHMMSS\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageChangelist;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageDateAndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist = { "PackageChangelist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildInfo, PackageChangelist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageChangelist_MetaData), NewProp_PackageChangelist_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime = { "PackageDateAndTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildInfo, PackageDateAndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageDateAndTime_MetaData), NewProp_PackageDateAndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageChangelist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildInfo_Statics::NewProp_PackageDateAndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuildInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildInfo_Statics::ClassParams = {
	&UBuildInfo::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBuildInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildInfo()
{
	if (!Z_Registration_Info_UClass_UBuildInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildInfo.OuterSingleton, Z_Construct_UClass_UBuildInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildInfo.OuterSingleton;
}
UBuildInfo::UBuildInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildInfo);
UBuildInfo::~UBuildInfo() {}
// ********** End Class UBuildInfo *****************************************************************

// ********** Begin Class UOculusUtilsLibrary Function GetOculusBuildInfo **************************
struct Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics
{
	struct OculusUtilsLibrary_eventGetOculusBuildInfo_Parms
	{
		FString SourceControlChangelist;
		FString BuildDateTimeString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Oculus Utils" },
		{ "Comment", "/** Returns the Oculus store version. */" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "ToolTip", "Returns the Oculus store version." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceControlChangelist;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BuildDateTimeString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_SourceControlChangelist = { "SourceControlChangelist", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventGetOculusBuildInfo_Parms, SourceControlChangelist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_BuildDateTimeString = { "BuildDateTimeString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventGetOculusBuildInfo_Parms, BuildDateTimeString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_SourceControlChangelist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::NewProp_BuildDateTimeString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusUtilsLibrary, nullptr, "GetOculusBuildInfo", Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::OculusUtilsLibrary_eventGetOculusBuildInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::OculusUtilsLibrary_eventGetOculusBuildInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusUtilsLibrary::execGetOculusBuildInfo)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SourceControlChangelist);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_BuildDateTimeString);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOculusUtilsLibrary::GetOculusBuildInfo(Z_Param_Out_SourceControlChangelist,Z_Param_Out_BuildDateTimeString);
	P_NATIVE_END;
}
// ********** End Class UOculusUtilsLibrary Function GetOculusBuildInfo ****************************

// ********** Begin Class UOculusUtilsLibrary Function SortComponentsByName ************************
struct Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics
{
	struct OculusUtilsLibrary_eventSortComponentsByName_Parms
	{
		TArray<UActorComponent*> Components;
		TArray<UActorComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Oculus Utils" },
		{ "Comment", "/** Returns the array of components sorted by name. */" },
		{ "ComponentClass", "ActorComponent" },
		{ "DeterminesOutputType", "Components" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "ToolTip", "Returns the array of components sorted by name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventSortComponentsByName_Parms, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusUtilsLibrary_eventSortComponentsByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_Components,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusUtilsLibrary, nullptr, "SortComponentsByName", Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::OculusUtilsLibrary_eventSortComponentsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::OculusUtilsLibrary_eventSortComponentsByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusUtilsLibrary::execSortComponentsByName)
{
	P_GET_TARRAY_REF(UActorComponent*,Z_Param_Out_Components);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UActorComponent*>*)Z_Param__Result=UOculusUtilsLibrary::SortComponentsByName(Z_Param_Out_Components);
	P_NATIVE_END;
}
// ********** End Class UOculusUtilsLibrary Function SortComponentsByName **************************

// ********** Begin Class UOculusUtilsLibrary ******************************************************
void UOculusUtilsLibrary::StaticRegisterNativesUOculusUtilsLibrary()
{
	UClass* Class = UOculusUtilsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOculusBuildInfo", &UOculusUtilsLibrary::execGetOculusBuildInfo },
		{ "SortComponentsByName", &UOculusUtilsLibrary::execSortComponentsByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusUtilsLibrary;
UClass* UOculusUtilsLibrary::GetPrivateStaticClass()
{
	using TClass = UOculusUtilsLibrary;
	if (!Z_Registration_Info_UClass_UOculusUtilsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusUtilsLibrary"),
			Z_Registration_Info_UClass_UOculusUtilsLibrary.InnerSingleton,
			StaticRegisterNativesUOculusUtilsLibrary,
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
	return Z_Registration_Info_UClass_UOculusUtilsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusUtilsLibrary_NoRegister()
{
	return UOculusUtilsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusUtilsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Oculus Utils Blueprint Library.\n */" },
		{ "IncludePath", "OculusUtilsLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusUtilsLibrary.h" },
		{ "ToolTip", "Oculus Utils Blueprint Library." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusUtilsLibrary_GetOculusBuildInfo, "GetOculusBuildInfo" }, // 1765336431
		{ &Z_Construct_UFunction_UOculusUtilsLibrary_SortComponentsByName, "SortComponentsByName" }, // 1093746328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusUtilsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusUtilsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusUtilsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusUtilsLibrary_Statics::ClassParams = {
	&UOculusUtilsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusUtilsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusUtilsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusUtilsLibrary()
{
	if (!Z_Registration_Info_UClass_UOculusUtilsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusUtilsLibrary.OuterSingleton, Z_Construct_UClass_UOculusUtilsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusUtilsLibrary.OuterSingleton;
}
UOculusUtilsLibrary::UOculusUtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusUtilsLibrary);
UOculusUtilsLibrary::~UOculusUtilsLibrary() {}
// ********** End Class UOculusUtilsLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h__Script_OculusUtils_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildInfo, UBuildInfo::StaticClass, TEXT("UBuildInfo"), &Z_Registration_Info_UClass_UBuildInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildInfo), 53259566U) },
		{ Z_Construct_UClass_UOculusUtilsLibrary, UOculusUtilsLibrary::StaticClass, TEXT("UOculusUtilsLibrary"), &Z_Registration_Info_UClass_UOculusUtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusUtilsLibrary), 722419999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h__Script_OculusUtils_1504479402(TEXT("/Script/OculusUtils"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h__Script_OculusUtils_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h__Script_OculusUtils_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
