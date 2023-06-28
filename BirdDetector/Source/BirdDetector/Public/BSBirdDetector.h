// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BSBirdDetector.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BIRDDETECTOR_API UBSBirdDetector : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBSBirdDetector();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	class UParticleSystem *ScanEffect;

	UPROPERTY(EditAnywhere)
	class UTexture2D* BirdSprite;
	
	UPROPERTY(EditAnywhere)
	FVector SpriteRelativeSize = {1.f, 1.f, 1.f};

	UPROPERTY(EditAnywhere)
	bool bDebugScan = false;

	UPROPERTY(EditAnywhere)
	float ScanRadius = 6000.f;

	UFUNCTION()
	void Scan();

};
