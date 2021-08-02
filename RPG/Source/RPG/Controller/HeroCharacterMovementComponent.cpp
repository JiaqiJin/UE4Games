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

float UHeroCharacterMovementComponent::GetMaxJumpHeight() const
{
	ARPGCharacter* Owner = Cast<ARPGCharacter>(GetOwner());
	if (!Owner)
	{
		float JumpHeightMultiplier = Owner->GetJumpHeightMultiplier();

		const float Gravity = GetGravityZ();
		if (FMath::Abs(Gravity) > KINDA_SMALL_NUMBER)
		{
			return FMath::Square(JumpZVelocity * JumpHeightMultiplier) / (-2.f * Gravity);
		}
		else
		{
			return 0.f;
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxJumpHeight();
	}
}

float UHeroCharacterMovementComponent::GetMaxJumpHeightWithJumpTime() const
{
	const float MaxJumpHeight = GetMaxJumpHeight();

	if (CharacterOwner)
	{
		// When bApplyGravityWhileJumping is true, the actual max height will be lower than this.
		// However, it will also be dependent on framerate (and substep iterations) so just return this
		// to avoid expensive calculations.

		// This can be imagined as the character being displaced to some height, then jumping from that height.
		return (CharacterOwner->JumpMaxHoldTime * JumpZVelocity) + MaxJumpHeight;
	}

	return MaxJumpHeight;
}
