// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/Calibration.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalibration() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	JOHNWOO_API UClass* Z_Construct_UClass_UCalibration();
	JOHNWOO_API UClass* Z_Construct_UClass_UCalibration_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	DEFINE_FUNCTION(UCalibration::execIsFromCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFromCalibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalibration::execFromCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FromCalibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalibration::execIsInCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInCalibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCalibration::execSetCalibration)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCalibration(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UCalibration::StaticRegisterNativesUCalibration()
	{
		UClass* Class = UCalibration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FromCalibration", &UCalibration::execFromCalibration },
			{ "IsFromCalibration", &UCalibration::execIsFromCalibration },
			{ "IsInCalibration", &UCalibration::execIsInCalibration },
			{ "SetCalibration", &UCalibration::execSetCalibration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCalibration_FromCalibration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibration_FromCalibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Calibration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibration_FromCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibration, nullptr, "FromCalibration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibration_FromCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_FromCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibration_FromCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibration_FromCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics
	{
		struct Calibration_eventIsFromCalibration_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Calibration_eventIsFromCalibration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Calibration_eventIsFromCalibration_Parms), &Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Calibration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibration, nullptr, "IsFromCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::Calibration_eventIsFromCalibration_Parms), Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibration_IsFromCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibration_IsFromCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalibration_IsInCalibration_Statics
	{
		struct Calibration_eventIsInCalibration_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Calibration_eventIsInCalibration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Calibration_eventIsInCalibration_Parms), &Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Calibration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibration, nullptr, "IsInCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::Calibration_eventIsInCalibration_Parms), Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibration_IsInCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibration_IsInCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCalibration_SetCalibration_Statics
	{
		struct Calibration_eventSetCalibration_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCalibration_SetCalibration_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((Calibration_eventSetCalibration_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCalibration_SetCalibration_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Calibration_eventSetCalibration_Parms), &Z_Construct_UFunction_UCalibration_SetCalibration_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCalibration_SetCalibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCalibration_SetCalibration_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCalibration_SetCalibration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Calibration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCalibration_SetCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCalibration, nullptr, "SetCalibration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCalibration_SetCalibration_Statics::Calibration_eventSetCalibration_Parms), Z_Construct_UFunction_UCalibration_SetCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_SetCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCalibration_SetCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCalibration_SetCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCalibration_SetCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCalibration_SetCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCalibration);
	UClass* Z_Construct_UClass_UCalibration_NoRegister()
	{
		return UCalibration::StaticClass();
	}
	struct Z_Construct_UClass_UCalibration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCalibration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCalibration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCalibration_FromCalibration, "FromCalibration" }, // 3651206694
		{ &Z_Construct_UFunction_UCalibration_IsFromCalibration, "IsFromCalibration" }, // 3094687700
		{ &Z_Construct_UFunction_UCalibration_IsInCalibration, "IsInCalibration" }, // 3256396872
		{ &Z_Construct_UFunction_UCalibration_SetCalibration, "SetCalibration" }, // 1621315491
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCalibration_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Calibration.h" },
		{ "ModuleRelativePath", "Calibration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCalibration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCalibration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCalibration_Statics::ClassParams = {
		&UCalibration::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCalibration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCalibration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCalibration()
	{
		if (!Z_Registration_Info_UClass_UCalibration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCalibration.OuterSingleton, Z_Construct_UClass_UCalibration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCalibration.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<UCalibration>()
	{
		return UCalibration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCalibration);
	UCalibration::~UCalibration() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Calibration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Calibration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCalibration, UCalibration::StaticClass, TEXT("UCalibration"), &Z_Registration_Info_UClass_UCalibration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCalibration), 3413037763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Calibration_h_4050145225(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Calibration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Calibration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
