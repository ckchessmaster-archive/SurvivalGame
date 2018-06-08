// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UsesGrid.generated.h"

/**
 * 
 */
UINTERFACE(BlueprintType)
class SURVIVALGAME_API UUsesGrid : public UInterface
{
	GENERATED_BODY()
};

class SURVIVALGAME_API IUsesGrid
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Grid")
	bool AlignToGrid();
};
