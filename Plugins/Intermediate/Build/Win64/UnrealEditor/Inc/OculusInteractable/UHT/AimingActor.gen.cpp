// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AimingActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAimingActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AAimingActor();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AAimingActor_NoRegister();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractable();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAimingActor Function Activate *******************************************
static FName NAME_AAimingActor_Activate = FName(TEXT("Activate"));
void AAimingActor::Activate()
{
	UFunction* Func = FindFunctionChecked(NAME_AAimingActor_Activate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Activate_Implementation();
	}
}
struct Z_Construct_UFunction_AAimingActor_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the selector when the aiming actor is activated.\n\x09 * By default, it makes the actor visible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AimingActor.h" },
		{ "ToolTip", "Called by the selector when the aiming actor is activated.\nBy default, it makes the actor visible." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAimingActor_Activate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAimingActor, nullptr, "Activate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAimingActor_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAimingActor_Activate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAimingActor_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAimingActor_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAimingActor::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate_Implementation();
	P_NATIVE_END;
}
// ********** End Class AAimingActor Function Activate *********************************************

// ********** Begin Class AAimingActor Function Deactivate *****************************************
struct AimingActor_eventDeactivate_Parms
{
	AInteractable* Selected;
};
static FName NAME_AAimingActor_Deactivate = FName(TEXT("Deactivate"));
void AAimingActor::Deactivate(AInteractable* Selected)
{
	UFunction* Func = FindFunctionChecked(NAME_AAimingActor_Deactivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AimingActor_eventDeactivate_Parms Parms;
		Parms.Selected=Selected;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Deactivate_Implementation(Selected);
	}
}
struct Z_Construct_UFunction_AAimingActor_Deactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the selector when the aiming actor is deactivated.\n\x09 * By default, it makes the actor invisible.\n\x09 * @param Selected - Interactable selected, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AimingActor.h" },
		{ "ToolTip", "Called by the selector when the aiming actor is deactivated.\nBy default, it makes the actor invisible.\n@param Selected - Interactable selected, if any." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAimingActor_Deactivate_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AimingActor_eventDeactivate_Parms, Selected), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAimingActor_Deactivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAimingActor_Deactivate_Statics::NewProp_Selected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAimingActor_Deactivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAimingActor_Deactivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAimingActor, nullptr, "Deactivate", Z_Construct_UFunction_AAimingActor_Deactivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAimingActor_Deactivate_Statics::PropPointers), sizeof(AimingActor_eventDeactivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAimingActor_Deactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAimingActor_Deactivate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AimingActor_eventDeactivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAimingActor_Deactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAimingActor_Deactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAimingActor::execDeactivate)
{
	P_GET_OBJECT(AInteractable,Z_Param_Selected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deactivate_Implementation(Z_Param_Selected);
	P_NATIVE_END;
}
// ********** End Class AAimingActor Function Deactivate *******************************************

// ********** Begin Class AAimingActor *************************************************************
void AAimingActor::StaticRegisterNativesAAimingActor()
{
	UClass* Class = AAimingActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &AAimingActor::execActivate },
		{ "Deactivate", &AAimingActor::execDeactivate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAimingActor;
UClass* AAimingActor::GetPrivateStaticClass()
{
	using TClass = AAimingActor;
	if (!Z_Registration_Info_UClass_AAimingActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AimingActor"),
			Z_Registration_Info_UClass_AAimingActor.InnerSingleton,
			StaticRegisterNativesAAimingActor,
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
	return Z_Registration_Info_UClass_AAimingActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAimingActor_NoRegister()
{
	return AAimingActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAimingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AimingActor.h" },
		{ "ModuleRelativePath", "Public/AimingActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAimingActor_Activate, "Activate" }, // 1141314524
		{ &Z_Construct_UFunction_AAimingActor_Deactivate, "Deactivate" }, // 677843693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAimingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAimingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAimingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAimingActor_Statics::ClassParams = {
	&AAimingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAimingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAimingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAimingActor()
{
	if (!Z_Registration_Info_UClass_AAimingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAimingActor.OuterSingleton, Z_Construct_UClass_AAimingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAimingActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAimingActor);
AAimingActor::~AAimingActor() {}
// ********** End Class AAimingActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h__Script_OculusInteractable_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAimingActor, AAimingActor::StaticClass, TEXT("AAimingActor"), &Z_Registration_Info_UClass_AAimingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAimingActor), 2816074518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h__Script_OculusInteractable_2212629706(TEXT("/Script/OculusInteractable"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h__Script_OculusInteractable_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_AimingActor_h__Script_OculusInteractable_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
