// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LoggingSubsystem.h"
#include "Movement.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class JOHNWOO_API UMovement : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMovement();
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Bullet;
	UPROPERTY(EditAnywhere)
	float Weight;
	UPROPERTY(EditAnywhere)
	USoundBase* Sound;
	UPROPERTY(EditAnywhere)
	UHapticFeedbackEffect_Base* HapticEffect;
	float n = 1;
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void CalculateMovement();
	void Draw(FVector Vec, FColor Color);
	float Timer = 0;
	float AngleLimit;
	FVector WeightedDirection(FVector V1, FVector V2, float W);
	FVector ActorOldPosition = FVector::ZeroVector;
	FVector OldVelocity = FVector::ZeroVector;
	TArray<UStaticMeshComponent*> StaticMeshComponents;
	float _DeltaTime;
	UStaticMeshComponent* StaticMesh;
	FVector Velocity;
	FVector Displacement;
	ULoggingSubsystem* LoggingSubsystem;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
