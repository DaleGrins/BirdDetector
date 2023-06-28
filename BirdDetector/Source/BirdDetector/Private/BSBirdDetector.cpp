// Fill out your copyright notice in the Description page of Project Settings.


#include "BSBirdDetector.h"
#include "GameFramework/Character.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "BSBirdActor.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"

UBSBirdDetector::UBSBirdDetector()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UBSBirdDetector::BeginPlay()
{
	Super::BeginPlay();

	//cast ower to an ACharacter and bind the key for calling the scan function
	ACharacter* ParentCharacter = Cast<ACharacter>(GetOwner());
	if(ParentCharacter != nullptr)
	{
		UInputComponent* CharacterInputComp = Cast<UInputComponent>(ParentCharacter->GetComponentByClass(UInputComponent::StaticClass()));
		if(CharacterInputComp != nullptr)
		{
			CharacterInputComp->BindAction(TEXT("FireScan"), EInputEvent::IE_Pressed, this, &UBSBirdDetector::Scan);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("BSBirdDetector: Owning actor of the bird scanner does not have an input component"));
		}
	}
}

void UBSBirdDetector::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UBSBirdDetector::Scan()
{
	if (ScanEffect != nullptr)
	{
		//spawn an actor and add a sphere component to it at the players location
		AActor* TempDetectionActor  = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), GetOwner()->GetActorLocation(), FRotator::ZeroRotator);
		UActorComponent* AddedSphereComponent = TempDetectionActor->AddComponentByClass(USphereComponent::StaticClass(), false, FTransform::Identity, false);
		USphereComponent* DetectionSphere = Cast<USphereComponent>(AddedSphereComponent);

		//actor location needs to be set again as when it was spawned, it did not have a transform
		TempDetectionActor->SetActorLocation(GetOwner()->GetActorLocation());

		//set sphere radius to player specified radius
		DetectionSphere->SetSphereRadius(ScanRadius);
		DetectionSphere->bHiddenInGame = true;

		//find overlapping bird actors
		TArray<AActor*> ScannedBirds;
		DetectionSphere->GetOverlappingActors(ScannedBirds, ABSBirdActor::StaticClass());

		//add billboards to the found birds so they can be seen by the player
		for (AActor* BirdIt : ScannedBirds)
		{
			UActorComponent* BirdBillboardAC = BirdIt->AddComponentByClass(UBillboardComponent::StaticClass(), false, FTransform::Identity, false);
			UBillboardComponent* BirdBillboardComp = Cast<UBillboardComponent>(BirdBillboardAC);
			if(BirdSprite != nullptr)
			{
				BirdBillboardComp->SetSprite(BirdSprite);
				BirdBillboardComp->bHiddenInGame = false;
				BirdBillboardComp->SetRelativeScale3D(SpriteRelativeSize);
			}
		}

		//a debug sphere for seeing the scanned area
		if(bDebugScan)
		{
			DrawDebugSphere(GetWorld(),
			TempDetectionActor->GetActorLocation(),
			ScanRadius,
			100,
			FColor::Red,
			false,
			3.f,
			(uint8)0U,
			40.f);
		}

		TempDetectionActor->Destroy();

		UGameplayStatics::SpawnEmitterAttached(ScanEffect, GetOwner()->GetRootComponent());

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("BSBirdDetector: There is no scan particle effect selected in the scan component"));
	}
}