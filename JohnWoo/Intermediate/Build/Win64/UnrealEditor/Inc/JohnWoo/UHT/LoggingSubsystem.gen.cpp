// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/LoggingSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoggingSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	JOHNWOO_API UClass* Z_Construct_UClass_ULoggingSubsystem();
	JOHNWOO_API UClass* Z_Construct_UClass_ULoggingSubsystem_NoRegister();
	JOHNWOO_API UEnum* Z_Construct_UEnum_JohnWoo_EHand();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	DEFINE_FUNCTION(ULoggingSubsystem::execSaveAccuracy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_v);
		P_GET_PROPERTY(FFloatProperty,Z_Param_a);
		P_GET_UBOOL(Z_Param_hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToTarget);
		P_GET_UBOOL(Z_Param_CriticalHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAccuracy(Z_Param_v,Z_Param_a,Z_Param_hit,Z_Param_DistanceToTarget,Z_Param_CriticalHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoggingSubsystem::execSaveFrameRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFrameRate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoggingSubsystem::execInitializeParticipant)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeParticipant(Z_Param_ID,EHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoggingSubsystem::execSaveCalibrationValues)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCalibrationValues(Z_Param_ID,Z_Param_Radius,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoggingSubsystem::execWriteToFile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Hits);
		P_GET_PROPERTY(FIntProperty,Z_Param_Health);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpawnTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeathTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_alive);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteToFile(Z_Param_ID,Z_Param_Hits,Z_Param_Health,Z_Param_SpawnTime,Z_Param_DeathTime,Z_Param_alive,Z_Param_DistanceToPlayer);
		P_NATIVE_END;
	}
	void ULoggingSubsystem::StaticRegisterNativesULoggingSubsystem()
	{
		UClass* Class = ULoggingSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeParticipant", &ULoggingSubsystem::execInitializeParticipant },
			{ "SaveAccuracy", &ULoggingSubsystem::execSaveAccuracy },
			{ "SaveCalibrationValues", &ULoggingSubsystem::execSaveCalibrationValues },
			{ "SaveFrameRate", &ULoggingSubsystem::execSaveFrameRate },
			{ "WriteToFile", &ULoggingSubsystem::execWriteToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics
	{
		struct LoggingSubsystem_eventInitializeParticipant_Parms
		{
			int32 ID;
			EHand Hand;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventInitializeParticipant_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventInitializeParticipant_Parms, Hand), Z_Construct_UEnum_JohnWoo_EHand, METADATA_PARAMS(nullptr, 0) }; // 2697977092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::NewProp_Hand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoggingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoggingSubsystem, nullptr, "InitializeParticipant", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::LoggingSubsystem_eventInitializeParticipant_Parms), Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics
	{
		struct LoggingSubsystem_eventSaveAccuracy_Parms
		{
			float v;
			float a;
			bool hit;
			float DistanceToTarget;
			bool CriticalHit;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_v;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
		static void NewProp_hit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToTarget;
		static void NewProp_CriticalHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CriticalHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveAccuracy_Parms, v), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveAccuracy_Parms, a), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_hit_SetBit(void* Obj)
	{
		((LoggingSubsystem_eventSaveAccuracy_Parms*)Obj)->hit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LoggingSubsystem_eventSaveAccuracy_Parms), &Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_hit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_DistanceToTarget = { "DistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveAccuracy_Parms, DistanceToTarget), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_CriticalHit_SetBit(void* Obj)
	{
		((LoggingSubsystem_eventSaveAccuracy_Parms*)Obj)->CriticalHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_CriticalHit = { "CriticalHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LoggingSubsystem_eventSaveAccuracy_Parms), &Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_CriticalHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_v,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_a,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_DistanceToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::NewProp_CriticalHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoggingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoggingSubsystem, nullptr, "SaveAccuracy", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::LoggingSubsystem_eventSaveAccuracy_Parms), Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics
	{
		struct LoggingSubsystem_eventSaveCalibrationValues_Parms
		{
			int32 ID;
			float Radius;
			FVector Position;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveCalibrationValues_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveCalibrationValues_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveCalibrationValues_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoggingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoggingSubsystem, nullptr, "SaveCalibrationValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::LoggingSubsystem_eventSaveCalibrationValues_Parms), Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics
	{
		struct LoggingSubsystem_eventSaveFrameRate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventSaveFrameRate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoggingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoggingSubsystem, nullptr, "SaveFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::LoggingSubsystem_eventSaveFrameRate_Parms), Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics
	{
		struct LoggingSubsystem_eventWriteToFile_Parms
		{
			int32 ID;
			int32 Hits;
			int32 Health;
			float SpawnTime;
			float DeathTime;
			int32 alive;
			float DistanceToPlayer;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_alive;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, Hits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, SpawnTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_DeathTime = { "DeathTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, DeathTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_alive = { "alive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, alive), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_DistanceToPlayer = { "DistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoggingSubsystem_eventWriteToFile_Parms, DistanceToPlayer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_Hits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_SpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_DeathTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_alive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::NewProp_DistanceToPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoggingSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoggingSubsystem, nullptr, "WriteToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::LoggingSubsystem_eventWriteToFile_Parms), Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoggingSubsystem_WriteToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoggingSubsystem_WriteToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoggingSubsystem);
	UClass* Z_Construct_UClass_ULoggingSubsystem_NoRegister()
	{
		return ULoggingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULoggingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoggingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoggingSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoggingSubsystem_InitializeParticipant, "InitializeParticipant" }, // 408574381
		{ &Z_Construct_UFunction_ULoggingSubsystem_SaveAccuracy, "SaveAccuracy" }, // 1914453774
		{ &Z_Construct_UFunction_ULoggingSubsystem_SaveCalibrationValues, "SaveCalibrationValues" }, // 4018911979
		{ &Z_Construct_UFunction_ULoggingSubsystem_SaveFrameRate, "SaveFrameRate" }, // 1888212675
		{ &Z_Construct_UFunction_ULoggingSubsystem_WriteToFile, "WriteToFile" }, // 3318943270
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoggingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LoggingSubsystem.h" },
		{ "ModuleRelativePath", "LoggingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoggingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoggingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoggingSubsystem_Statics::ClassParams = {
		&ULoggingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoggingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoggingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoggingSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULoggingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoggingSubsystem.OuterSingleton, Z_Construct_UClass_ULoggingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoggingSubsystem.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<ULoggingSubsystem>()
	{
		return ULoggingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoggingSubsystem);
	ULoggingSubsystem::~ULoggingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoggingSubsystem, ULoggingSubsystem::StaticClass, TEXT("ULoggingSubsystem"), &Z_Registration_Info_UClass_ULoggingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoggingSubsystem), 238304974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_2742298658(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
