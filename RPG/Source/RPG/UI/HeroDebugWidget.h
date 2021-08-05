// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroDebugWidget.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroDebugWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* CloseButton;

private:
	UFUNCTION()
	void CloseHeroDebugButton();
};
