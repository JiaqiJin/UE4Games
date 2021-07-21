// Fill out your copyright notice in the Description page of Project Settings.


#include "KawaiiPlayerState.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ActionRPG/Attributes/PlayerAttributeSet.h"
#include "ActionRPG/PlayerController/KawaiiPlayerCharacter.h"

AKawaiiPlayerState::AKawaiiPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AttributeSetBase = CreateDefaultSubobject<UPlayerAttributeSet>(TEXT("AttributeSetBase"));
}

UAbilitySystemComponent* AKawaiiPlayerState::GetAbilitySystemComponent() const
{
	if (AbilitySystemComponent)
	{
		return AbilitySystemComponent;
	}
	return nullptr;
}

UPlayerAttributeSet* AKawaiiPlayerState::GetAttributeSetBase() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase;
	}
	return nullptr;
}

float AKawaiiPlayerState::GetMovementSpeed() const
{
	return AttributeSetBase->GetPlayerMovementSpeed();
}

void AKawaiiPlayerState::BeginPlay()
{
	Super::BeginPlay();

	AKawaiiPlayerCharacter* Player = Cast<AKawaiiPlayerCharacter>(GetPawn());
	if (Player)
	{
		Player->GetCharacterMovement()->MaxWalkSpeed = 5000;
		
	}
}

