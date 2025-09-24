// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandRecognitionFunctionLibrary.h"

#ifdef OCULUSHANDPOSERECOGNITION_HandRecognitionFunctionLibrary_generated_h
#error "HandRecognitionFunctionLibrary.generated.h already included, missing '#pragma once' in HandRecognitionFunctionLibrary.h"
#endif
#define OCULUSHANDPOSERECOGNITION_HandRecognitionFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHandGestureRecognizer;
class UHandPoseRecognizer;
class UObject;
enum class EGestureConsumptionBehavior : uint8;
enum class ERecordHandPoseEntryType : uint8;
enum class ERecordHandPoseExitType : uint8;
enum class EWaitForHandGestureExitType : uint8;
enum class EWaitForHandPoseExitType : uint8;
struct FLatentActionInfo;

// ********** Begin Class UHandRecognitionFunctionLibrary ******************************************
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecordHandPose); \
	DECLARE_FUNCTION(execWaitForHandGesture); \
	DECLARE_FUNCTION(execWaitForHandPose);


OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandRecognitionFunctionLibrary_NoRegister();

#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandRecognitionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHandRecognitionFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSHANDPOSERECOGNITION_API UClass* Z_Construct_UClass_UHandRecognitionFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHandRecognitionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusHandPoseRecognition"), Z_Construct_UClass_UHandRecognitionFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHandRecognitionFunctionLibrary)


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandRecognitionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHandRecognitionFunctionLibrary(UHandRecognitionFunctionLibrary&&) = delete; \
	UHandRecognitionFunctionLibrary(const UHandRecognitionFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandRecognitionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandRecognitionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandRecognitionFunctionLibrary) \
	NO_API virtual ~UHandRecognitionFunctionLibrary();


#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_50_PROLOG
#define FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHandRecognitionFunctionLibrary;

// ********** End Class UHandRecognitionFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusHandTools_Source_OculusHandPoseRecognition_Public_HandRecognitionFunctionLibrary_h

// ********** Begin Enum EWaitForHandPoseExitType **************************************************
#define FOREACH_ENUM_EWAITFORHANDPOSEEXITTYPE(op) \
	op(EWaitForHandPoseExitType::PoseSeen) \
	op(EWaitForHandPoseExitType::TimeOut) 

enum class EWaitForHandPoseExitType : uint8;
template<> struct TIsUEnumClass<EWaitForHandPoseExitType> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EWaitForHandPoseExitType>();
// ********** End Enum EWaitForHandPoseExitType ****************************************************

// ********** Begin Enum EWaitForHandGestureExitType ***********************************************
#define FOREACH_ENUM_EWAITFORHANDGESTUREEXITTYPE(op) \
	op(EWaitForHandGestureExitType::GestureSeen) \
	op(EWaitForHandGestureExitType::TimeOut) 

enum class EWaitForHandGestureExitType : uint8;
template<> struct TIsUEnumClass<EWaitForHandGestureExitType> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<EWaitForHandGestureExitType>();
// ********** End Enum EWaitForHandGestureExitType *************************************************

// ********** Begin Enum ERecordHandPoseEntryType **************************************************
#define FOREACH_ENUM_ERECORDHANDPOSEENTRYTYPE(op) \
	op(ERecordHandPoseEntryType::StartRecording) \
	op(ERecordHandPoseEntryType::StopRecording) 

enum class ERecordHandPoseEntryType : uint8;
template<> struct TIsUEnumClass<ERecordHandPoseEntryType> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<ERecordHandPoseEntryType>();
// ********** End Enum ERecordHandPoseEntryType ****************************************************

// ********** Begin Enum ERecordHandPoseExitType ***************************************************
#define FOREACH_ENUM_ERECORDHANDPOSEEXITTYPE(op) \
	op(ERecordHandPoseExitType::RecordingStarted) \
	op(ERecordHandPoseExitType::RecordingStopped) 

enum class ERecordHandPoseExitType : uint8;
template<> struct TIsUEnumClass<ERecordHandPoseExitType> { enum { Value = true }; };
template<> OCULUSHANDPOSERECOGNITION_API UEnum* StaticEnum<ERecordHandPoseExitType>();
// ********** End Enum ERecordHandPoseExitType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
