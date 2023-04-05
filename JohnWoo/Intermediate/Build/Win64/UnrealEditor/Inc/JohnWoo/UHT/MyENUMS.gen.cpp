// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JohnWoo/MyENUMS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyENUMS() {}
// Cross Module References
	JOHNWOO_API UEnum* Z_Construct_UEnum_JohnWoo_EHand();
	UPackage* Z_Construct_UPackage__Script_JohnWoo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHand;
	static UEnum* EHand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JohnWoo_EHand, Z_Construct_UPackage__Script_JohnWoo(), TEXT("EHand"));
		}
		return Z_Registration_Info_UEnum_EHand.OuterSingleton;
	}
	template<> JOHNWOO_API UEnum* StaticEnum<EHand>()
	{
		return EHand_StaticEnum();
	}
	struct Z_Construct_UEnum_JohnWoo_EHand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JohnWoo_EHand_Statics::Enumerators[] = {
		{ "EHand::LEFT", (int64)EHand::LEFT },
		{ "EHand::RIGHT", (int64)EHand::RIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JohnWoo_EHand_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "LEFT.Comment", "/**\n *\n */" },
		{ "LEFT.Name", "EHand::LEFT" },
		{ "ModuleRelativePath", "MyENUMS.h" },
		{ "RIGHT.Comment", "/**\n *\n */" },
		{ "RIGHT.Name", "EHand::RIGHT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JohnWoo_EHand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JohnWoo,
		nullptr,
		"EHand",
		"EHand",
		Z_Construct_UEnum_JohnWoo_EHand_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JohnWoo_EHand_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JohnWoo_EHand_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JohnWoo_EHand_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JohnWoo_EHand()
	{
		if (!Z_Registration_Info_UEnum_EHand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHand.InnerSingleton, Z_Construct_UEnum_JohnWoo_EHand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHand.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_MyENUMS_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_MyENUMS_h_Statics::EnumInfo[] = {
		{ EHand_StaticEnum, TEXT("EHand"), &Z_Registration_Info_UEnum_EHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2697977092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_MyENUMS_h_2504081660(TEXT("/Script/JohnWoo"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_MyENUMS_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_MyENUMS_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
