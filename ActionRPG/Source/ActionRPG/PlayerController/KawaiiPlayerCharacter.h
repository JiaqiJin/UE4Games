// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "UObject/WeakObjectPtrTemplates.h"

#include "KawaiiPlayerCharacter.generated.h"
// https://www.tomlooman.com/stanford-cs193u/
// https://github.com/tranek/GASDocumentation

UCLASS()
class ACTIONRPG_API AKawaiiPlayerCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKawaiiPlayerCharacter(const class FObjectInitializer& InitializerObject);
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

public:
	// Camera boom positioning the camera behind the player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"));
	class USpringArmComponent* SpringArm;

	// Follow camera
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"));
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera);
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera);
	float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CharacterBase");
	class UPlayerAttributeSet* PlayerAttributeComponent;

public:
	
	// Movements 
	void MoveForward(float value);
	void MoveRight(float value);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	// Getters
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return SpringArm; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedBaseValue() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class UPlayerAttributeSet> PlayerAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Attributes")
	TSubclassOf<class UGameplayEffect> DefaultAttributesEffect;

	void initializeDefaultAttributes();
};