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
	TMap<EHand ,USceneComponent*> Controllers;
	TMap<EHand, USphereComponent*> Colliders;
	TArray<USC_ThrustingReader*> ThrustingReaders;
	AA_PlayerPistol* PistolLeft;
	AA_PlayerPistol* PistolRight;
	TMap<EHand, AA_PlayerPistol*> Pistols;
	TArray<float> ArmRadius;
	float sum = 0;
	FVector SavedColliderPosition = FVector::ZeroVector;
	float SavedRadius = 2;
	bool HasFushedAndWiped = false;


public:
	UFUNCTION(BlueprintCallable)
	void AttachPistolToController(AA_PlayerPistol* PistolActor, EHand Hand);

	// call this once!
	UFUNCTION(BlueprintCallable)
	void InitializeControllers();
	void InitializeCollider(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void UpdateColliderRadius(EHand hand);
	UFUNCTION(BlueprintCallable)
	void PT(EHand Hand, int id);
	UFUNCTION(BlueprintCallable)
	void PTA(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void SetHasEntered(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void ButtonPressPTA(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void DisableCollision(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void SetColliderPosition(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void SaveCalibrationValues(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void LoadCalibrationValues(EHand Hand);
	UFUNCTION(BlueprintCallable)
	void Toilet();
	FVector interactionParlament(EHand Hand, int id);
	UFUNCTION(BlueprintCallable)
	void DisableCollider(EHand Hand);
	
};	
