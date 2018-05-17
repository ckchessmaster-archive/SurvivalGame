// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGameGameMode.h"
#include "SurvivalGamePlayerController.h"
#include "SurvivalGamePawn.h"

ASurvivalGameGameMode::ASurvivalGameGameMode()
{
	// no pawn by default
	DefaultPawnClass = ASurvivalGamePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = ASurvivalGamePlayerController::StaticClass();
}
