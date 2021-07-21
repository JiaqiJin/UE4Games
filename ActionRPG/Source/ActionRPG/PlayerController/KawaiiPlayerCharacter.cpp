// Fill out your copyright notice in the Description page of Project Settings.


#include "KawaiiPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/UObjectGlobals.h"
#include "ActionRPG/Attributes/PlayerAttributeSet.h"
#include "ActionRPG/PlayerState/KawaiiPlayerState.h"

// Sets default values
AKawaiiPlayerCharacter::AKawaiiPlayerCharacter(const class FObjectInitializer& InitializerObject) : Super(InitializerObject)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->TargetArmLength = 600.f;
	SpringArm->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false; // Let camera boom to match the controller orientation

	// Turn direction
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 545.f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 650.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Dont rotate when the controller rotate
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	/*AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System"));
	PlayerAttributes = CreateDefaultSubobject<UPlayerAttributeSet>(TEXT("PlayerAttributeComponent"));*/
}

// Called when the game starts or when spawned
void AKawaiiPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called to bind functionality to input
void AKawaiiPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AKawaiiPlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKawaiiPlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("TurnRate", this, &AKawaiiPlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AKawaiiPlayerCharacter::LookUpAtRate);
}

void AKawaiiPlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	UE_LOG(LogTemp, Warning, TEXT("Possessed"));

	AKawaiiPlayerState* PS = GetPlayerState<AKawaiiPlayerState>();
	if (PS)
	{
		AbilitySystemComponent = Cast<UAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		PlayerAttributes = PS->GetAttributeSetBase();

		initializeDefaultAttributes();
	}
	
}

UAbilitySystemComponent* AKawaiiPlayerCharacter::GetAbilitySystemComponent() const
{
	if (AbilitySystemComponent.Get())
		return AbilitySystemComponent.Get();
	return nullptr;
}

void AKawaiiPlayerCharacter::OnPlayerMovementSpeedChanged(float MovementValue)
{
	if (MovementValue < 0)
		return;

	GetCharacterMovement()->MaxWalkSpeed = MovementValue;
}

float AKawaiiPlayerCharacter::GetMovementSpeed() const
{
	if (PlayerAttributes.IsValid())
	{
		PlayerAttributes->GetPlayerMovementSpeed();
	}
	return 0.0f;
}

float AKawaiiPlayerCharacter::GetMovementSpeedBaseValue() const
{
	if (PlayerAttributes.IsValid())
	{
		PlayerAttributes->GetPlayerMovementMultiplierAttribute().GetGameplayAttributeData(PlayerAttributes.Get());
	}
	return 0.0f;
}

void AKawaiiPlayerCharacter::initializeDefaultAttributes()
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (!DefaultAttributesEffect)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing Default Attributes for %s."), TEXT(__FUNCTION__), *GetName());
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributesEffect, 0, EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle =
			AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
	}
}

// Movements
void AKawaiiPlayerCharacter::MoveForward(float value)
{
	if (Controller != nullptr && value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, value);
	}
}

void AKawaiiPlayerCharacter::MoveRight(float value)
{
	if (Controller != nullptr && value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, value);
	}
}

void AKawaiiPlayerCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AKawaiiPlayerCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}
