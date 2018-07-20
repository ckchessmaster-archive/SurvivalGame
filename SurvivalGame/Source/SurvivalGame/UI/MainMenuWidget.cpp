// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenuWidget.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::NewGame() 
{

}

void UMainMenuWidget::LoadGame()
{

}

void UMainMenuWidget::ExitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit);
}
