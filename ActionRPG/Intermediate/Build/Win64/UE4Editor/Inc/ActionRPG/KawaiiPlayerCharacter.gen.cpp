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
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AKawaiiPlayerCharacter::execGetMovementSpeedBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKawaiiPlayerCharacter::execGetMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
		P_NATIVE_END;
	}
	void AKawaiiPlayerCharacter::StaticRegisterNativesAKawaiiPlayerCharacter()
	{
		UClass* Class = AKawaiiPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovementSpeed", &AKawaiiPlayerCharacter::execGetMovementSpeed },
			{ "GetMovementSpeedBaseValue", &AKawaiiPlayerCharacter::execGetMovementSpeedBaseValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics
	{
		struct KawaiiPlayerCharacter_eventGetMovementSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KawaiiPlayerCharacter_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKawaiiPlayerCharacter, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(KawaiiPlayerCharacter_eventGetMovementSpeed_Parms), Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics
	{
		struct KawaiiPlayerCharacter_eventGetMovementSpeedBaseValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KawaiiPlayerCharacter_eventGetMovementSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKawaiiPlayerCharacter, nullptr, "GetMovementSpeedBaseValue", nullptr, nullptr, sizeof(KawaiiPlayerCharacter_eventGetMovementSpeedBaseValue_Parms), Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKawaiiPlayerCharacter_NoRegister()
	{
		return AKawaiiPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKawaiiPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAttributeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAttributeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributesEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAttributesEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeed, "GetMovementSpeed" }, // 1441884615
		{ &Z_Construct_UFunction_AKawaiiPlayerCharacter_GetMovementSpeedBaseValue, "GetMovementSpeedBaseValue" }, // 591406834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// https://www.tomlooman.com/stanford-cs193u/\n// https://github.com/tranek/GASDocumentation\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerController/KawaiiPlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "https:www.tomlooman.com/stanford-cs193u/\nhttps:github.com/tranek/GASDocumentation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Camera boom positioning the camera behind the player\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKawaiiPlayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Follow camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKawaiiPlayerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKawaiiPlayerCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKawaiiPlayerCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_PlayerAttributeComponent_MetaData[] = {
		{ "Category", "CharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_PlayerAttributeComponent = { "PlayerAttributeComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKawaiiPlayerCharacter, PlayerAttributeComponent), Z_Construct_UClass_UPlayerAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_PlayerAttributeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_PlayerAttributeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_DefaultAttributesEffect_MetaData[] = {
		{ "Category", "Player|Attributes" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_DefaultAttributesEffect = { "DefaultAttributesEffect", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKawaiiPlayerCharacter, DefaultAttributesEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_DefaultAttributesEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_DefaultAttributesEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_PlayerAttributeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::NewProp_DefaultAttributesEffect,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AKawaiiPlayerCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKawaiiPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::ClassParams = {
		&AKawaiiPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AKawaiiPlayerCharacter, 3800035270);
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
