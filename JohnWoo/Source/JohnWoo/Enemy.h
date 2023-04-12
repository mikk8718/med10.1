// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "LoggingSubsystem.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

UCLASS()
class JOHNWOO_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AEnemy();
	UPROPERTY(BlueprintReadWrite)
	int ID;
	int GetID();
	ULoggingSubsystem* LoggingSubsystem;
	//UPROPERTY(EditAnywhere)
	//TSubclassOf<AActor> calibrationClass;
	//TArray<AActor*> CalibrationInstance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void LoggingFunction(int32 alive);
	UFUNCTION(BlueprintCallable)
	void TakeDamageXXX(int32 damage);

private:
	static int Counter;
	int32 health;
	int32 hit;
	float spawnTime;
	UFUNCTION()
	virtual void PostInitializeComponents() override;

};