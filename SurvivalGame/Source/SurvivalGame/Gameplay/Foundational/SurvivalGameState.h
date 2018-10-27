// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SurvivalGameState.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API ASurvivalGameState : public AGameStateBase
{
	GENERATED_BODY()
	
	
public:
	TMap<FVector2D, int> WorldGrid;

	ASurvivalGameState();
	
};
