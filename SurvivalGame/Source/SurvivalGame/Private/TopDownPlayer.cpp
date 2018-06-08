// Fill out your copyright notice in the Description page of Project Settings.

#include "public/TopDownPlayer.h"


// Sets default values
ATopDownPlayer::ATopDownPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->ZoomFactor = 10.f;
	this->MovementFactor = 10.f;
	this->RotateFactor = 10.f;
}

// Called to bind functionality to input
void ATopDownPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveUp", this, &ATopDownPlayer::MoveUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATopDownPlayer::MoveRight);
	PlayerInputComponent->BindAxis("Rotate", this, &ATopDownPlayer::Rotate);
	PlayerInputComponent->BindAxis("Zoom", this, &ATopDownPlayer::Zoom);
}

// Called when the game starts or when spawned
void ATopDownPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATopDownPlayer::MoveUp(float AxisValue)
{
	float movementValue = AxisValue * MovementFactor;

}

void ATopDownPlayer::MoveRight(float AxisValue)
{
	float movementValue = AxisValue * MovementFactor;
}

void ATopDownPlayer::Rotate(float AxisValue)
{
	float rotateValue = AxisValue * MovementFactor;
}

void ATopDownPlayer::Zoom(float AxisValue)
{
	float zoomValue = AxisValue * ZoomFactor;

}

// Called every frame
void ATopDownPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



