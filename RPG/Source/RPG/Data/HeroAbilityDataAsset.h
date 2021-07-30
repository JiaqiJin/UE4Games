// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RPG/RPG.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/GameplayAbility.h"
#include "HeroAbilityDataAsset.generated.h"

class UAbilitySystemComponent;

USTRUCT()
struct FHeroGameplayAbilityBindInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EHeroAbilityInputID::Type> Command;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UGameplayAbility> HeroAbilities;
};

/*
* Base class for a simple asset containing data.
*/
UCLASS()
class RPG_API UHeroAbilityDataAsset : public UDataAsset
{
	GENERATED_UCLASS_BODY()
	
public:
	//UHeroAbilityDataAsset(const class FObjectInitializer& InitializerObject);

	UPROPERTY(EditAnywhere)
	TArray<FHeroGameplayAbilityBindInfo> Abilities;

	void GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const;
};
