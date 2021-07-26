// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPG/RPGCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UHeroPlayerAttributeSet::UHeroPlayerAttributeSet()
{

}

void UHeroPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetPlayerMovementSpeedAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0, 10000);
	}
}