// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/A_PlayerPistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_PlayerPistol() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JOHNWOO_API UClass* Z_Construct_UClass_AA_PlayerPistol();
	JOHNWOO_API UClass* Z_Construct_UClass_AA_PlayerPistol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	void AA_PlayerPistol::StaticRegisterNativesAA_PlayerPistol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA_PlayerPistol);
	UClass* Z_Construct_UClass_AA_PlayerPistol_NoRegister()
	{
		return AA_PlayerPistol::StaticClass();
	}
	struct Z_Construct_UClass_AA_PlayerPistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_PlayerPistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "A_PlayerPistol.h" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_PlayerPistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_PlayerPistol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_PlayerPistol_Statics::ClassParams = {
		&AA_PlayerPistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_PlayerPistol()
	{
		if (!Z_Registration_Info_UClass_AA_PlayerPistol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA_PlayerPistol.OuterSingleton, Z_Construct_UClass_AA_PlayerPistol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AA_PlayerPistol.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<AA_PlayerPistol>()
	{
		return AA_PlayerPistol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_PlayerPistol);
	AA_PlayerPistol::~AA_PlayerPistol() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AA_PlayerPistol, AA_PlayerPistol::StaticClass, TEXT("AA_PlayerPistol"), &Z_Registration_Info_UClass_AA_PlayerPistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_PlayerPistol), 1566011194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_1243213763(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
