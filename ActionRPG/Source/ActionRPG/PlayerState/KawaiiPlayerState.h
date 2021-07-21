// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "KawaiiPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONRPG_API AKawaiiPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AKawaiiPlayerState();

	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	class UPlayerAttributeSet* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable)
	float GetMovementSpeed() const;
protected:

	UPROPERTY()
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UPlayerAttributeSet* AttributeSetBase;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
