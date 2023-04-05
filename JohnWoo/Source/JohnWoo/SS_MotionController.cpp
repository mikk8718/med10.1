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

void USS_MotionController::AddController(USceneComponent* Controller)
{
	Controllers.Add(Controller);
}

void USS_MotionController::AttachPistolToController(AA_PlayerPistol* PistolActor, EHand Hand)
{
	if (Controllers.Num() == 0)
		return;

	USceneComponent* Controller = Controllers[(uint8)Hand];
	(Controller, FAttachmentTransformRules::KeepRelativeTransform);
	PistolActor->SetActorLocation(Controller->GetComponentLocation());
	PistolActor->AttachToComponent(Controller, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	InitializeCollider(Hand);
	//Pistols.Add(PistolActor);
	PistolRight = PistolActor;
}

void USS_MotionController::InitializeControllers()
{
	TArray<UActorComponent*> Hands = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponentsByTag(USceneComponent::StaticClass(), FName(TEXT("Hand")));
	Controllers = reinterpret_cast<TArray<USceneComponent*>&>(Hands);
}

void USS_MotionController::InitializeCollider(EHand Hand)
{
	TArray<UActorComponent*> CollidersUActorComponent = GetWorld()->GetFirstPlayerController()->GetPawn()->GetComponentsByTag(USceneComponent::StaticClass(), FName(TEXT("Col")));
	Colliders = reinterpret_cast<TArray<USphereComponent*>&>(CollidersUActorComponent);
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
	if (Pistols[(uint8)Hand]->GetIsThrusting() && Pistols[(uint8)Hand]->HasEntered) {
		Pistols[(uint8)Hand]->Shoot();
		Pistols[(uint8)Hand]->HasEntered = false;
	}
}

void USS_MotionController::PTA(EHand Hand)
{
	Pistols[(uint8)Hand]->TimeExitted = UGameplayStatics::GetTimeSeconds(GetWorld());
}

void USS_MotionController::SetHasEntered(EHand Hand)
{
	Pistols[(uint8)Hand]->HasEntered = true;
}

void USS_MotionController::ButtonPressPTA(EHand Hand)
{
	float Difference = UGameplayStatics::GetTimeSeconds(GetWorld()) - Pistols[(uint8)Hand]->TimeExitted;
		
	if (Difference < 1) {
		Pistols[(uint8)Hand]->Shoot();
	}
}


