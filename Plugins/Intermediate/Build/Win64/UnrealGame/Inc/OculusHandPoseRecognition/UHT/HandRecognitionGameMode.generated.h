// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandRecognitionGameMode.h"

#ifdef OCULUSHANDPOSERECOGNITION_HandRecognitionGameMode_generated_h
#error "HandRecognitionGameMode.generated.h already included, missing '#pragma once' in HandRecognitionGameMode.h"
#endif
#define OCULUSHANDPOSERECOGNITION_HandRecognitionGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHandRecognitionGameMode *************************************************
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogHandPose);


OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_AHandRecognitionGameMode_NoRegister();

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHandRecognitionGameMode(); \
	friend struct Z_Construct_UClass_AHandRecognitionGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_AHandRecognitionGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AHandRecognitionGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusHandPoseRecognition"), Z_Construct_UClass_AHandRecognitionGameMode_NoRegister) \
	DECLARE_SERIALIZER(AHandRecognitionGameMode)


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHandRecognitionGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHandRecognitionGameMode(AHandRecognitionGameMode&&) = delete; \
	AHandRecognitionGameMode(const AHandRecognitionGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandRecognitionGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandRecognitionGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHandRecognitionGameMode) \
	NO_API virtual ~AHandRecognitionGameMode();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_19_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHandRecognitionGameMode;

// ********** End Class AHandRecognitionGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
