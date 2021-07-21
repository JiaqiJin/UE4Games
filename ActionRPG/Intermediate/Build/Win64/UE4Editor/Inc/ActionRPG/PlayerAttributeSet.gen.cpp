// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/Attributes/PlayerAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributeSet() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_UPlayerAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UPlayerAttributeSet::StaticRegisterNativesUPlayerAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister()
	{
		return UPlayerAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAttributeSet_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Attributes/PlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Attributes/PlayerAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed_MetaData[] = {
		{ "Category", "Attributes|Player" },
		{ "ModuleRelativePath", "Attributes/PlayerAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed = { "PlayerMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAttributeSet, PlayerMovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier_MetaData[] = {
		{ "Category", "Attributes|Player" },
		{ "ModuleRelativePath", "Attributes/PlayerAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier = { "PlayerMovementMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerAttributeSet, PlayerMovementMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttributeSet_Statics::NewProp_PlayerMovementMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributeSet_Statics::ClassParams = {
		&UPlayerAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAttributeSet, 1068571474);
	template<> ACTIONRPG_API UClass* StaticClass<UPlayerAttributeSet>()
	{
		return UPlayerAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAttributeSet(Z_Construct_UClass_UPlayerAttributeSet, &UPlayerAttributeSet::StaticClass, TEXT("/Script/ActionRPG"), TEXT("UPlayerAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
