// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Calibration.generated.h"

/**
 * 
 */
UCLASS()
class JOHNWOO_API UCalibration : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetCalibration(bool NewValue);
	UFUNCTION(BlueprintCallable)
	bool IsInCalibration();
	UFUNCTION(BlueprintCallable)
		void FromCalibration();
	
	bool _fromcalibration = false;
	UFUNCTION(BlueprintCallable)
		bool IsFromCalibration() { return _fromcalibration; }
private: 
	bool InCalibration = true;
};
