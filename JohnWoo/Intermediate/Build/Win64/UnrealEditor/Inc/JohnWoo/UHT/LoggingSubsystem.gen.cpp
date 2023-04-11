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
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	JOHNWOO_API UClass* Z_Construct_UClass_ULoggingSubsystem();
	JOHNWOO_API UClass* Z_Construct_UClass_ULoggingSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
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
			{ "WriteToFile", &ULoggingSubsystem::execWriteToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ Z_Construct_UClass_ULoggingSubsystem, ULoggingSubsystem::StaticClass, TEXT("ULoggingSubsystem"), &Z_Registration_Info_UClass_ULoggingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoggingSubsystem), 3232374087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_3576752134(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_LoggingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
