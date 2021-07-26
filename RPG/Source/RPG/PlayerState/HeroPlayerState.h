// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "HeroPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API AHeroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UHeroPlayerAttributeSet* GetAttributeSetBase() const;

protected:
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UHeroPlayerAttributeSet* AttributeSetBase;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
