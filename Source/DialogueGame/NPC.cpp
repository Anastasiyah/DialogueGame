// Fill out your copyright notice in the Description page of Project Settings.

#include "NPC.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

// Sets default values
ANPC::ANPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create NPC's Box Component
	NPCBoxComponent = CreateDefaultSubobject<UBoxComponent>(FName("NPCBoxComponent"));
	NPCBoxComponent->AttachTo(GetRootComponent());

	// Set Box Component default dimensions
	NPCBoxExtent = FVector(105.0f, 140.0f, 95.0f);
	NPCBoxComponent->SetBoxExtent(NPCBoxExtent, true);

	// Add Skeletal Mesh
	NPCSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("NPCSkeletalMesh"));
	NPCSkeletalMesh->AttachTo(GetRootComponent());
	
	// Add Animation to Skeletal Mesh
	NPCSkeletalMesh->PlayAnimation(NPCAnimation, true);

	// Create Text Render Component displayed above the NPC
	NPCText = CreateDefaultSubobject<UTextRenderComponent>(FName("NPCText"));
	NPCText->AttachTo(GetRootComponent());

	// Set default color to Text Render Component
	NPCTextColor = FColor(255, 0, 0);
	NPCText->SetTextRenderColor(NPCTextColor);

	// Set default Text Render Component Rotation and Location
	NPCText->RelativeRotation.Add(0, 90, 0);
	NPCText->RelativeLocation = FVector(-70, 0, 115);

	// Set Text Render Component default Visibility
	NPCText->SetVisibility(false);	
}

void ANPC::OnNPCBoxOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	bIsInNPCBox = true;
	NPCText->SetVisibility(true);
}


void ANPC::OnNPCBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsInNPCBox = false;
	NPCText->SetVisibility(false);
}

// Displays the dialogue widget and enables to interact with it
void ANPC::DisplayDialogueWidget()
{
	UE_LOG(LogTemp, Log, TEXT("DisplayDialogueWidget - START %f"), 0.1f);

	APlayerController* CurrentPlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (Dialogue_UI)
	{
		MyDialogue_UI = CreateWidget<UUserWidget>(CurrentPlayerController, Dialogue_UI);
		if (MyDialogue_UI)
		{
			MyDialogue_UI->AddToViewport();
		}

		FInputModeGameAndUI InputModeData;
		InputModeData.SetLockMouseToViewport(false);
		InputModeData.SetWidgetToFocus(MyDialogue_UI->TakeWidget());

		CurrentPlayerController->SetInputMode(InputModeData);
		CurrentPlayerController->bShowMouseCursor = true;
	}
	
	UE_LOG(LogTemp, Log, TEXT("DisplayDialogueWidget - STOP %f"), 0.1f);
}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
	//Register the begin and end overlap functions
	NPCBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ANPC::OnNPCBoxOverlap);
	NPCBoxComponent->OnComponentEndOverlap.AddDynamic(this, &ANPC::OnNPCBoxEndOverlap);
}

// Called every frame
void ANPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APlayerController* CurrentPlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	ACharacter* CurrentPlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	bIsInDialogue = false;

	if (MyDialogue_UI != NULL)
	{
		if (MyDialogue_UI->IsInViewport())
		{
			bIsInDialogue = true;
		}
		else
		{
			MyDialogue_UI = NULL;
			bIsInDialogue = false;
		}
	}

	if (!bIsInDialogue && bIsInNPCBox && CurrentPlayerController->WasInputKeyJustPressed(EKeys::F))
	{
		CurrentPlayerController->DisableInput(CurrentPlayerController);
		CurrentPlayerCharacter->DisableInput(CurrentPlayerController);

		NPCText->SetVisibility(false);

		DisplayDialogueWidget();
	}
}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

