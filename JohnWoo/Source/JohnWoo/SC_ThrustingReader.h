// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "A_PlayerPistol.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SC_ThrustingReader.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JOHNWOO_API USC_ThrustingReader : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USC_ThrustingReader();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	bool IsThrusting();
	void ResetThresholsMet();


private:
	FVector oldLocation = FVector::ZeroVector;
	float velocity;
	float velocityPast = 0;
	float currentVelocity;
	float currentAcceleration;
	FVector distanceVector;




	UPROPERTY(EditAnywhere)
		float customThresholds[3];			//element[0] holds distance threshold, element[1] holds velocity treshold, element[2] holds acceleration threshold.

	UPROPERTY(EditAnywhere)
		TArray<bool> customThresholdMet;	//element[0] holds distance threshold, element[1] holds velocity treshold, element[2] holds acceleration threshold,elemetn[3] holds hitting.
	TArray<bool> arrayOfTruth;
	TArray<bool> arrayOfLies;

	void WriteToFile(float v, float a, float d, FString n, float r);
	void SetupThreshholds(float v, float a);
	void CheckThresholds(float DeltaTime);

};
