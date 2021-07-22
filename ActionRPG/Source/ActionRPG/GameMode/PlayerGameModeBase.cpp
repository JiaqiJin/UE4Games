// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "ActionRPG/HUD/PlayerHUD.h"

APlayerGameModeBase::APlayerGameModeBase()
{
	struct ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Character/KawaiiPlayerCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
	struct ConstructorHelpers::FClassFinder<AController> PlayerControllerClassBP(TEXT("/Game/Player/PlayerController/KawaiiPlayerController_BP"));
	if (PlayerControllerClassBP.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerClassBP.Class;
	}

	struct ConstructorHelpers::FClassFinder<AHUD> PlayerHUDClassBP(TEXT("/Game/Player/HUD/PlayerHUD_BP"));
	if (PlayerHUDClassBP.Class != NULL)
	{
		HUDClass = PlayerHUDClassBP.Class;
	}
}

