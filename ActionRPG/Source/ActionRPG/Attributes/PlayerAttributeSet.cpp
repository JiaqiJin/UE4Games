// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "ActionRPG/PlayerController/KawaiiPlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UPlayerAttributeSet::UPlayerAttributeSet()
{
}

void UPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetPlayerMovementSpeedAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, 10000);
	}
}

