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
	JOHNWOO_API UClass* Z_Construct_UClass_USS_MotionController();
	JOHNWOO_API UClass* Z_Construct_UClass_USS_MotionController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	void USS_MotionController::StaticRegisterNativesUSS_MotionController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USS_MotionController);
	UClass* Z_Construct_UClass_USS_MotionController_NoRegister()
	{
		return USS_MotionController::StaticClass();
	}
	struct Z_Construct_UClass_USS_MotionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USS_MotionController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_USS_MotionController, USS_MotionController::StaticClass, TEXT("USS_MotionController"), &Z_Registration_Info_UClass_USS_MotionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USS_MotionController), 4223461155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_4099518365(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_SS_MotionController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
