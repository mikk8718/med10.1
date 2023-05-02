// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SS_MotionController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AA_PlayerPistol;
enum class EHand : uint8;
#ifdef JOHNWOO_SS_MotionController_generated_h
#error "SS_MotionController.generated.h already included, missing '#pragma once' in SS_MotionController.h"
#endif
#define JOHNWOO_SS_MotionController_generated_h

#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_SPARSE_DATA
#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableCollider); \
	DECLARE_FUNCTION(execToilet); \
	DECLARE_FUNCTION(execLoadCalibrationValues); \
	DECLARE_FUNCTION(execSaveCalibrationValues); \
	DECLARE_FUNCTION(execSetColliderPosition); \
	DECLARE_FUNCTION(execDisableCollision); \
	DECLARE_FUNCTION(execButtonPressPTA); \
	DECLARE_FUNCTION(execSetHasEntered); \
	DECLARE_FUNCTION(execPTA); \
	DECLARE_FUNCTION(execPT); \
	DECLARE_FUNCTION(execUpdateColliderRadius); \
	DECLARE_FUNCTION(execInitializeControllers); \
	DECLARE_FUNCTION(execAttachPistolToController);


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableCollider); \
	DECLARE_FUNCTION(execToilet); \
	DECLARE_FUNCTION(execLoadCalibrationValues); \
	DECLARE_FUNCTION(execSaveCalibrationValues); \
	DECLARE_FUNCTION(execSetColliderPosition); \
	DECLARE_FUNCTION(execDisableCollision); \
	DECLARE_FUNCTION(execButtonPressPTA); \
	DECLARE_FUNCTION(execSetHasEntered); \
	DECLARE_FUNCTION(execPTA); \
	DECLARE_FUNCTION(execPT); \
	DECLARE_FUNCTION(execUpdateColliderRadius); \
	DECLARE_FUNCTION(execInitializeControllers); \
	DECLARE_FUNCTION(execAttachPistolToController);


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_ACCESSORS
#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSS_MotionController(); \
	friend struct Z_Construct_UClass_USS_MotionController_Statics; \
public: \
	DECLARE_CLASS(USS_MotionController, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JohnWoo"), NO_API) \
	DECLARE_SERIALIZER(USS_MotionController)


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSS_MotionController(); \
	friend struct Z_Construct_UClass_USS_MotionController_Statics; \
public: \
	DECLARE_CLASS(USS_MotionController, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JohnWoo"), NO_API) \
	DECLARE_SERIALIZER(USS_MotionController)


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USS_MotionController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USS_MotionController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USS_MotionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USS_MotionController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USS_MotionController(USS_MotionController&&); \
	NO_API USS_MotionController(const USS_MotionController&); \
public: \
	NO_API virtual ~USS_MotionController();


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USS_MotionController() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USS_MotionController(USS_MotionController&&); \
	NO_API USS_MotionController(const USS_MotionController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USS_MotionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USS_MotionController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USS_MotionController) \
	NO_API virtual ~USS_MotionController();


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_12_PROLOG
#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_SPARSE_DATA \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_RPC_WRAPPERS \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_ACCESSORS \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_INCLASS \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_SPARSE_DATA \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_ACCESSORS \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOHNWOO_API UClass* StaticClass<class USS_MotionController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
