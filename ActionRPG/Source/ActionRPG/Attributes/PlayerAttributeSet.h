// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerAttributeSet.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnplayerMovementSpeedChangedDelegate, float, PlayerMovementSpeed);

UCLASS()
class ACTIONRPG_API UPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPlayerAttributeSet();

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes/Player")
		FGameplayAttributeData PlayerMovementSpeed;

	FOnplayerMovementSpeedChangedDelegate OnPlayerMovementSpeedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes/Player")
		FGameplayAttributeData PlayerMovementMultiplier;
};
