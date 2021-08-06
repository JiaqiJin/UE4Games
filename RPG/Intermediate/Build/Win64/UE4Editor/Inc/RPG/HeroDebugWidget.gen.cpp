// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/UI/HeroDebugWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroDebugWidget() {}
// Cross Module References
	RPG_API UClass* Z_Construct_UClass_UHeroDebugWidget_NoRegister();
	RPG_API UClass* Z_Construct_UClass_UHeroDebugWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RPG();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	RPG_API UEnum* Z_Construct_UEnum_RPG_EHeroAbilityInputID();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeroDebugWidget::execRemapAbility)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemapAbility(EHeroAbilityInputID::Type(Z_Param_Command),Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroDebugWidget::execAbility3Changed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ability3Changed(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroDebugWidget::execAbility2Changed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ability2Changed(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroDebugWidget::execAbility1Changed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Ability1Changed(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroDebugWidget::execCloseHeroDebugButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseHeroDebugButton();
		P_NATIVE_END;
	}
	void UHeroDebugWidget::StaticRegisterNativesUHeroDebugWidget()
	{
		UClass* Class = UHeroDebugWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Ability1Changed", &UHeroDebugWidget::execAbility1Changed },
			{ "Ability2Changed", &UHeroDebugWidget::execAbility2Changed },
			{ "Ability3Changed", &UHeroDebugWidget::execAbility3Changed },
			{ "CloseHeroDebugButton", &UHeroDebugWidget::execCloseHeroDebugButton },
			{ "RemapAbility", &UHeroDebugWidget::execRemapAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics
	{
		struct HeroDebugWidget_eventAbility1Changed_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventAbility1Changed_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventAbility1Changed_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroDebugWidget, nullptr, "Ability1Changed", nullptr, nullptr, sizeof(HeroDebugWidget_eventAbility1Changed_Parms), Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics
	{
		struct HeroDebugWidget_eventAbility2Changed_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventAbility2Changed_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventAbility2Changed_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroDebugWidget, nullptr, "Ability2Changed", nullptr, nullptr, sizeof(HeroDebugWidget_eventAbility2Changed_Parms), Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics
	{
		struct HeroDebugWidget_eventAbility3Changed_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventAbility3Changed_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventAbility3Changed_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroDebugWidget, nullptr, "Ability3Changed", nullptr, nullptr, sizeof(HeroDebugWidget_eventAbility3Changed_Parms), Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroDebugWidget, nullptr, "CloseHeroDebugButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics
	{
		struct HeroDebugWidget_eventRemapAbility_Parms
		{
			TEnumAsByte<EHeroAbilityInputID::Type> Command;
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventRemapAbility_Parms, Command), Z_Construct_UEnum_RPG_EHeroAbilityInputID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventRemapAbility_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDebugWidget_eventRemapAbility_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::NewProp_SelectedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::NewProp_SelectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroDebugWidget, nullptr, "RemapAbility", nullptr, nullptr, sizeof(HeroDebugWidget_eventRemapAbility_Parms), Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroDebugWidget_RemapAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroDebugWidget_RemapAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroDebugWidget_NoRegister()
	{
		return UHeroDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHeroDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability1Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability1Selector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability2Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability2Selector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability3Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability3Selector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroDebugWidget_Ability1Changed, "Ability1Changed" }, // 1809498596
		{ &Z_Construct_UFunction_UHeroDebugWidget_Ability2Changed, "Ability2Changed" }, // 2303563537
		{ &Z_Construct_UFunction_UHeroDebugWidget_Ability3Changed, "Ability3Changed" }, // 1992200774
		{ &Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton, "CloseHeroDebugButton" }, // 2437961950
		{ &Z_Construct_UFunction_UHeroDebugWidget_RemapAbility, "RemapAbility" }, // 1442834531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HeroDebugWidget.h" },
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDebugWidget, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_CloseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability1Selector_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability1Selector = { "Ability1Selector", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDebugWidget, Ability1Selector), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability1Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability1Selector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability2Selector_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability2Selector = { "Ability2Selector", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDebugWidget, Ability2Selector), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability2Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability2Selector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability3Selector_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability3Selector = { "Ability3Selector", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDebugWidget, Ability3Selector), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability3Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability3Selector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroDebugWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_CloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability1Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability2Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_Ability3Selector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroDebugWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroDebugWidget_Statics::ClassParams = {
		&UHeroDebugWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeroDebugWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDebugWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroDebugWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroDebugWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroDebugWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroDebugWidget, 408803291);
	template<> RPG_API UClass* StaticClass<UHeroDebugWidget>()
	{
		return UHeroDebugWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroDebugWidget(Z_Construct_UClass_UHeroDebugWidget, &UHeroDebugWidget::StaticClass, TEXT("/Script/RPG"), TEXT("UHeroDebugWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroDebugWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
