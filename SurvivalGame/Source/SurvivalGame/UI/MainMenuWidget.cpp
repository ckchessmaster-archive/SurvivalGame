// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenuWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void UMainMenuWidget::NewGame() 
{
	UGameplayStatics::OpenLevel(GetWorld(), "PrototypeWorld", true);
}

void UMainMenuWidget::LoadGame()
{

}

void UMainMenuWidget::ExitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit);
}
