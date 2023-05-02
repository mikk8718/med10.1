// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/SS_MotionController.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSS_MotionController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	JOHNWOO_API UClass* Z_Construct_UClass_AA_PlayerPistol_NoRegister();
	JOHNWOO_API UClass* Z_Construct_UClass_USS_MotionController();
	JOHNWOO_API UClass* Z_Construct_UClass_USS_MotionController_NoRegister();
	JOHNWOO_API UEnum* Z_Construct_UEnum_JohnWoo_EHand();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	DEFINE_FUNCTION(USS_MotionController::execSetDominantHand)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDominantHand(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execLoadCalibrationValuesManually)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCalibrationValuesManually(EHand(Z_Param_Hand),Z_Param_Radius,Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execDisableCollider)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCollider(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execToilet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Toilet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execLoadCalibrationValues)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadCalibrationValues(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execSaveCalibrationValues)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCalibrationValues(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execSetColliderPosition)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColliderPosition(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execDisableCollision)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableCollision(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execButtonPressPTA)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonPressPTA(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execSetHasEntered)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasEntered(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execPTA)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PTA(EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execPT)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PT(EHand(Z_Param_Hand),Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execUpdateColliderRadius)
	{
		P_GET_ENUM(EHand,Z_Param_hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateColliderRadius(EHand(Z_Param_hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execInitializeControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USS_MotionController::execAttachPistolToController)
	{
		P_GET_OBJECT(AA_PlayerPistol,Z_Param_PistolActor);
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachPistolToController(Z_Param_PistolActor,EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	void USS_MotionController::StaticRegisterNativesUSS_MotionController()
	{
		UClass* Class = USS_MotionController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachPistolToController", &USS_MotionController::execAttachPistolToController },
			{ "ButtonPressPTA", &USS_MotionController::execButtonPressPTA },
			{ "DisableCollider", &USS_MotionController::execDisableCollider },
			{ "DisableCollision", &USS_MotionController::execDisableCollision },
			{ "InitializeControllers", &USS_MotionController::execInitializeControllers },
			{ "LoadCalibrationValues", &USS_MotionController::execLoadCalibrationValues },
			{ "LoadCalibrationValuesManually", &USS_MotionController::execLoadCalibrationValuesManually },
			{ "PT", &USS_MotionController::execPT },
			{ "PTA", &USS_MotionController::execPTA },
			{ "SaveCalibrationValues", &USS_MotionController::execSaveCalibrationValues },
			{ "SetColliderPosition", &USS_MotionController::execSetColliderPosition },
			{ "SetDominantHand", &USS_MotionController::execSetDominantHand },
			{ "SetHasEntered", &USS_MotionController::execSetHasEntered },
			{ "Toilet", &USS_MotionController::execToilet },
			{ "UpdateColliderRadius", &USS_MotionController::execUpdateColliderRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics
	{
		struct SS_MotionController_eventAttachPistolToController_Parms
		{
			AA_PlayerPistol* PistolActor;
			EHand Hand;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PistolActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::NewProp_PistolActor = { "PistolActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventAttachPistolToController_Parms, PistolActor), Z_Construct_UClass_AA_PlayerPistol_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventAttachPistolToController_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::NewProp_PistolActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "AttachPistolToController", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::SS_MotionController_eventAttachPistolToController_Parms), Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_AttachPistolToController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_AttachPistolToController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics
	{
		struct SS_MotionController_eventButtonPressPTA_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventButtonPressPTA_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "ButtonPressPTA", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::SS_MotionController_eventButtonPressPTA_Parms), Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_ButtonPressPTA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_ButtonPressPTA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics
	{
		struct SS_MotionController_eventDisableCollider_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventDisableCollider_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "DisableCollider", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::SS_MotionController_eventDisableCollider_Parms), Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_DisableCollider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_DisableCollider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics
	{
		struct SS_MotionController_eventDisableCollision_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventDisableCollision_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "DisableCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::SS_MotionController_eventDisableCollision_Parms), Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_DisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_DisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_InitializeControllers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_InitializeControllers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// call this once!\n" },
		{ "ModuleRelativePath", "SS_MotionController.h" },
		{ "ToolTip", "call this once!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_InitializeControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "InitializeControllers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_InitializeControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_InitializeControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_InitializeControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_InitializeControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics
	{
		struct SS_MotionController_eventLoadCalibrationValues_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventLoadCalibrationValues_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "LoadCalibrationValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::SS_MotionController_eventLoadCalibrationValues_Parms), Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics
	{
		struct SS_MotionController_eventLoadCalibrationValuesManually_Parms
		{
			EHand Hand;
			float Radius;
			FVector position;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventLoadCalibrationValuesManually_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventLoadCalibrationValuesManually_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventLoadCalibrationValuesManually_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "LoadCalibrationValuesManually", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::SS_MotionController_eventLoadCalibrationValuesManually_Parms), Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_PT_Statics
	{
		struct SS_MotionController_eventPT_Parms
		{
			EHand Hand;
			int32 id;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventPT_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventPT_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_PT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_PT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_PT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "PT", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_PT_Statics::SS_MotionController_eventPT_Parms), Z_Construct_UFunction_USS_MotionController_PT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_PT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_PT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_PT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_PT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_PT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_PTA_Statics
	{
		struct SS_MotionController_eventPTA_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_PTA_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_PTA_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventPTA_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_PTA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PTA_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PTA_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_PTA_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_PTA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "PTA", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_PTA_Statics::SS_MotionController_eventPTA_Parms), Z_Construct_UFunction_USS_MotionController_PTA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_PTA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_PTA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_PTA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_PTA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_PTA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics
	{
		struct SS_MotionController_eventSaveCalibrationValues_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventSaveCalibrationValues_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "SaveCalibrationValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::SS_MotionController_eventSaveCalibrationValues_Parms), Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics
	{
		struct SS_MotionController_eventSetColliderPosition_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventSetColliderPosition_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "SetColliderPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::SS_MotionController_eventSetColliderPosition_Parms), Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_SetColliderPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_SetColliderPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics
	{
		struct SS_MotionController_eventSetDominantHand_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventSetDominantHand_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "SetDominantHand", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::SS_MotionController_eventSetDominantHand_Parms), Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_SetDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_SetDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics
	{
		struct SS_MotionController_eventSetHasEntered_Parms
		{
			EHand Hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventSetHasEntered_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "SetHasEntered", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::SS_MotionController_eventSetHasEntered_Parms), Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_SetHasEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_SetHasEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_Toilet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_Toilet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_Toilet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "Toilet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_Toilet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_Toilet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_Toilet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_Toilet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics
	{
		struct SS_MotionController_eventUpdateColliderRadius_Parms
		{
			EHand hand;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::NewProp_hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::NewProp_hand = { "hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventUpdateColliderRadius_Parms, hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::NewProp_hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::NewProp_hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "UpdateColliderRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::SS_MotionController_eventUpdateColliderRadius_Parms), Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USS_MotionController);
	UClass* Z_Construct_UClass_USS_MotionController_NoRegister()
	{
		return USS_MotionController::StaticClass();
	}
	struct Z_Construct_UClass_USS_MotionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USS_MotionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USS_MotionController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USS_MotionController_AttachPistolToController, "AttachPistolToController" }, // 124621179
		{ &Z_Construct_UFunction_USS_MotionController_ButtonPressPTA, "ButtonPressPTA" }, // 2263336777
		{ &Z_Construct_UFunction_USS_MotionController_DisableCollider, "DisableCollider" }, // 1686317718
		{ &Z_Construct_UFunction_USS_MotionController_DisableCollision, "DisableCollision" }, // 3743724822
		{ &Z_Construct_UFunction_USS_MotionController_InitializeControllers, "InitializeControllers" }, // 3885966147
		{ &Z_Construct_UFunction_USS_MotionController_LoadCalibrationValues, "LoadCalibrationValues" }, // 1521027242
		{ &Z_Construct_UFunction_USS_MotionController_LoadCalibrationValuesManually, "LoadCalibrationValuesManually" }, // 2513448051
		{ &Z_Construct_UFunction_USS_MotionController_PT, "PT" }, // 1427354949
		{ &Z_Construct_UFunction_USS_MotionController_PTA, "PTA" }, // 1796177102
		{ &Z_Construct_UFunction_USS_MotionController_SaveCalibrationValues, "SaveCalibrationValues" }, // 4077173689
		{ &Z_Construct_UFunction_USS_MotionController_SetColliderPosition, "SetColliderPosition" }, // 2207366654
		{ &Z_Construct_UFunction_USS_MotionController_SetDominantHand, "SetDominantHand" }, // 840184828
		{ &Z_Construct_UFunction_USS_MotionController_SetHasEntered, "SetHasEntered" }, // 1109890272
		{ &Z_Construct_UFunction_USS_MotionController_Toilet, "Toilet" }, // 1971506293
		{ &Z_Construct_UFunction_USS_MotionController_UpdateColliderRadius, "UpdateColliderRadius" }, // 3053851622
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USS_MotionController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SS_MotionController.h" },
		{ "ModuleRelativePath", "SS_MotionController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USS_MotionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USS_MotionController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USS_MotionController_Statics::ClassParams = {
		&USS_MotionController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USS_MotionController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USS_MotionController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USS_MotionController()
	{
		if (!Z_Registration_Info_UClass_USS_MotionController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USS_MotionController.OuterSingleton, Z_Construct_UClass_USS_MotionController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USS_MotionController.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<USS_MotionController>()
	{
		return USS_MotionController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USS_MotionController);
	USS_MotionController::~USS_MotionController() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USS_MotionController, USS_MotionController::StaticClass, TEXT("USS_MotionController"), &Z_Registration_Info_UClass_USS_MotionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USS_MotionController), 2172563177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_1416619003(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
