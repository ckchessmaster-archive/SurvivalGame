// Fill out your copyright notice in the Description page of Project Settings.

#include "MainPlayerController.h"
#include "Engine.h"
#include "PlayerCharacter.h"

AMainPlayerController::AMainPlayerController()
{
	bShowMouseCursor = true;
}

void AMainPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Handle camera movement
	APlayerCharacter* player = (APlayerCharacter*)GetPawn();
	if (player)
	{
		int viewportX = 0;
		int viewportY = 0;

		GetViewportSize(viewportX, viewportY);

		float mouseX = -1.f;
		float mouseY = -1.f;

		GetMousePosition(mouseX, mouseY);

		// Move camera up
		if (mouseY >= 0 && mouseY <= edgeDistanceY)
		{
			player->MoveUpDown(1.0f);
		}

		// Move camera down
		if (mouseY >= viewportY - edgeDistanceY)
		{
			player->MoveUpDown(-1.0f);
		}

		// Move camera left
		if (mouseX >= 0 && mouseX <= edgeDistanceX)
		{
			player->MoveLeftRight(1.0f);
		}

		// Move camera right
		if (mouseX >= viewportX - edgeDistanceX)
		{
			player->MoveLeftRight(-1.0f);
		}
	}
}
