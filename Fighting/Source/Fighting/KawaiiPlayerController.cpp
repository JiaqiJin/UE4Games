// Fill out your copyright notice in the Description page of Project Settings.


#include "KawaiiPlayerController.h"
#include "Blueprint/UserWidget.h"

AKawaiiPlayerController::AKawaiiPlayerController()
{

}

void AKawaiiPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (HUDOverlayAsset)
	{
		HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);
	}

	HUDOverlay->AddToViewport();
	HUDOverlay->SetVisibility(ESlateVisibility::Visible);
}
