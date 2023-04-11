// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_MotionController.h"
#include "MotionControllerComponent.h"
#include "A_PlayerPistol.h"
#include "Engine/EngineTypes.h"
#include "MyENUMS.h"
#include "SC_ThrustingReader.h"
#include "Components/SphereComponent.h"



void USS_MotionController::Initialize(FSubsystemCollectionBase& Collection)
{
	//Pistols.Init(NULL, 2);
}


void USS_MotionController::AttachPistolToController(AA_PlayerPistol* PistolActor, EHand Hand)
{
	if (Controllers.Num() == 0)
		return;

	USceneComponent* Controller = Controllers[Hand];
	(Controller, FAttachmentTransformRules::KeepRelativeTransform);
	PistolActor->SetActorLocation(Controller->GetComponentLocation());
	PistolActor->AttachToComponent(Controller, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	InitializeCollider(Hand);
	Pistols.Add(Hand, PistolActor);
	
}

void USS_MotionController::InitializeControllers()
{
	TArray<UActorComponent*> HandRight = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponentsByTag(USceneComponent::StaticClass(), FName(TEXT("HandRight")));
	TArray<UActorComponent*> HandLeft = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponentsByTag(USceneComponent::StaticClass(), FName(TEXT("HandLeft")));
	Controllers.Add(EHand::RIGHT, reinterpret_cast<TArray<USceneComponent*>&>(HandRight)[0]);
	Controllers.Add(EHand::LEFT, reinterpret_cast<TArray<USceneComponent*>&>(HandLeft)[0]);
}

void USS_MotionController::InitializeCollider(EHand Hand)
{
	TArray<UActorComponent*> ColRight = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponentsByTag(USceneComponent::StaticClass(), FName(TEXT("ColRight")));
	TArray<UActorComponent*> ColLeft = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponentsByTag(USceneComponent::StaticClass(), FName(TEXT("ColLeft")));
	Colliders.Add(EHand::RIGHT, reinterpret_cast<TArray<USphereComponent*>&>(ColRight)[0]);
	Colliders.Add(EHand::LEFT, reinterpret_cast<TArray<USphereComponent*>&>(ColLeft)[0]);
}

void USS_MotionController::UpdateColliderRadius(EHand Hand)
{
	if (Colliders.Num() == 0)
		return;
	/*
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, TEXT(""+ FString::SanitizeFloat((Colliders[(uint8)Hand]->GetComponentLocation() - Controllers[(uint8)Hand]->GetComponentLocation()).Length())));
	}
	*/
}

void USS_MotionController::PT(EHand Hand)
{
	if (Pistols[Hand]->GetIsThrusting() && Pistols[Hand]->HasEntered) {
		Pistols[Hand]->Shoot();
		Pistols[Hand]->HasEntered = false;
	}
}

void USS_MotionController::PTA(EHand Hand)
{
	Pistols[Hand]->TimeExitted = UGameplayStatics::GetTimeSeconds(GetWorld());
}

void USS_MotionController::SetHasEntered(EHand Hand)
{
	Pistols[Hand]->HasEntered = true;
}

void USS_MotionController::ButtonPressPTA(EHand Hand)
{
	float Difference = UGameplayStatics::GetTimeSeconds(GetWorld()) - Pistols[Hand]->TimeExitted;
		
	if (Difference < 1) {
		Pistols[Hand]->Shoot();
	}
}

void USS_MotionController::DisableCollision(EHand Hand)
{
	Colliders[Hand]->Deactivate();
}

void USS_MotionController::SetColliderPosition(EHand Hand)
{
	Colliders[Hand]->SetWorldLocation(Controllers[Hand]->GetComponentLocation());
}


