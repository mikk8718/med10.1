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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, Orientation), METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_FailureSound_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_FailureSound = { "FailureSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, FailureSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_FailureSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_FailureSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, Projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_HapticEffect_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_HapticEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_HapticEffect_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0040008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_ActorRot_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_ActorRot = { "ActorRot", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, ActorRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_ActorRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_ActorRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "A_PlayerPistol" },
		{ "ModuleRelativePath", "A_PlayerPistol.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AA_PlayerPistol, StartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_StartOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AA_PlayerPistol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_FailureSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_HapticEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_ActorRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AA_PlayerPistol_Statics::NewProp_StartOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_PlayerPistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_PlayerPistol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA_PlayerPistol_Statics::ClassParams = {
		&AA_PlayerPistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AA_PlayerPistol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AA_PlayerPistol_Statics::PropPointers),
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
		{ Z_Construct_UClass_AA_PlayerPistol, AA_PlayerPistol::StaticClass, TEXT("AA_PlayerPistol"), &Z_Registration_Info_UClass_AA_PlayerPistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA_PlayerPistol), 3063300444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_1295029684(TEXT("/Script/JohnWoo"),
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_A_PlayerPistol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
