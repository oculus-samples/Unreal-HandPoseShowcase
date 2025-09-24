// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandGesture.h"

#ifdef OCULUSHANDPOSERECOGNITION_HandGesture_generated_h
#error "HandGesture.generated.h already included, missing '#pragma once' in HandGesture.h"
#endif
#define OCULUSHANDPOSERECOGNITION_HandGesture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHandGesture ******************************************************
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHandGesture_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHandGesture;
// ********** End ScriptStruct FHandGesture ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandGesture_h

// ********** Begin Enum EGestureState *************************************************************
#define FOREACH_ENUM_EGESTURESTATE(op) \
	op(EGestureState::GestureNotStarted) \
	op(EGestureState::GestureInProgress) \
	op(EGestureState::GestureCompleted) 

enum class EGestureState : uint8;
template<> struct TIsUEnumClass<EGestureState> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EGestureState>();
// ********** End Enum EGestureState ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
