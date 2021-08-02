// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroPlayerAttributeSet() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_UHeroPlayerAttributeSet_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UHeroPlayerAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_RPG();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UHeroPlayerAttributeSet::StaticRegisterNativesUHeroPlayerAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UHeroPlayerAttributeSet_NoRegister()
	{
		return UHeroPlayerAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UHeroPlayerAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMovementMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerMovementMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerJumpHeightMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerJumpHeightMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAirControllerMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerAirControllerMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the set of all GameplayAttributes for your Games like health, etc.\n * Attributes are float values defined by the struct \"FGameplayAttributeData\"\n */" },
		{ "IncludePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ToolTip", "Defines the set of all GameplayAttributes for your Games like health, etc.\nAttributes are float values defined by the struct \"FGameplayAttributeData\"" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed_MetaData[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "Comment", "// Movement Attribute\n" },
		{ "ModuleRelativePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ToolTip", "Movement Attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed = { "PlayerMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayerAttributeSet, PlayerMovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier_MetaData[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "Comment", "// Movement Multiplier Attribute\n" },
		{ "ModuleRelativePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ToolTip", "Movement Multiplier Attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier = { "PlayerMovementMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayerAttributeSet, PlayerMovementMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerJumpHeightMultiplier_MetaData[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "Comment", "// Movement Attribute\n" },
		{ "ModuleRelativePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ToolTip", "Movement Attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerJumpHeightMultiplier = { "PlayerJumpHeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayerAttributeSet, PlayerJumpHeightMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerJumpHeightMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerJumpHeightMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerAirControllerMultiplier_MetaData[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "Comment", "// Movement Multiplier Attribute\n" },
		{ "ModuleRelativePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ToolTip", "Movement Multiplier Attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerAirControllerMultiplier = { "PlayerAirControllerMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayerAttributeSet, PlayerAirControllerMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerAirControllerMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerAirControllerMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerJumpHeightMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::NewProp_PlayerAirControllerMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroPlayerAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::ClassParams = {
		&UHeroPlayerAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroPlayerAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroPlayerAttributeSet, 3696666619);
	template<> RPG_API UClass* StaticClass<UHeroPlayerAttributeSet>()
	{
		return UHeroPlayerAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroPlayerAttributeSet(Z_Construct_UClass_UHeroPlayerAttributeSet, &UHeroPlayerAttributeSet::StaticClass, TEXT("/Script/RPG"), TEXT("UHeroPlayerAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroPlayerAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
