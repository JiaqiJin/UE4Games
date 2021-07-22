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
class ACTIONRPG_API AHeroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UPlayerAttributeSet* GetAttributeSetBase() const;

protected:
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UPlayerAttributeSet* AttributeSetBase;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
