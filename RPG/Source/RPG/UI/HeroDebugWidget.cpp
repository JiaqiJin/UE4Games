// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroDebugWidget.h"
#include "Components/Button.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "GameFramework/PlayerController.h"

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