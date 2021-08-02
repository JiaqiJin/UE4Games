// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HeroPlayerAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Defines the set of all GameplayAttributes for your Games like health, etc.
 * Attributes are float values defined by the struct "FGameplayAttributeData"
 */
UCLASS()
class RPG_API UHeroPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Constructor
	UHeroPlayerAttributeSet();

	// Respond to changes to an Attribute's Current Value before changes happen.
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	// Movement Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerMovementSpeed;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerMovementSpeed);

	// Movement Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerMovementMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerMovementMultiplier);

	// Movement Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerJumpHeightMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerJumpHeightMultiplier);

	// Movement Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerAirControllerMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerAirControllerMultiplier);
};
