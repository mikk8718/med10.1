// Fill out your copyright notice in the Description page of Project Settings.


#include "LoggingSubsystem.h"
#include "Kismet/KismetStringLibrary.h"
#include "MyENUMS.h"

void ULoggingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	//filepath = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/MikkelIsGivingVagueInstructions.txt");

}

void ULoggingSubsystem::WriteToFile(int32 ID, int32 Hits, int32 Health, float SpawnTime, float DeathTime, int32 alive, float DistanceToPlayer)
{
	//FFileHelper::SaveStringToFile(FString::FromInt(ID) + "," + FString::FromInt(Hits) + "," + FString::FromInt(Health) + "," +
		//FString::SanitizeFloat(SpawnTime) + "," + FString::SanitizeFloat(DeathTime) + "," + FString::FromInt(alive) + "," + FString::SanitizeFloat(DistanceToPlayer) + "\n",
		//*filepath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void ULoggingSubsystem::SaveCalibrationValues(int ID, float Radius, FVector Position)
{
	FFileHelper::SaveStringToFile(FString::FromInt(_ID) + ","+FString::SanitizeFloat(Radius)+","+*(Position.ToString()+"\n"),
		*PathCalibration, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void ULoggingSubsystem::InitializeParticipant(int ID, EHand Hand, int condition)
{
	_Hand = Hand;
	_ID = ID;
	_condition = condition;
	PathAccuracy = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/AccuracyFile" + FString::FromInt(_ID) + ".txt");
	PathCalibration = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/CalibrationFile" + FString::FromInt(_ID) + ".txt");
	PathThrust = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/ThrustFile" + FString::FromInt(_ID) + ".txt");
	PathFrameRate = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/FrameRateFile" + FString::FromInt(_ID) + ".txt");


}

void ULoggingSubsystem::SaveFrameRate(float DeltaTime,bool TriggerPress, bool ControllerGrasp)
{
	float FrameRate = 1.0 / DeltaTime;
	_TriggerPress = TriggerPress;
	_ControllerGrasp = ControllerGrasp;


	FFileHelper::SaveStringToFile(FString::FromInt(_ID) + "," + FString::SanitizeFloat(FrameRate) + "," + FString::SanitizeFloat(GetWorld()->GetRealTimeSeconds()) +"," + 
		FString::FromInt(_TriggerPress) + "," + FString::FromInt(_ControllerGrasp) + "\n",
		*PathFrameRate, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}


void ULoggingSubsystem::SaveAccuracy(float v, float a, bool hit, float DistanceToTarget, bool CriticalHit)
{
	
	FFileHelper::SaveStringToFile(FString::FromInt(_ID) + "," + UEnum::GetValueAsString(_Hand) + "," + FString::FromInt(_condition) + "," + 
		FString::FromInt(hit) + "," + FString::SanitizeFloat(DistanceToTarget) + "," +
		FString::SanitizeFloat(v)+","+FString::SanitizeFloat(a)+","+FString::FromInt(CriticalHit)+  "\n",
		*PathAccuracy, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void ULoggingSubsystem::SaveTrusting(bool thrust)
{
	
	FFileHelper::SaveStringToFile(FString::FromInt(_ID) +","+FString::FromInt(thrust) + "," + FString::FromInt(_condition) + "\n",
		*PathThrust, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}


