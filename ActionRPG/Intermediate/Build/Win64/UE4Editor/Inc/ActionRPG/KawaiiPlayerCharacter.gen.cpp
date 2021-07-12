// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/PlayerController/KawaiiPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPlayerCharacter() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_AKawaiiPlayerCharacter_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_AKawaiiPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void AKawaiiPlayerCharacter::StaticRegisterNativesAKawaiiPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AKawaiiPlayerCharacter_NoRegister()
	{
		return AKawaiiPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKawaiiPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerController/KawaiiPlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKawaiiPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::ClassParams = {
		&AKawaiiPlayerCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKawaiiPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKawaiiPlayerCharacter, 236850202);
	template<> ACTIONRPG_API UClass* StaticClass<AKawaiiPlayerCharacter>()
	{
		return AKawaiiPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKawaiiPlayerCharacter(Z_Construct_UClass_AKawaiiPlayerCharacter, &AKawaiiPlayerCharacter::StaticClass, TEXT("/Script/ActionRPG"), TEXT("AKawaiiPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKawaiiPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
