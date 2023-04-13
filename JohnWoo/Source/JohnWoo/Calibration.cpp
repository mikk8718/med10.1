// Fill out your copyright notice in the Description page of Project Settings.


#include "Calibration.h"

void UCalibration::SetCalibration(bool NewValue)
{
	InCalibration = NewValue;
}

bool UCalibration::IsInCalibration()
{
	return InCalibration;
}
