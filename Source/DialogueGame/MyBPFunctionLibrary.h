// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEGAME_API UMyBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintCallable, Category = "My Functions")
		static void ExitDialogue();
	
	
};
