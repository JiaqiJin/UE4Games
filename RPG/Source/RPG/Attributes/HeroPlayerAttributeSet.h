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
 * 
 */
UCLASS()
class RPG_API UHeroPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UHeroPlayerAttributeSet();

	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerMovementSpeed;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerMovementSpeed);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerMovementMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerMovementMultiplier);

};
