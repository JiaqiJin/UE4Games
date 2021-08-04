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
	uint32 Get_Z_Construct_UEnum_RPG_EHeroAbilityInputID_Hash() { return 3599353193U; }
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
				{ "EHeroAbilityInputID::Ability2", (int64)EHeroAbilityInputID::Ability2 },
				{ "EHeroAbilityInputID::Ability3", (int64)EHeroAbilityInputID::Ability3 },
				{ "EHeroAbilityInputID::Jump", (int64)EHeroAbilityInputID::Jump },
				{ "EHeroAbilityInputID::Sprint", (int64)EHeroAbilityInputID::Sprint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability1.Comment", "// 4 NUM 1\n" },
				{ "Ability1.DisplayName", "Ability1" },
				{ "Ability1.Name", "EHeroAbilityInputID::Ability1" },
				{ "Ability1.ToolTip", "4 NUM 1" },
				{ "Ability2.Comment", "// 5 NUM 3\n" },
				{ "Ability2.DisplayName", "Ability2" },
				{ "Ability2.Name", "EHeroAbilityInputID::Ability2" },
				{ "Ability2.ToolTip", "5 NUM 3" },
				{ "Ability3.Comment", "// 6 NUM 3\n" },
				{ "Ability3.DisplayName", "Ability3" },
				{ "Ability3.Name", "EHeroAbilityInputID::Ability3" },
				{ "Ability3.ToolTip", "6 NUM 3" },
				{ "BlueprintType", "true" },
				{ "Cancel.Comment", "// 2 Cancel RMB\n" },
				{ "Cancel.DisplayName", "Cancel" },
				{ "Cancel.Name", "EHeroAbilityInputID::Cancel" },
				{ "Cancel.ToolTip", "2 Cancel RMB" },
				{ "Confirm.Comment", "// 1 Confirm LMB\n" },
				{ "Confirm.DisplayName", "Confirm" },
				{ "Confirm.Name", "EHeroAbilityInputID::Confirm" },
				{ "Confirm.ToolTip", "1 Confirm LMB" },
				{ "Jump.Comment", "// 7 Jump SpaceBar\n" },
				{ "Jump.DisplayName", "Jump" },
				{ "Jump.Name", "EHeroAbilityInputID::Jump" },
				{ "Jump.ToolTip", "7 Jump SpaceBar" },
				{ "ModuleRelativePath", "RPG.h" },
				{ "None.Comment", "// 0 None\n" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EHeroAbilityInputID::None" },
				{ "None.ToolTip", "0 None" },
				{ "Sprint.Comment", "// 8 Sprint\n" },
				{ "Sprint.DisplayName", "Sprint" },
				{ "Sprint.Name", "EHeroAbilityInputID::Sprint" },
				{ "Sprint.ToolTip", "8 Sprint" },
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
