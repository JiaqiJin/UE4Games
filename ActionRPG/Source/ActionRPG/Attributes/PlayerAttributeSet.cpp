// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "ActionRPG/PlayerController/KawaiiPlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UPlayerAttributeSet::UPlayerAttributeSet()
{
	PlayerMovementSpeed = 500.0f;
	PlayerMovementMultiplier = 1.0f;
}

void UPlayerAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<UProperty>(AKawaiiPlayerCharacter::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UPlayerAttributeSet, PlayerMovementSpeed)))
	{
		AKawaiiPlayerCharacter* Player = Cast<AKawaiiPlayerCharacter>(GetOwningActor());
		if (Player)
		{
			PlayerMovementSpeed.SetCurrentValue(Player->GetCharacterMovement()->MaxWalkSpeed);
			PlayerMovementSpeed.SetBaseValue(Player->GetCharacterMovement()->MaxWalkSpeed);
			OnPlayerMovementSpeedChanged.Broadcast(PlayerMovementSpeed.GetCurrentValue());
		}
	}
}

