// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#define ACTOR_ROLE_FSTRING *(FindObject<UEnum>(ANY_PACKAGE, TEXT("ENetRole"), true)->GetNameStringByValue(GetLocalRole()))
#define GET_ACTOR_ROLE_FSTRING(Actor) *(FindObject<UEnum>(ANY_PACKAGE, TEXT("ENetRole"), true)->GetNameStringByValue(Actor->GetLocalRole()))

UENUM(BlueprintType)
namespace EHeroAbilityInputID
{
	enum Type
	{
		// 0 None
		None			UMETA(DisplayName = "None"),
		// 1 Confirm LMB
		Confirm			UMETA(DisplayName = "Confirm"),
		// 2 Cancel RMB
		Cancel			UMETA(DisplayName = "Cancel"),
		// 3 NUM 1
		Ability1		UMETA(DisplayName = "Ability1"),
		// 4 Jump SpaceBar
		Jump			UMETA(DisplayName = "Jump")
		/*
			// 8 Sprint
			Sprint			UMETA(DisplayName = "Sprint"),
			// 9 Jump
			Jump			UMETA(DisplayName = "Jump")
		*/
	};
}