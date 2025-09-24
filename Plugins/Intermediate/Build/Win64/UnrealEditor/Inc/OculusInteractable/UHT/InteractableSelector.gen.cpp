// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableSelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractableSelector() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AAimingActor_NoRegister();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractableSelector();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractableSelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractable();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractableSelector Function ActivateSelector **************************
struct Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics
{
	struct InteractableSelector_eventActivateSelector_Parms
	{
		bool Activate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Call to activate / deactivate the selector.\n\x09 * @param Activate - A boolean.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Call to activate / deactivate the selector.\n@param Activate - A boolean." },
	};
#endif // WITH_METADATA
	static void NewProp_Activate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::NewProp_Activate_SetBit(void* Obj)
{
	((InteractableSelector_eventActivateSelector_Parms*)Obj)->Activate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableSelector_eventActivateSelector_Parms), &Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::NewProp_Activate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractableSelector, nullptr, "ActivateSelector", Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::InteractableSelector_eventActivateSelector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::InteractableSelector_eventActivateSelector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableSelector_ActivateSelector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableSelector_ActivateSelector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableSelector::execActivateSelector)
{
	P_GET_UBOOL(Z_Param_Activate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateSelector(Z_Param_Activate);
	P_NATIVE_END;
}
// ********** End Class AInteractableSelector Function ActivateSelector ****************************

// ********** Begin Class AInteractableSelector Function GetNonInteractableHit *********************
struct Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics
{
	struct InteractableSelector_eventGetNonInteractableHit_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Access any non-interactable actor hit by the selector.\n\x09 * @return AActor or nullptr if none is selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Access any non-interactable actor hit by the selector.\n@return AActor or nullptr if none is selected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableSelector_eventGetNonInteractableHit_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractableSelector, nullptr, "GetNonInteractableHit", Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::InteractableSelector_eventGetNonInteractableHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::InteractableSelector_eventGetNonInteractableHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableSelector::execGetNonInteractableHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetNonInteractableHit();
	P_NATIVE_END;
}
// ********** End Class AInteractableSelector Function GetNonInteractableHit ***********************

// ********** Begin Class AInteractableSelector Function GetSelectedInteractable *******************
struct Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics
{
	struct InteractableSelector_eventGetSelectedInteractable_Parms
	{
		AInteractable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Access to the currently selected interactable actor.\n\x09 * @return AInteractable or nullptr if none is selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Access to the currently selected interactable actor.\n@return AInteractable or nullptr if none is selected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableSelector_eventGetSelectedInteractable_Parms, ReturnValue), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractableSelector, nullptr, "GetSelectedInteractable", Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::InteractableSelector_eventGetSelectedInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::InteractableSelector_eventGetSelectedInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableSelector::execGetSelectedInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AInteractable**)Z_Param__Result=P_THIS->GetSelectedInteractable();
	P_NATIVE_END;
}
// ********** End Class AInteractableSelector Function GetSelectedInteractable *********************

// ********** Begin Class AInteractableSelector ****************************************************
void AInteractableSelector::StaticRegisterNativesAInteractableSelector()
{
	UClass* Class = AInteractableSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateSelector", &AInteractableSelector::execActivateSelector },
		{ "GetNonInteractableHit", &AInteractableSelector::execGetNonInteractableHit },
		{ "GetSelectedInteractable", &AInteractableSelector::execGetSelectedInteractable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractableSelector;
UClass* AInteractableSelector::GetPrivateStaticClass()
{
	using TClass = AInteractableSelector;
	if (!Z_Registration_Info_UClass_AInteractableSelector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractableSelector"),
			Z_Registration_Info_UClass_AInteractableSelector.InnerSingleton,
			StaticRegisterNativesAInteractableSelector,
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
	return Z_Registration_Info_UClass_AInteractableSelector.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractableSelector_NoRegister()
{
	return AInteractableSelector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractableSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base actor class for interactable selectors.\n */" },
		{ "IncludePath", "InteractableSelector.h" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Base actor class for interactable selectors." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectorStartsActivated_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Initial activation state of the selector. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Initial activation state of the selector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaycastOffset_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Distance from selector at which we start raycasting. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Distance from selector at which we start raycasting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaycastDistance_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Raycast range. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Raycast range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaycastAngleDegrees_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Raycast angle: we select within a cone. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Raycast angle: we select within a cone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaycastStickinessAngleDegrees_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Raycast stickiness angle: we stick to a selection while we do not exceed this angle. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Raycast stickiness angle: we stick to a selection while we do not exceed this angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignAimingActorWithHitNormal_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Align aiming actor with hit normal. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Align aiming actor with hit normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingActor_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Aiming actor placed at targeting location. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Aiming actor placed at targeting location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingActorClass_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Aiming actor class to spawn if no AimingActor is specified. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Aiming actor class to spawn if no AimingActor is specified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeamTemplate_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Particle system for beam. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Particle system for beam." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingActorRotationRate_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Aiming actor rotation rate. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Aiming actor rotation rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DampeningFactor_MetaData[] = {
		{ "Category", "Selector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Aiming using a number of samples for stabilization. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Aiming using a number of samples for stabilization." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRaycastDebugTrace_MetaData[] = {
		{ "Category", "Selector" },
		{ "Comment", "/** Raycast debug. */" },
		{ "ModuleRelativePath", "Public/InteractableSelector.h" },
		{ "ToolTip", "Raycast debug." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bSelectorStartsActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectorStartsActivated;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaycastOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaycastDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaycastAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaycastStickinessAngleDegrees;
	static void NewProp_bAlignAimingActorWithHitNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignAimingActorWithHitNormal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AimingActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AimingActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BeamTemplate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingActorRotationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DampeningFactor;
	static void NewProp_bRaycastDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaycastDebugTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableSelector_ActivateSelector, "ActivateSelector" }, // 4014114781
		{ &Z_Construct_UFunction_AInteractableSelector_GetNonInteractableHit, "GetNonInteractableHit" }, // 3002012872
		{ &Z_Construct_UFunction_AInteractableSelector_GetSelectedInteractable, "GetSelectedInteractable" }, // 3430326533
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bSelectorStartsActivated_SetBit(void* Obj)
{
	((AInteractableSelector*)Obj)->bSelectorStartsActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bSelectorStartsActivated = { "bSelectorStartsActivated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableSelector), &Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bSelectorStartsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectorStartsActivated_MetaData), NewProp_bSelectorStartsActivated_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastOffset = { "RaycastOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, RaycastOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaycastOffset_MetaData), NewProp_RaycastOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastDistance = { "RaycastDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, RaycastDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaycastDistance_MetaData), NewProp_RaycastDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastAngleDegrees = { "RaycastAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, RaycastAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaycastAngleDegrees_MetaData), NewProp_RaycastAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastStickinessAngleDegrees = { "RaycastStickinessAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, RaycastStickinessAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaycastStickinessAngleDegrees_MetaData), NewProp_RaycastStickinessAngleDegrees_MetaData) };
void Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bAlignAimingActorWithHitNormal_SetBit(void* Obj)
{
	((AInteractableSelector*)Obj)->bAlignAimingActorWithHitNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bAlignAimingActorWithHitNormal = { "bAlignAimingActorWithHitNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableSelector), &Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bAlignAimingActorWithHitNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignAimingActorWithHitNormal_MetaData), NewProp_bAlignAimingActorWithHitNormal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_AimingActor = { "AimingActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, AimingActor), Z_Construct_UClass_AAimingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingActor_MetaData), NewProp_AimingActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_AimingActorClass = { "AimingActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, AimingActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AAimingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingActorClass_MetaData), NewProp_AimingActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_BeamTemplate = { "BeamTemplate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, BeamTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeamTemplate_MetaData), NewProp_BeamTemplate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_AimingActorRotationRate = { "AimingActorRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, AimingActorRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingActorRotationRate_MetaData), NewProp_AimingActorRotationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_DampeningFactor = { "DampeningFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableSelector, DampeningFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DampeningFactor_MetaData), NewProp_DampeningFactor_MetaData) };
void Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bRaycastDebugTrace_SetBit(void* Obj)
{
	((AInteractableSelector*)Obj)->bRaycastDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bRaycastDebugTrace = { "bRaycastDebugTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableSelector), &Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bRaycastDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRaycastDebugTrace_MetaData), NewProp_bRaycastDebugTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableSelector_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bSelectorStartsActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_RaycastStickinessAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bAlignAimingActorWithHitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_AimingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_AimingActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_BeamTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_AimingActorRotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_DampeningFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableSelector_Statics::NewProp_bRaycastDebugTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableSelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableSelector_Statics::ClassParams = {
	&AInteractableSelector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractableSelector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableSelector_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableSelector()
{
	if (!Z_Registration_Info_UClass_AInteractableSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableSelector.OuterSingleton, Z_Construct_UClass_AInteractableSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableSelector.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableSelector);
AInteractableSelector::~AInteractableSelector() {}
// ********** End Class AInteractableSelector ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h__Script_OculusInteractable_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableSelector, AInteractableSelector::StaticClass, TEXT("AInteractableSelector"), &Z_Registration_Info_UClass_AInteractableSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableSelector), 2763249571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h__Script_OculusInteractable_2617873716(TEXT("/Script/OculusInteractable"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h__Script_OculusInteractable_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_InteractableSelector_h__Script_OculusInteractable_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
