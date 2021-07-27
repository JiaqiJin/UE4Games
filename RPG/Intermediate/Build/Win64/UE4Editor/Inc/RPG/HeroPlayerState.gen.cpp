// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroPlayerState() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_AHeroPlayerState_NoRegister();
	RPG_API UClass* Z_Construct_UClass_AHeroPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_RPG();
	RPG_API UClass* Z_Construct_UClass_UHeroPlayerAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHeroPlayerState::execGetMovementSPeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSPeedMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerState::execGetMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
		P_NATIVE_END;
	}
	void AHeroPlayerState::StaticRegisterNativesAHeroPlayerState()
	{
		UClass* Class = AHeroPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovementSpeed", &AHeroPlayerState::execGetMovementSpeed },
			{ "GetMovementSPeedMultiplier", &AHeroPlayerState::execGetMovementSPeedMultiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics
	{
		struct HeroPlayerState_eventGetMovementSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerState_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "PlayerState/HeroPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerState, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(HeroPlayerState_eventGetMovementSpeed_Parms), Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics
	{
		struct HeroPlayerState_eventGetMovementSPeedMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerState_eventGetMovementSPeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "PlayerState/HeroPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerState, nullptr, "GetMovementSPeedMultiplier", nullptr, nullptr, sizeof(HeroPlayerState_eventGetMovementSPeedMultiplier_Parms), Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeroPlayerState_NoRegister()
	{
		return AHeroPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AHeroPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeroPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroPlayerState_GetMovementSpeed, "GetMovementSpeed" }, // 711901668
		{ &Z_Construct_UFunction_AHeroPlayerState_GetMovementSPeedMultiplier, "GetMovementSPeedMultiplier" }, // 3805678060
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerState/HeroPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/HeroPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroPlayerState_Statics::NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerState/HeroPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroPlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroPlayerState, AttributeSetBase), Z_Construct_UClass_UHeroPlayerAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroPlayerState_Statics::NewProp_AttributeSetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerState_Statics::NewProp_AttributeSetBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroPlayerState_Statics::NewProp_AttributeSetBase,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHeroPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AHeroPlayerState, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeroPlayerState_Statics::ClassParams = {
		&AHeroPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeroPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeroPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroPlayerState, 4059693339);
	template<> RPG_API UClass* StaticClass<AHeroPlayerState>()
	{
		return AHeroPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroPlayerState(Z_Construct_UClass_AHeroPlayerState, &AHeroPlayerState::StaticClass, TEXT("/Script/RPG"), TEXT("AHeroPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
