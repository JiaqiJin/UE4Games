// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerAttributeSet.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnplayerMovementSpeedChangedDelegate, float, PlayerMovementSpeed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnplayerMovementSpeedMultiplierChangedDelegate, float, PlayerMovementSpeedMultiplier);

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


UCLASS()
class ACTIONRPG_API UPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UPlayerAttributeSet();

	//void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes/Player")
	FGameplayAttributeData PlayerMovementSpeed;
	//ATTRIBUTE_ACCESSORS(UPlayerAttributeSet, PlayerMovementSpeed);
	// Delegate
	FOnplayerMovementSpeedChangedDelegate OnPlayerMovementSpeedChanged;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Attributes/Player")
	FGameplayAttributeData PlayerMovementMultiplier;
	// Delegate
	FOnplayerMovementSpeedMultiplierChangedDelegate OnplayerMovementSpeedMultiplierChanged;
};
