// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/SC_ThrustingReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSC_ThrustingReader() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	JOHNWOO_API UClass* Z_Construct_UClass_USC_ThrustingReader();
	JOHNWOO_API UClass* Z_Construct_UClass_USC_ThrustingReader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	DEFINE_FUNCTION(USC_ThrustingReader::execSetupThreshholds)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_v);
		P_GET_PROPERTY(FFloatProperty,Z_Param_a);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupThreshholds(Z_Param_v,Z_Param_a);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USC_ThrustingReader::execGetVelocityAndAccel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,float>*)Z_Param__Result=P_THIS->GetVelocityAndAccel();
		P_NATIVE_END;
	}
	void USC_ThrustingReader::StaticRegisterNativesUSC_ThrustingReader()
	{
		UClass* Class = USC_ThrustingReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVelocityAndAccel", &USC_ThrustingReader::execGetVelocityAndAccel },
			{ "SetupThreshholds", &USC_ThrustingReader::execSetupThreshholds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics
	{
		struct SC_ThrustingReader_eventGetVelocityAndAccel_Parms
		{
			TMap<FString,float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SC_ThrustingReader_eventGetVelocityAndAccel_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SC_ThrustingReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USC_ThrustingReader, nullptr, "GetVelocityAndAccel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::SC_ThrustingReader_eventGetVelocityAndAccel_Parms), Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics
	{
		struct SC_ThrustingReader_eventSetupThreshholds_Parms
		{
			float v;
			float a;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_v;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_a;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::NewProp_v = { "v", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SC_ThrustingReader_eventSetupThreshholds_Parms, v), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SC_ThrustingReader_eventSetupThreshholds_Parms, a), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::NewProp_v,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SC_ThrustingReader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USC_ThrustingReader, nullptr, "SetupThreshholds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::SC_ThrustingReader_eventSetupThreshholds_Parms), Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USC_ThrustingReader);
	UClass* Z_Construct_UClass_USC_ThrustingReader_NoRegister()
	{
		return USC_ThrustingReader::StaticClass();
	}
	struct Z_Construct_UClass_USC_ThrustingReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_customThresholds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_customThresholds;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_customThresholdMet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_customThresholdMet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_customThresholdMet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USC_ThrustingReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USC_ThrustingReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USC_ThrustingReader_GetVelocityAndAccel, "GetVelocityAndAccel" }, // 3430691256
		{ &Z_Construct_UFunction_USC_ThrustingReader_SetupThreshholds, "SetupThreshholds" }, // 151752717
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USC_ThrustingReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SC_ThrustingReader.h" },
		{ "ModuleRelativePath", "SC_ThrustingReader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholds_MetaData[] = {
		{ "Category", "SC_ThrustingReader" },
		{ "ModuleRelativePath", "SC_ThrustingReader.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholds = { "customThresholds", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(customThresholds, USC_ThrustingReader), nullptr, nullptr, STRUCT_OFFSET(USC_ThrustingReader, customThresholds), METADATA_PARAMS(Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholds_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet_Inner = { "customThresholdMet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet_MetaData[] = {
		{ "Category", "SC_ThrustingReader" },
		{ "Comment", "//element[0] holds distance threshold, element[1] holds velocity treshold, element[2] holds acceleration threshold.\n" },
		{ "ModuleRelativePath", "SC_ThrustingReader.h" },
		{ "ToolTip", "element[0] holds distance threshold, element[1] holds velocity treshold, element[2] holds acceleration threshold." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet = { "customThresholdMet", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USC_ThrustingReader, customThresholdMet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USC_ThrustingReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USC_ThrustingReader_Statics::NewProp_customThresholdMet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USC_ThrustingReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USC_ThrustingReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USC_ThrustingReader_Statics::ClassParams = {
		&USC_ThrustingReader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USC_ThrustingReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USC_ThrustingReader_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USC_ThrustingReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USC_ThrustingReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USC_ThrustingReader()
	{
		if (!Z_Registration_Info_UClass_USC_ThrustingReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USC_ThrustingReader.OuterSingleton, Z_Construct_UClass_USC_ThrustingReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USC_ThrustingReader.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<USC_ThrustingReader>()
	{
		return USC_ThrustingReader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USC_ThrustingReader);
	USC_ThrustingReader::~USC_ThrustingReader() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USC_ThrustingReader, USC_ThrustingReader::StaticClass, TEXT("USC_ThrustingReader"), &Z_Registration_Info_UClass_USC_ThrustingReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USC_ThrustingReader), 1994544955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_4079039042(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
