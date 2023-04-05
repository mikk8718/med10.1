// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyENUMS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JOHNWOO_MyENUMS_generated_h
#error "MyENUMS.generated.h already included, missing '#pragma once' in MyENUMS.h"
#endif
#define JOHNWOO_MyENUMS_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qwe_o_Documents_GitHub_med10_1_JohnWoo_Source_JohnWoo_MyENUMS_h


#define FOREACH_ENUM_EHAND(op) \
	op(EHand::LEFT) \
	op(EHand::RIGHT) 

enum class EHand : uint8;
template<> struct TIsUEnumClass<EHand> { enum { Value = true }; };
template<> JOHNWOO_API UEnum* StaticEnum<EHand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
