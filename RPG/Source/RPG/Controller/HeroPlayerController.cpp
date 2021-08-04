// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"
#include "RPG/CheatManager/HeroCheatManager.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"

AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject) :
	Super(InitializerObject)
{
	CheatClass = UHeroCheatManager::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> MainDebugWidget(TEXT("/Game/Player/UI/HeroDebugUI/BP_HeroDebugUI"));

	if (!ensure(MainDebugWidget.Class != nullptr))
	{
		UE_LOG(LogTemp, Error, TEXT("%s() ShowHeroDebug"), *FString(__FUNCTION__), *GetName());
	}

	HeroDebugMenu = MainDebugWidget.Class;

}


void AHeroPlayerController::ShowHeroDebug()
{
	if (!HeroDebugMenu)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() ShowHeroDebug function"), *FString(__FUNCTION__), *GetName());
	}

	if (HeroDebugMenu)
	{
		HeroDebugMenuWidget = CreateWidget<UUserWidget>(GetGameInstance(), HeroDebugMenu);

		HeroDebugMenuWidget->AddToViewport();

		bShowMouseCursor = true;
	}
}