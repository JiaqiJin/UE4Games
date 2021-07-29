// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerController.h"
#include "RPG/CheatManager/HeroCheatManager.h"

AHeroPlayerController::AHeroPlayerController(const class FObjectInitializer& InitializerObject) :
	Super(InitializerObject)
{
	CheatClass = UHeroCheatManager::StaticClass();
}