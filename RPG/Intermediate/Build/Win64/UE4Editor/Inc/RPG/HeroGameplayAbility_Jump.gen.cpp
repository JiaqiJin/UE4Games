// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Abilities/Jump/HeroGameplayAbility_Jump.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility_Jump() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_UHeroGameplayAbility_Jump_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UHeroGameplayAbility_Jump();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	void UHeroGameplayAbility_Jump::StaticRegisterNativesUHeroGameplayAbility_Jump()
	{
	}
	UClass* Z_Construct_UClass_UHeroGameplayAbility_Jump_NoRegister()
	{
		return UHeroGameplayAbility_Jump::StaticClass();
	}
	struct Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility_CharacterJump,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Jump/HeroGameplayAbility_Jump.h" },
		{ "ModuleRelativePath", "Abilities/Jump/HeroGameplayAbility_Jump.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility_Jump>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::ClassParams = {
		&UHeroGameplayAbility_Jump::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroGameplayAbility_Jump()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroGameplayAbility_Jump_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroGameplayAbility_Jump, 1485872109);
	template<> RPG_API UClass* StaticClass<UHeroGameplayAbility_Jump>()
	{
		return UHeroGameplayAbility_Jump::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroGameplayAbility_Jump(Z_Construct_UClass_UHeroGameplayAbility_Jump, &UHeroGameplayAbility_Jump::StaticClass, TEXT("/Script/RPG"), TEXT("UHeroGameplayAbility_Jump"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility_Jump);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
