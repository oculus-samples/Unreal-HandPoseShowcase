// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusUtilsLibrary.h"

#ifdef OCULUSUTILS_OculusUtilsLibrary_generated_h
#error "OculusUtilsLibrary.generated.h already included, missing '#pragma once' in OculusUtilsLibrary.h"
#endif
#define OCULUSUTILS_OculusUtilsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UActorComponent;

// ********** Begin Class UBuildInfo ***************************************************************
OCULUSUTILS_API UClass* Z_Construct_UClass_UBuildInfo_NoRegister();

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildInfo(); \
	friend struct Z_Construct_UClass_UBuildInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSUTILS_API UClass* Z_Construct_UClass_UBuildInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuildInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusUtils"), Z_Construct_UClass_UBuildInfo_NoRegister) \
	DECLARE_SERIALIZER(UBuildInfo) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuildInfo(UBuildInfo&&) = delete; \
	UBuildInfo(const UBuildInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildInfo) \
	NO_API virtual ~UBuildInfo();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_19_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuildInfo;

// ********** End Class UBuildInfo *****************************************************************

// ********** Begin Class UOculusUtilsLibrary ******************************************************
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortComponentsByName); \
	DECLARE_FUNCTION(execGetOculusBuildInfo);


OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusUtilsLibrary_NoRegister();

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusUtilsLibrary(); \
	friend struct Z_Construct_UClass_UOculusUtilsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSUTILS_API UClass* Z_Construct_UClass_UOculusUtilsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusUtilsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusUtils"), Z_Construct_UClass_UOculusUtilsLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOculusUtilsLibrary)


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusUtilsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusUtilsLibrary(UOculusUtilsLibrary&&) = delete; \
	UOculusUtilsLibrary(const UOculusUtilsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusUtilsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusUtilsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusUtilsLibrary) \
	NO_API virtual ~UOculusUtilsLibrary();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_37_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusUtilsLibrary;

// ********** End Class UOculusUtilsLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusUtils_Public_OculusUtilsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
