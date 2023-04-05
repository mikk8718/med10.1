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
	void USC_ThrustingReader::StaticRegisterNativesUSC_ThrustingReader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USC_ThrustingReader);
	UClass* Z_Construct_UClass_USC_ThrustingReader_NoRegister()
	{
		return USC_ThrustingReader::StaticClass();
	}
	struct Z_Construct_UClass_USC_ThrustingReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USC_ThrustingReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_USC_ThrustingReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USC_ThrustingReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USC_ThrustingReader_Statics::ClassParams = {
		&USC_ThrustingReader::StaticClass,
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
		{ Z_Construct_UClass_USC_ThrustingReader, USC_ThrustingReader::StaticClass, TEXT("USC_ThrustingReader"), &Z_Registration_Info_UClass_USC_ThrustingReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USC_ThrustingReader), 437849769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_1815263808(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SC_ThrustingReader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
