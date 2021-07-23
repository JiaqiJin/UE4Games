// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "KawaiiPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FIGHTING_API AKawaiiPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AKawaiiPlayerController();

	// Reference to the UMG assert in editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	// Variable hold the widget after creating it
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* HUDOverlay;

protected:
	virtual void BeginPlay() override;
};
