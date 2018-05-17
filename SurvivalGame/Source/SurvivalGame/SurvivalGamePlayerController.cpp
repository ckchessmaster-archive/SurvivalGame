// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGamePlayerController.h"

ASurvivalGamePlayerController::ASurvivalGamePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
