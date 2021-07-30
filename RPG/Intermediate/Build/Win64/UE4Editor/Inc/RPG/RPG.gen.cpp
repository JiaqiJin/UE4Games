// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/RPG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG() {}
// Cross Module References
	RPG_API UEnum* Z_Construct_UEnum_RPG_EHeroAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References
	static UEnum* EHeroAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RPG_EHeroAbilityInputID, Z_Construct_UPackage__Script_RPG(), TEXT("EHeroAbilityInputID"));
		}
		return Singleton;
	}
	template<> RPG_API UEnum* StaticEnum<EHeroAbilityInputID::Type>()
	{
		return EHeroAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeroAbilityInputID(EHeroAbilityInputID_StaticEnum, TEXT("/Script/RPG"), TEXT("EHeroAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RPG_EHeroAbilityInputID_Hash() { return 3153443731U; }
	UEnum* Z_Construct_UEnum_RPG_EHeroAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeroAbilityInputID"), 0, Get_Z_Construct_UEnum_RPG_EHeroAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeroAbilityInputID::None", (int64)EHeroAbilityInputID::None },
				{ "EHeroAbilityInputID::Confirm", (int64)EHeroAbilityInputID::Confirm },
				{ "EHeroAbilityInputID::Cancel", (int64)EHeroAbilityInputID::Cancel },
				{ "EHeroAbilityInputID::Ability1", (int64)EHeroAbilityInputID::Ability1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability1.Comment", "// 3 NUM 1\n" },
				{ "Ability1.DisplayName", "Ability1" },
				{ "Ability1.Name", "EHeroAbilityInputID::Ability1" },
				{ "Ability1.ToolTip", "3 NUM 1" },
				{ "BlueprintType", "true" },
				{ "Cancel.Comment", "// 2 Cancel RMB\n" },
				{ "Cancel.DisplayName", "Cancel" },
				{ "Cancel.Name", "EHeroAbilityInputID::Cancel" },
				{ "Cancel.ToolTip", "2 Cancel RMB" },
				{ "Confirm.Comment", "// 1 Confirm LMB\n" },
				{ "Confirm.DisplayName", "Confirm" },
				{ "Confirm.Name", "EHeroAbilityInputID::Confirm" },
				{ "Confirm.ToolTip", "1 Confirm LMB" },
				{ "ModuleRelativePath", "RPG.h" },
				{ "None.Comment", "// 0 None\n" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EHeroAbilityInputID::None" },
				{ "None.ToolTip", "0 None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RPG,
				nullptr,
				"EHeroAbilityInputID",
				"EHeroAbilityInputID::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
