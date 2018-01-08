// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Blueprint/UserWidget.h"
#include "NPC.h"
#include "MyBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEGAME_API UMyBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintCallable, Category = "My Functions", meta = (WorldContext = "WorldContextObject"))
		static void ExitDialogue(UObject* WorldContextObject);
	
	
};
