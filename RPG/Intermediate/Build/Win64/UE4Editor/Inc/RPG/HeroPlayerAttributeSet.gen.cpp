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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Attributes/HeroPlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Attributes/HeroPlayerAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroPlayerAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroPlayerAttributeSet_Statics::ClassParams = {
		&UHeroPlayerAttributeSet::StaticClass,
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
	IMPLEMENT_CLASS(UHeroPlayerAttributeSet, 3720098883);
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
