// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Create the camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true;
	CameraBoom->bDoCollisionTest = false;

	// Create the camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Setup gameplay key bindings
	check(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveUpDown", this, &APlayerCharacter::MoveUpDown);
	PlayerInputComponent->BindAxis("MoveLeftRight", this, &APlayerCharacter::MoveLeftRight);

	// Bind camera movement events
	PlayerInputComponent->BindAxis("ZoomInOut", this, &APlayerCharacter::ZoomInOut);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCharacter::MoveUpDown(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value * MovementMultiplier);
	}
}

void APlayerCharacter::MoveLeftRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), (Value * -1) * MovementMultiplier); // We invert the value because it goes off of right vector not left
	}
}

void APlayerCharacter::ZoomInOut(float Value)
{
	if (Value != 0.0f)
	{
		float newLength = CameraBoom->TargetArmLength - Value;
		if (newLength >= MinBoomLength && newLength  <= MaxBoomLength)
		{
			CameraBoom->TargetArmLength = newLength;
		}
	}
}

