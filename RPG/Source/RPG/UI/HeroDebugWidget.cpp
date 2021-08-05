// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroDebugWidget.h"
#include "Components/Button.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "GameFramework/PlayerController.h"
#include "RPG/RPGCharacter.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "RPG/Data/HeroAbilityDataAsset.h"
#include "Components/ComboBoxString.h"

UHeroDebugWidget::UHeroDebugWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UHeroDebugWidget::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success)
	{
		return false;
	}

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UHeroDebugWidget::CloseHeroDebugButton);
	}

	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwningPlayerPawn());

	if (HeroCharacter)
	{
		UHeroAbilityDataAsset* AbilityData = HeroCharacter->GetDefaultAbilityDataAssert();
		if (AbilityData)
		{
			for (FHeroGameplayAbilityBindInfo AbilityInfo : AbilityData->Abilities)
			{
				SprintKeyMapSelector->AddOption(AbilityInfo.AbilityName.ToString());
				//UE_LOG(LogTemp, Warning, TEXT("Success"));
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("Success"));
	}

	return true;
}

void UHeroDebugWidget::CloseHeroDebugButton()
{
	AHeroPlayerController* HeroPC = Cast<AHeroPlayerController>(GetOwningPlayer());

	if (HeroPC)
	{
		RemoveFromParent();
		FInputModeUIOnly InputModeData;
		HeroPC->SetInputMode(InputModeData);
		HeroPC->bShowMouseCursor = false;
	}
}