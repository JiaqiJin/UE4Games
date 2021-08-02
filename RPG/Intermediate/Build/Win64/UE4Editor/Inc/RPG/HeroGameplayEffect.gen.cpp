// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/GameplayEffect/HeroGameplayEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayEffect() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_UHeroGameplayEffect_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UHeroGameplayEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void UHeroGameplayEffect::StaticRegisterNativesUHeroGameplayEffect()
	{
	}
	UClass* Z_Construct_UClass_UHeroGameplayEffect_NoRegister()
	{
		return UHeroGameplayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UHeroGameplayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroGameplayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGameplayEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Hero Gameplay Effect extends from UGameplayEffect and should be used fpr all Gameplay Effect in Hero\n */" },
		{ "IncludePath", "GameplayEffect/HeroGameplayEffect.h" },
		{ "ModuleRelativePath", "GameplayEffect/HeroGameplayEffect.h" },
		{ "ToolTip", "The Hero Gameplay Effect extends from UGameplayEffect and should be used fpr all Gameplay Effect in Hero" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroGameplayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayEffect_Statics::ClassParams = {
		&UHeroGameplayEffect::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroGameplayEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroGameplayEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroGameplayEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroGameplayEffect, 4146147584);
	template<> RPG_API UClass* StaticClass<UHeroGameplayEffect>()
	{
		return UHeroGameplayEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroGameplayEffect(Z_Construct_UClass_UHeroGameplayEffect, &UHeroGameplayEffect::StaticClass, TEXT("/Script/RPG"), TEXT("UHeroGameplayEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
