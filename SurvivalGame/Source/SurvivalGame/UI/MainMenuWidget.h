// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
	
protected:

	UFUNCTION(BlueprintCallable, Category = "UI")
	void NewGame();

	UFUNCTION(BlueprintCallable, Category = "UI")
	void LoadGame();

	UFUNCTION(BlueprintCallable, Category = "UI")
	void ExitGame();
	
};
