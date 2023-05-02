// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"

// Sets default values
AEnemy::AEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

int AEnemy::GetID()
{
	return ID;
}

int AEnemy::Counter = 0;

void AEnemy::PostInitializeComponents() {
	Super::PostInitializeComponents();
	health = 20;
	hit = 0;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), calibrationClass, CalibrationInstance);

	ID = Counter;
	Counter++;
	LoggingSubsystem = GetGameInstance()->GetSubsystem<ULoggingSubsystem>();
	spawnTime = UGameplayStatics::GetRealTimeSeconds(GetWorld());
	//UE_LOG(LogTemp, Log, TEXT("%d"), health);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy::LoggingFunction(int32 alive)
{
	LoggingSubsystem->WriteToFile(ID, hit, health, spawnTime, UGameplayStatics::GetRealTimeSeconds(GetWorld()), alive, 1);

}

void AEnemy::TakeDamageXXX(int32 damage)
{
	health -= damage;
	hit++;
	//UE_LOG(LogTemp, Log, TEXT("taking damage %d"), health);
	if (health <= 0) {
		//Destroy();33
		//Skeleton = FindComponentByClass<USkeletalMeshComponent>();
	
	}
	else {
		//LoggingFunction(1);
	}
}
