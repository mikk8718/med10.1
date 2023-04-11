// Fill out your copyright notice in the Description page of Project Settings.


#include "LoggingSubsystem.h"
#include "Kismet/KismetStringLibrary.h"

void ULoggingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	filepath = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/MikkelIsGivingVagueInstructions.txt");
}

void ULoggingSubsystem::WriteToFile(int32 ID, int32 Hits, int32 Health, float SpawnTime, float DeathTime, int32 alive, float DistanceToPlayer)
{
	FFileHelper::SaveStringToFile(FString::FromInt(ID) + "," + FString::FromInt(Hits) + "," + FString::FromInt(Health) + "," +
		FString::SanitizeFloat(SpawnTime) + "," + FString::SanitizeFloat(DeathTime) + "," + FString::FromInt(alive) + "," + FString::SanitizeFloat(DistanceToPlayer) + "\n",
		*filepath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}
