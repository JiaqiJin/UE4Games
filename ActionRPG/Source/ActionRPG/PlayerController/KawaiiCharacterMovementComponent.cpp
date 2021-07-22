// Fill out your copyright notice in the Description page of Project Settings.


#include "KawaiiCharacterMovementComponent.h"
#include "AbilitySystemComponent.h"
#include "ActionRPG/Attributes/PlayerAttributeSet.h"
#include "ActionRPG/PlayerController/KawaiiPlayerCharacter.h"

UKawaiiCharacterMovementComponent::UKawaiiCharacterMovementComponent()
{

}

float UKawaiiCharacterMovementComponent::GetMaxSpeed() const
{
	AKawaiiPlayerCharacter* Owner = Cast<AKawaiiPlayerCharacter>(GetOwner());
	if (!Owner)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() No Owner"), *FString(__FUNCTION__));
		return Super::GetMaxSpeed();
	}

	return Owner->GetMovementSpeed();
}
