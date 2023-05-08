// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/Movement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	JOHNWOO_API UClass* Z_Construct_UClass_UMovement();
	JOHNWOO_API UClass* Z_Construct_UClass_UMovement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	void UMovement::StaticRegisterNativesUMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovement);
	UClass* Z_Construct_UClass_UMovement_NoRegister()
	{
		return UMovement::StaticClass();
	}
	struct Z_Construct_UClass_UMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Bullet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_JohnWoo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movement.h" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::NewProp_Bullet_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovement_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovement, Bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::NewProp_Bullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::NewProp_Bullet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovement_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovement, Weight), METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovement_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovement, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovement_Statics::NewProp_HapticEffect_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Movement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovement_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovement, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::NewProp_HapticEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::NewProp_HapticEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovement_Statics::NewProp_Bullet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovement_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovement_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovement_Statics::NewProp_HapticEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovement_Statics::ClassParams = {
		&UMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovement()
	{
		if (!Z_Registration_Info_UClass_UMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovement.OuterSingleton, Z_Construct_UClass_UMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovement.OuterSingleton;
	}
	template<> JOHNWOO_API UClass* StaticClass<UMovement>()
	{
		return UMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovement);
	UMovement::~UMovement() {}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Movement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Movement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovement, UMovement::StaticClass, TEXT("UMovement"), &Z_Registration_Info_UClass_UMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovement), 2713348142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Movement_h_1387274083(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Movement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_Movement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
