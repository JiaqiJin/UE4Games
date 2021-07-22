// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KawaiiCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONRPG_API UKawaiiCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public:
	UKawaiiCharacterMovementComponent();

	virtual float GetMaxSpeed() const override;

};
