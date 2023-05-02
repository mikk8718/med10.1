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
	FString filepath;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

public:
	UFUNCTION(BlueprintCallable)
		void WriteToFile(int32 ID, int32 Hits, int32 Health, float SpawnTime, float DeathTime, int32 alive, float DistanceToPlayer);
	UFUNCTION(BlueprintCallable)
		void SaveCalibrationValues(int ID, float Radius, FVector Position);
};

