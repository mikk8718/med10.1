// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SS_MotionController.generated.h"

class USphereComponent;
class USC_ThrustingReader;

UCLASS()
class JOHNWOO_API USS_MotionController : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	//virtual void Deinitialize() override;

private:
	TArray<USceneComponent*> Controllers;
	TArray<USphereComponent*> Colliders;
	TArray<USC_ThrustingReader*> ThrustingReaders;
	AA_PlayerPistol* PistolLeft;
	AA_PlayerPistol* PistolRight;
	TArray<AA_PlayerPistol*> Pistols;

public:
	// depricated
	UFUNCTION(BlueprintCallable)
		void AddController(USceneComponent* Controller);

	UFUNCTION(BlueprintCallable)
		void AttachPistolToController(AA_PlayerPistol* PistolActor, EHand Hand);

	// call this once!
	UFUNCTION(BlueprintCallable)
	void InitializeControllers();
	void InitializeCollider(EHand Hand);
	void InitializeThrustingReaders();
	void UpdateColliderRadius(EHand hand);
	UFUNCTION(BlueprintCallable)
	void PT(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void PTA(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void SetHasEntered(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void ButtonPressPTA(EHand Hand);
};
