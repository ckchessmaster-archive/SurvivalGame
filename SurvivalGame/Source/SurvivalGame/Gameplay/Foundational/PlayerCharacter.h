// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class SURVIVALGAME_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

private:


protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	float MovementMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	float ZoomMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	float RotateMultiplier;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	float MaxBoomLength;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	float MinBoomLength;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End APawn interface

public:	
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;	

	// Handles moving up or down
	void MoveUpDown(float Value);

	// Handles moving left or right
	void MoveLeftRight(float Value);

	// Handles rotating the camera
	void Rotate(float Value);

	// Handles zooming the camera in or out
	void ZoomInOut(float Value);
};
