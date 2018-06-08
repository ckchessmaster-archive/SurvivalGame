// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TopDownPlayer.generated.h"

UCLASS()
class SURVIVALGAME_API ATopDownPlayer : public ACharacter
{
	GENERATED_BODY()

	

protected:


	UPROPERTY(EditAnywhere, Category = Camera)
	float ZoomFactor;

	UPROPERTY(EditAnywhere, Category = Camera)
	float MaxZoomLevel;

	UPROPERTY(EditAnywhere, Category = Camera)
	float MinZoomLevel;

	UPROPERTY(EditAnywhere, Category = Camera)
	float MovementFactor;

	UPROPERTY(EditAnywhere, Category = Camera)
	float RotateFactor;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void MoveUp(float AxisValue);
	virtual void MoveRight(float AxisValue);
	virtual void Rotate(float AxisValue);
	virtual void Zoom(float AxisValue);

public:	
	// Sets default values for this character's properties
	ATopDownPlayer();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
