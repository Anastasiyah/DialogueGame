// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBPFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

void UMyBPFunctionLibrary::ExitDialogue(UObject* WorldContextObject)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
	APlayerController* CurrentPlayerController = UGameplayStatics::GetPlayerController(World, 0);
	ACharacter* CurrentPlayerCharacter = UGameplayStatics::GetPlayerCharacter(World, 0);

	FInputModeGameOnly InputModeData;
	CurrentPlayerController->SetInputMode(InputModeData);

	CurrentPlayerController->bShowMouseCursor = false;

	CurrentPlayerController->EnableInput(CurrentPlayerController);
	CurrentPlayerCharacter->EnableInput(CurrentPlayerController);
}


