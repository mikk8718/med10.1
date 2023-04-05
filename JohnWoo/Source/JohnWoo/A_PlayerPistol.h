// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Components/SceneComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_PlayerPistol.generated.h"
class USC_ThrustingReader;
class USS_MotionController;
UCLASS()
class JOHNWOO_API AA_PlayerPistol : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AA_PlayerPistol();
	bool hit = false;
	void Shoot();
	USC_ThrustingReader*& GetThrustingReader();
	bool GetIsThrusting();
	bool HasEntered = true;
	float TimeExitted = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	FHitResult OutHit;
	FVector Start;
	FVector ForwardVector;
	FVector EndOfTrace;
	FCollisionQueryParams CollisionParams;
	class USC_ThrustingReader* ThrustingReader;
	USS_MotionController* MotionControllerSubSystem;
	

	UPROPERTY(EditAnywhere)
		TArray<UActorComponent*> Components;

	UPROPERTY(EditAnywhere)
		FRotator ActorRot;

	UPROPERTY(EditAnywhere)
		FVector StartOffset;
	bool CheckRayFromSelf();


};
