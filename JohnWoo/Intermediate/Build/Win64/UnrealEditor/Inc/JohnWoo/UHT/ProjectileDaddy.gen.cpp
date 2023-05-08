// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/ProjectileDaddy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileDaddy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JOHNWOO_API UClass* Z_Construct_UClass_AProjectileDaddy();
	JOHNWOO_API UClass* Z_Construct_UClass_AProjectileDaddy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	void AProjectileDaddy::StaticRegisterNativesAProjectileDaddy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileDaddy);
	UClass* Z_Construct_UClass_AProjectileDaddy_NoRegister()
	{
		return AProjectileDaddy::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileDaddy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiplacementSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiplacementSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileDaddy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileDaddy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileDaddy.h" },
		{ "ModuleRelativePath", "ProjectileDaddy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ProjectileDaddy" },
		{ "ModuleRelativePath", "ProjectileDaddy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProjectileDaddy, Acceleration), METADATA_PARAMS(Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_DiplacementSize_MetaData[] = {
		{ "Category", "ProjectileDaddy" },
		{ "ModuleRelativePath", "ProjectileDaddy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_DiplacementSize = { "DiplacementSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProjectileDaddy, DiplacementSize), METADATA_PARAMS(Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_DiplacementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_DiplacementSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileDaddy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileDaddy_Statics::NewProp_DiplacementSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileDaddy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileDaddy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileDaddy_Statics::ClassParams = {
		&AProjectileDaddy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileDaddy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileDaddy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileDaddy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileDaddy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileDaddy()
	{
		if (!Z_Registration_Info_UClass_AProjectileDaddy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileDaddy.OuterSingleton, Z_Construct_UClass_AProjectileDaddy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileDaddy.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<AProjectileDaddy>()
	{
		return AProjectileDaddy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileDaddy);
	AProjectileDaddy::~AProjectileDaddy() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_ProjectileDaddy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_ProjectileDaddy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileDaddy, AProjectileDaddy::StaticClass, TEXT("AProjectileDaddy"), &Z_Registration_Info_UClass_AProjectileDaddy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileDaddy), 1410095010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_ProjectileDaddy_h_2484787571(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_ProjectileDaddy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_ProjectileDaddy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
