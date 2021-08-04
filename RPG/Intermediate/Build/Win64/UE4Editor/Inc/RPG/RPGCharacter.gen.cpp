// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/RPGCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCharacter() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_ARPGCharacter_NoRegister();
	RPG_API UClass* Z_Construct_UClass_ARPGCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_RPG();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UHeroAbilityDataAsset_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARPGCharacter::execGetAirControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAirControl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacter::execGetJumpHeightMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpHeightMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacter::execGetJumpHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacter::execGetMovementSpeedMultiplierBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplierBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacter::execGetMovementSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacter::execGetMovementSpeedBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacter::execGetMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
		P_NATIVE_END;
	}
	void ARPGCharacter::StaticRegisterNativesARPGCharacter()
	{
		UClass* Class = ARPGCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAirControl", &ARPGCharacter::execGetAirControl },
			{ "GetJumpHeight", &ARPGCharacter::execGetJumpHeight },
			{ "GetJumpHeightMultiplier", &ARPGCharacter::execGetJumpHeightMultiplier },
			{ "GetMovementSpeed", &ARPGCharacter::execGetMovementSpeed },
			{ "GetMovementSpeedBaseValue", &ARPGCharacter::execGetMovementSpeedBaseValue },
			{ "GetMovementSpeedMultiplier", &ARPGCharacter::execGetMovementSpeedMultiplier },
			{ "GetMovementSpeedMultiplierBase", &ARPGCharacter::execGetMovementSpeedMultiplierBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics
	{
		struct RPGCharacter_eventGetAirControl_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetAirControl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetAirControl", nullptr, nullptr, sizeof(RPGCharacter_eventGetAirControl_Parms), Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetAirControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetAirControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics
	{
		struct RPGCharacter_eventGetJumpHeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetJumpHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetJumpHeight", nullptr, nullptr, sizeof(RPGCharacter_eventGetJumpHeight_Parms), Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetJumpHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetJumpHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics
	{
		struct RPGCharacter_eventGetJumpHeightMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetJumpHeightMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetJumpHeightMultiplier", nullptr, nullptr, sizeof(RPGCharacter_eventGetJumpHeightMultiplier_Parms), Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics
	{
		struct RPGCharacter_eventGetMovementSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(RPGCharacter_eventGetMovementSpeed_Parms), Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics
	{
		struct RPGCharacter_eventGetMovementSpeedBaseValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetMovementSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMovementSpeedBaseValue", nullptr, nullptr, sizeof(RPGCharacter_eventGetMovementSpeedBaseValue_Parms), Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics
	{
		struct RPGCharacter_eventGetMovementSpeedMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetMovementSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMovementSpeedMultiplier", nullptr, nullptr, sizeof(RPGCharacter_eventGetMovementSpeedMultiplier_Parms), Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics
	{
		struct RPGCharacter_eventGetMovementSpeedMultiplierBase_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacter_eventGetMovementSpeedMultiplierBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMovementSpeedMultiplierBase", nullptr, nullptr, sizeof(RPGCharacter_eventGetMovementSpeedMultiplierBase_Parms), Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGCharacter_NoRegister()
	{
		return ARPGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARPGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAbilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGCharacter_GetAirControl, "GetAirControl" }, // 4006619019
		{ &Z_Construct_UFunction_ARPGCharacter_GetJumpHeight, "GetJumpHeight" }, // 4013294773
		{ &Z_Construct_UFunction_ARPGCharacter_GetJumpHeightMultiplier, "GetJumpHeightMultiplier" }, // 4227348334
		{ &Z_Construct_UFunction_ARPGCharacter_GetMovementSpeed, "GetMovementSpeed" }, // 915663213
		{ &Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedBaseValue, "GetMovementSpeedBaseValue" }, // 1941675439
		{ &Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplier, "GetMovementSpeedMultiplier" }, // 3736167013
		{ &Z_Construct_UFunction_ARPGCharacter_GetMovementSpeedMultiplierBase, "GetMovementSpeedMultiplierBase" }, // 4174208618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// https://github.com/tranek/GASDocumentation\n// https://www.youtube.com/watch?v=Yub52f4ZUU0\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPGCharacter.h" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "https:github.com/tranek/GASDocumentation\nhttps:www.youtube.com/watch?v=Yub52f4ZUU0" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Player|Attributes" },
		{ "ModuleRelativePath", "RPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacter, DefaultAbilities), Z_Construct_UClass_UHeroAbilityDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAbilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAbilities,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGCharacter_Statics::ClassParams = {
		&ARPGCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGCharacter, 2118560373);
	template<> RPG_API UClass* StaticClass<ARPGCharacter>()
	{
		return ARPGCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGCharacter(Z_Construct_UClass_ARPGCharacter, &ARPGCharacter::StaticClass, TEXT("/Script/RPG"), TEXT("ARPGCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
