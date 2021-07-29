// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "HeroCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroCheatManager : public UCheatManager
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Exec)
	void SetPlayerAttributte(FString AttributeName, float NewValue);
};
