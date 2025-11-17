// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interactable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractable();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
OCULUSINTERACTABLE_API UClass* Z_Construct_UClass_AInteractableSelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractable();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractable Function BeginSelection ************************************
struct Interactable_eventBeginSelection_Parms
{
	AInteractableSelector* Selector;
};
static FName NAME_AInteractable_BeginSelection = FName(TEXT("BeginSelection"));
void AInteractable::BeginSelection(AInteractableSelector* Selector)
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_BeginSelection);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Interactable_eventBeginSelection_Parms Parms;
		Parms.Selector=Selector;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BeginSelection_Implementation(Selector);
	}
}
struct Z_Construct_UFunction_AInteractable_BeginSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event fired when selection starts.\n\x09 * Can only be called from C++.\n\x09 * @param Selector - The Interactable Selector that just selected us.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Event fired when selection starts.\nCan only be called from C++.\n@param Selector - The Interactable Selector that just selected us." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_BeginSelection_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventBeginSelection_Parms, Selector), Z_Construct_UClass_AInteractableSelector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_BeginSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_BeginSelection_Statics::NewProp_Selector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_BeginSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_BeginSelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "BeginSelection", Z_Construct_UFunction_AInteractable_BeginSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_BeginSelection_Statics::PropPointers), sizeof(Interactable_eventBeginSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_BeginSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_BeginSelection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Interactable_eventBeginSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractable_BeginSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_BeginSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractable::execBeginSelection)
{
	P_GET_OBJECT(AInteractableSelector,Z_Param_Selector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginSelection_Implementation(Z_Param_Selector);
	P_NATIVE_END;
}
// ********** End Class AInteractable Function BeginSelection **************************************

// ********** Begin Class AInteractable Function EndSelection **************************************
struct Interactable_eventEndSelection_Parms
{
	AInteractableSelector* Selector;
};
static FName NAME_AInteractable_EndSelection = FName(TEXT("EndSelection"));
void AInteractable::EndSelection(AInteractableSelector* Selector)
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_EndSelection);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Interactable_eventEndSelection_Parms Parms;
		Parms.Selector=Selector;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		EndSelection_Implementation(Selector);
	}
}
struct Z_Construct_UFunction_AInteractable_EndSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event fired when selection ends.\n\x09 * Can only be called from C++.\n\x09 * @param Selector - The Interactable Selector that stopped selecting us.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Event fired when selection ends.\nCan only be called from C++.\n@param Selector - The Interactable Selector that stopped selecting us." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_EndSelection_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventEndSelection_Parms, Selector), Z_Construct_UClass_AInteractableSelector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_EndSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_EndSelection_Statics::NewProp_Selector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_EndSelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_EndSelection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "EndSelection", Z_Construct_UFunction_AInteractable_EndSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_EndSelection_Statics::PropPointers), sizeof(Interactable_eventEndSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_EndSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_EndSelection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Interactable_eventEndSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractable_EndSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_EndSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractable::execEndSelection)
{
	P_GET_OBJECT(AInteractableSelector,Z_Param_Selector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSelection_Implementation(Z_Param_Selector);
	P_NATIVE_END;
}
// ********** End Class AInteractable Function EndSelection ****************************************

// ********** Begin Class AInteractable Function Interaction1 **************************************
static FName NAME_AInteractable_Interaction1 = FName(TEXT("Interaction1"));
void AInteractable::Interaction1()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_Interaction1);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AInteractable_Interaction1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Optional generic user event.\n\x09 * The meaning, implementation and invocation is left to the user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Optional generic user event.\nThe meaning, implementation and invocation is left to the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Interaction1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Interaction1", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interaction1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_Interaction1_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AInteractable_Interaction1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_Interaction1_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInteractable Function Interaction1 ****************************************

// ********** Begin Class AInteractable Function Interaction2 **************************************
static FName NAME_AInteractable_Interaction2 = FName(TEXT("Interaction2"));
void AInteractable::Interaction2()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_Interaction2);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AInteractable_Interaction2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Optional generic user event.\n\x09 * The meaning, implementation and invocation is left to the user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Optional generic user event.\nThe meaning, implementation and invocation is left to the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Interaction2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Interaction2", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interaction2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_Interaction2_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AInteractable_Interaction2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_Interaction2_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInteractable Function Interaction2 ****************************************

// ********** Begin Class AInteractable Function Interaction3 **************************************
static FName NAME_AInteractable_Interaction3 = FName(TEXT("Interaction3"));
void AInteractable::Interaction3()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_Interaction3);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AInteractable_Interaction3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Optional generic user event.\n\x09 * The meaning, implementation and invocation is left to the user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Optional generic user event.\nThe meaning, implementation and invocation is left to the user." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Interaction3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Interaction3", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interaction3_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_Interaction3_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AInteractable_Interaction3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_Interaction3_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AInteractable Function Interaction3 ****************************************

// ********** Begin Class AInteractable Function IsSelected ****************************************
struct Z_Construct_UFunction_AInteractable_IsSelected_Statics
{
	struct Interactable_eventIsSelected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Call to check if you are currently selected.\n\x09 * @return boolean\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Call to check if you are currently selected.\n@return boolean" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInteractable_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Interactable_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Interactable_eventIsSelected_Parms), &Z_Construct_UFunction_AInteractable_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_IsSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_IsSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_IsSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "IsSelected", Z_Construct_UFunction_AInteractable_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractable_IsSelected_Statics::Interactable_eventIsSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_IsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_IsSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AInteractable_IsSelected_Statics::Interactable_eventIsSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractable_IsSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_IsSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractable::execIsSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSelected();
	P_NATIVE_END;
}
// ********** End Class AInteractable Function IsSelected ******************************************

// ********** Begin Class AInteractable Function SetInteractablePhysicsSimulation ******************
struct Interactable_eventSetInteractablePhysicsSimulation_Parms
{
	bool SimulatePhysics;
};
static FName NAME_AInteractable_SetInteractablePhysicsSimulation = FName(TEXT("SetInteractablePhysicsSimulation"));
void AInteractable::SetInteractablePhysicsSimulation(bool SimulatePhysics)
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractable_SetInteractablePhysicsSimulation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Interactable_eventSetInteractablePhysicsSimulation_Parms Parms;
		Parms.SimulatePhysics=SimulatePhysics ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetInteractablePhysicsSimulation_Implementation(SimulatePhysics);
	}
}
struct Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VR" },
		{ "Comment", "/**\n\x09 * Method called to turn on/off physics on interactable.\n\x09 * By default it checks if the root component is a primitive and applies the change there.\n\x09 * You can override this method in blueprint for special cases.\n\x09 * @param SimulatePhysics - boolean.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Method called to turn on/off physics on interactable.\nBy default it checks if the root component is a primitive and applies the change there.\nYou can override this method in blueprint for special cases.\n@param SimulatePhysics - boolean." },
	};
#endif // WITH_METADATA
	static void NewProp_SimulatePhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimulatePhysics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::NewProp_SimulatePhysics_SetBit(void* Obj)
{
	((Interactable_eventSetInteractablePhysicsSimulation_Parms*)Obj)->SimulatePhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::NewProp_SimulatePhysics = { "SimulatePhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Interactable_eventSetInteractablePhysicsSimulation_Parms), &Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::NewProp_SimulatePhysics_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::NewProp_SimulatePhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "SetInteractablePhysicsSimulation", Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::PropPointers), sizeof(Interactable_eventSetInteractablePhysicsSimulation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Interactable_eventSetInteractablePhysicsSimulation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractable::execSetInteractablePhysicsSimulation)
{
	P_GET_UBOOL(Z_Param_SimulatePhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractablePhysicsSimulation_Implementation(Z_Param_SimulatePhysics);
	P_NATIVE_END;
}
// ********** End Class AInteractable Function SetInteractablePhysicsSimulation ********************

// ********** Begin Class AInteractable ************************************************************
void AInteractable::StaticRegisterNativesAInteractable()
{
	UClass* Class = AInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginSelection", &AInteractable::execBeginSelection },
		{ "EndSelection", &AInteractable::execEndSelection },
		{ "IsSelected", &AInteractable::execIsSelected },
		{ "SetInteractablePhysicsSimulation", &AInteractable::execSetInteractablePhysicsSimulation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractable;
UClass* AInteractable::GetPrivateStaticClass()
{
	using TClass = AInteractable;
	if (!Z_Registration_Info_UClass_AInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Interactable"),
			Z_Registration_Info_UClass_AInteractable.InnerSingleton,
			StaticRegisterNativesAInteractable,
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
	return Z_Registration_Info_UClass_AInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractable_NoRegister()
{
	return AInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Base actor class of interactable objects. */" },
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
		{ "ToolTip", "Base actor class of interactable objects." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_BeginSelection, "BeginSelection" }, // 3597655918
		{ &Z_Construct_UFunction_AInteractable_EndSelection, "EndSelection" }, // 2563587479
		{ &Z_Construct_UFunction_AInteractable_Interaction1, "Interaction1" }, // 1336826765
		{ &Z_Construct_UFunction_AInteractable_Interaction2, "Interaction2" }, // 3797888395
		{ &Z_Construct_UFunction_AInteractable_Interaction3, "Interaction3" }, // 3452804162
		{ &Z_Construct_UFunction_AInteractable_IsSelected, "IsSelected" }, // 91078967
		{ &Z_Construct_UFunction_AInteractable_SetInteractablePhysicsSimulation, "SetInteractablePhysicsSimulation" }, // 1215680518
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
	&AInteractable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractable()
{
	if (!Z_Registration_Info_UClass_AInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractable.OuterSingleton, Z_Construct_UClass_AInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
AInteractable::~AInteractable() {}
// ********** End Class AInteractable **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h__Script_OculusInteractable_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractable, AInteractable::StaticClass, TEXT("AInteractable"), &Z_Registration_Info_UClass_AInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractable), 330816917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h__Script_OculusInteractable_273813422(TEXT("/Script/OculusInteractable"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h__Script_OculusInteractable_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusHandTools_Source_OculusInteractable_Public_Interactable_h__Script_OculusInteractable_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
