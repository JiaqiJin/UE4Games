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
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
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
			{ "CloseHeroDebugButton", &UHeroDebugWidget::execCloseHeroDebugButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroDebugWidget_CloseHeroDebugButton, "CloseHeroDebugButton" }, // 2437961950
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HeroDebugWidget.h" },
		{ "ModuleRelativePath", "UI/HeroDebugWidget.h" },
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroDebugWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDebugWidget_Statics::NewProp_CloseButton,
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
	IMPLEMENT_CLASS(UHeroDebugWidget, 36168198);
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
