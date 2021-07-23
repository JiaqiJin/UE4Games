// Copyright Epic Games, Inc. All Rights Reserved.

#include "FightingGameMode.h"
#include "FightingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFightingGameMode::AFightingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	struct ConstructorHelpers::FClassFinder<AController> PlayerControllerClassBP(TEXT("/Game/Player/Controller/KawaiiPlayerController_BP"));
	if (PlayerControllerClassBP.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerClassBP.Class;
	}
}
