// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimationAsset.h"
#include "Components/TextRenderComponent.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Blueprint/UserWidget.h"
#include "NPC.generated.h"

UCLASS()
class DIALOGUEGAME_API ANPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Called to display dialogue widget
	UFUNCTION()
		void DisplayDialogueWidget();

private:

	// Called when NPCBoxComponent is overlapped
	UFUNCTION()
		void OnNPCBoxOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Called when NPCBoxComponent stops being overlapped
	UFUNCTION()
		void OnNPCBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	
	//If a player is inside this box component, they will be able to start a dialogue with the NPC
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UBoxComponent* NPCBoxComponent;

	// Dimensions of NPCBoxComponent
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FVector NPCBoxExtent;

	// NPC's Skeletal Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* NPCSkeletalMesh;

	// Animation applied to NPC's Skeletal Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UAnimationAsset* NPCAnimation;

	// Text displayed above the NPC
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UTextRenderComponent* NPCText;

	// Default text color
		FColor NPCTextColor;

	// If the player is inside the NPCBoxComponent - true, otherwise - false
		bool bIsInNPCBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<class UUserWidget> Dialogue_UI;

		UUserWidget* MyDialogue_UI;

	// If the player is in dialogue - true, otherwise - false
		bool bIsInDialogue;

};
