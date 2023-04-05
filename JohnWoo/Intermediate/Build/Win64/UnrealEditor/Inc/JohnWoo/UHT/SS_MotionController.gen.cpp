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
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	JOHNWOO_API UClass* Z_Construct_UClass_AA_PlayerPistol_NoRegister();
	JOHNWOO_API UClass* Z_Construct_UClass_USS_MotionController();
	JOHNWOO_API UClass* Z_Construct_UClass_USS_MotionController_NoRegister();
	JOHNWOO_API UEnum* Z_Construct_UEnum_JohnWoo_EHand();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
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
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PT(EHand(Z_Param_Hand));
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
	DEFINE_FUNCTION(USS_MotionController::execAddController)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddController(Z_Param_Controller);
		P_NATIVE_END;
	}
	void USS_MotionController::StaticRegisterNativesUSS_MotionController()
	{
		UClass* Class = USS_MotionController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddController", &USS_MotionController::execAddController },
			{ "AttachPistolToController", &USS_MotionController::execAttachPistolToController },
			{ "ButtonPressPTA", &USS_MotionController::execButtonPressPTA },
			{ "InitializeControllers", &USS_MotionController::execInitializeControllers },
			{ "PT", &USS_MotionController::execPT },
			{ "PTA", &USS_MotionController::execPTA },
			{ "SetHasEntered", &USS_MotionController::execSetHasEntered },
			{ "UpdateColliderRadius", &USS_MotionController::execUpdateColliderRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USS_MotionController_AddController_Statics
	{
		struct SS_MotionController_eventAddController_Parms
		{
			USceneComponent* Controller;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_AddController_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USS_MotionController_AddController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventAddController_Parms, Controller), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_AddController_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_AddController_Statics::NewProp_Controller_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_AddController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_AddController_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USS_MotionController_AddController_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// depricated\n" },
		{ "ModuleRelativePath", "SS_MotionController.h" },
		{ "ToolTip", "depricated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USS_MotionController_AddController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USS_MotionController, nullptr, "AddController", nullptr, nullptr, sizeof(Z_Construct_UFunction_USS_MotionController_AddController_Statics::SS_MotionController_eventAddController_Parms), Z_Construct_UFunction_USS_MotionController_AddController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_AddController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USS_MotionController_AddController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USS_MotionController_AddController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USS_MotionController_AddController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USS_MotionController_AddController_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_USS_MotionController_PT_Statics
	{
		struct SS_MotionController_eventPT_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SS_MotionController_eventPT_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USS_MotionController_PT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USS_MotionController_PT_Statics::NewProp_Hand,
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
		{ &Z_Construct_UFunction_USS_MotionController_AddController, "AddController" }, // 3938441755
		{ &Z_Construct_UFunction_USS_MotionController_AttachPistolToController, "AttachPistolToController" }, // 124621179
		{ &Z_Construct_UFunction_USS_MotionController_ButtonPressPTA, "ButtonPressPTA" }, // 2263336777
		{ &Z_Construct_UFunction_USS_MotionController_InitializeControllers, "InitializeControllers" }, // 3885966147
		{ &Z_Construct_UFunction_USS_MotionController_PT, "PT" }, // 1107568996
		{ &Z_Construct_UFunction_USS_MotionController_PTA, "PTA" }, // 1796177102
		{ &Z_Construct_UFunction_USS_MotionController_SetHasEntered, "SetHasEntered" }, // 1109890272
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
		{ Z_Construct_UClass_USS_MotionController, USS_MotionController::StaticClass, TEXT("USS_MotionController"), &Z_Registration_Info_UClass_USS_MotionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USS_MotionController), 496801683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_227131532(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
