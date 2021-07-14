// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRPG/PlayerController/KawaiiPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPlayerController() {}
// Cross Module References
	ACTIONRPG_API UClass* Z_Construct_UClass_AKawaiiPlayerController_NoRegister();
	ACTIONRPG_API UClass* Z_Construct_UClass_AKawaiiPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ActionRPG();
// End Cross Module References
	void AKawaiiPlayerController::StaticRegisterNativesAKawaiiPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AKawaiiPlayerController_NoRegister()
	{
		return AKawaiiPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AKawaiiPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKawaiiPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKawaiiPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController/KawaiiPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/KawaiiPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKawaiiPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKawaiiPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKawaiiPlayerController_Statics::ClassParams = {
		&AKawaiiPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKawaiiPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKawaiiPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKawaiiPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKawaiiPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKawaiiPlayerController, 3636425461);
	template<> ACTIONRPG_API UClass* StaticClass<AKawaiiPlayerController>()
	{
		return AKawaiiPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKawaiiPlayerController(Z_Construct_UClass_AKawaiiPlayerController, &AKawaiiPlayerController::StaticClass, TEXT("/Script/ActionRPG"), TEXT("AKawaiiPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKawaiiPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
