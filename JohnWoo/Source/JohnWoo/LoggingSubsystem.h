// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoggingSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class JOHNWOO_API ULoggingSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
private:
	FString PathFrameRate;
	FString PathAccuracy;
	FString PathThrust;
	FString PathCalibration;
	float Velocity;
	float Acceleration;
	int _condition;
	bool _TriggerPress;
	bool _ControllerGrasp;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

public:
	int _ID;
	EHand _Hand;

	UFUNCTION(BlueprintCallable)
		void WriteToFile(int32 ID, int32 Hits, int32 Health, float SpawnTime, float DeathTime, int32 alive, float DistanceToPlayer);
	UFUNCTION(BlueprintCallable)
		void SaveCalibrationValues(int ID, float Radius, FVector Position);
	UFUNCTION(BlueprintCallable)
		void InitializeParticipant(int ID, EHand Hand, int condition);
	UFUNCTION(BlueprintCallable)
		void SaveFrameRate(float DeltaTime, bool TriggerPress, bool ControllerGrasp);
	UFUNCTION(BlueprintCallable)
		void SaveAccuracy(float v, float a, bool hit, float DistanceToTarget, bool CriticalHit);
	void SaveTrusting(bool thrust);
};

