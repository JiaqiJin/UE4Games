// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "RPG/RPGCharacter.h"

UHeroCharacterMovementComponent::UHeroCharacterMovementComponent()
{

}

float UHeroCharacterMovementComponent::GetMaxSpeed() const
{
	ARPGCharacter* Owner = Cast<ARPGCharacter>(GetOwner());
	if (!Owner)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	float MovementSpeedMultiplier = Owner->GetMovementSpeedMultiplier();
	return Owner->GetMovementSpeed() * MovementSpeedMultiplier;
}
