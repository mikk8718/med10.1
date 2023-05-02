// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_MotionController.h"
#include "MotionControllerComponent.h"
#include "A_PlayerPistol.h"
#include "Engine/EngineTypes.h"
#include "MyENUMS.h"
#include "SC_ThrustingReader.h"
#include "Components/SphereComponent.h"
#include "LoggingSubsystem.h"



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
	Pistols[Hand]->SphereVariable = Colliders[Hand];
	LoadCalibrationValues(Hand);
	HasFushedAndWiped = false;
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
	ArmRadius.Add((Colliders[Hand]->GetComponentLocation() - Controllers[Hand]->GetComponentLocation()).Size());
	if (ArmRadius.Num() == 4) {
		
		for (float radius : ArmRadius) {
			sum += radius;
		}
		Colliders[Hand]->SetSphereRadius(sum/ArmRadius.Num() * 0.9);
		ArmRadius.Empty();
		sum = 0;
	 }
}

void USS_MotionController::PT(EHand Hand, int id)
{
	if (HasFushedAndWiped)
		return;
	if (Pistols[Hand]->GetIsThrusting() && Pistols[Hand]->CloseToCenter) {
		Pistols[Hand]->Shoot(interactionParlament(Hand, id), id > 1 ? Colliders[Hand]->GetComponentLocation() : Pistols[Hand]->GetActorLocation());
		//Pistols[Hand]->HasEntered = false;
	}
	//if (Pistols[Hand] == nullptr) return;
	Pistols[Hand]->CloseToCenter = false;
}

void USS_MotionController::PTA(EHand Hand)
{
	if (HasFushedAndWiped)
		return;
	Pistols[Hand]->TimeExitted = UGameplayStatics::GetTimeSeconds(GetWorld());
}



void USS_MotionController::SetHasEntered(EHand Hand)
{
	if (HasFushedAndWiped)
		return;
	Pistols[Hand]->HasEntered = true;
}

void USS_MotionController::ButtonPressPTA(EHand Hand)
{
	if (HasFushedAndWiped)
		return;
	float Difference = UGameplayStatics::GetTimeSeconds(GetWorld()) - Pistols[Hand]->TimeExitted;
		
	if (Difference < 1) {
		//Pistols[Hand]->Shoot();
	}
}

void USS_MotionController::DisableCollision(EHand Hand)
{
	if (HasFushedAndWiped)
		return;
	Colliders[Hand]->Deactivate();
}

void USS_MotionController::SetColliderPosition(EHand Hand)
{
	if (HasFushedAndWiped)
		return;
	Colliders[Hand]->SetWorldLocation(Controllers[Hand]->GetComponentLocation());
}

void USS_MotionController::SaveCalibrationValues(EHand Hand)
{
	if (HasFushedAndWiped)
		return;
	SavedColliderPosition = Colliders[Hand]->GetRelativeLocation();
	//SavedRadius = Colliders[Hand]->GetScaledSphereRadius();
	SavedRadius = Colliders[Hand]->GetUnscaledSphereRadius();
	GetGameInstance()->GetSubsystem<ULoggingSubsystem>()->SaveCalibrationValues(0, SavedRadius, SavedColliderPosition);
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Position %s"), *SavedColliderPosition.ToString()));
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Radius %f"), SavedRadius));
	UE_LOG(LogTemp, Log, TEXT("SAVING----------------"));
	UE_LOG(LogTemp, Log, TEXT("POSITION %s"), *SavedColliderPosition.ToString());
	UE_LOG(LogTemp, Log, TEXT("Radius %f"), SavedRadius);
	HasFushedAndWiped = true;
}

void USS_MotionController::LoadCalibrationValues(EHand Hand)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Position %f"), SavedColliderPosition));
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Radius %f"), (SphereVariable->GetComponentLocation() - GetActorLocation()).Size()));
	if (!HasFushedAndWiped || Colliders.Num() == 0)
		return;
	//Colliders[Hand]->SetWorldLocation(SavedColliderPosition);
	UE_LOG(LogTemp, Log, TEXT("Radius %f"), SavedRadius);
	//FVector Local = Colliders[Hand]->GetComponentTransform().InverseTransformPosition(SavedColliderPosition);
	Colliders[Hand]->SetRelativeLocation(SavedColliderPosition);
	Colliders[Hand]->SetSphereRadius(SavedRadius, true);
	//Colliders[Hand]->
	UE_LOG(LogTemp, Log, TEXT("LOADING---------------"));
	UE_LOG(LogTemp, Log, TEXT("POSITION %s"), *(Colliders[Hand]->GetComponentLocation().ToString()));
	UE_LOG(LogTemp, Log, TEXT("Radius %f"), Colliders[Hand]->GetScaledSphereRadius());
	HasFushedAndWiped = false; 
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Position %s"), *(Colliders[Hand]->GetComponentLocation().ToString())));
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Radius %f"), Colliders[Hand]->GetScaledSphereRadius()));
}

void USS_MotionController::Toilet()
{
	Controllers.Empty();
	Colliders.Empty();
	ThrustingReaders.Empty();
	Pistols.Empty();
	HasFushedAndWiped = true;
}

FVector USS_MotionController::interactionParlament(EHand Hand, int id)
{
	switch (id)
	{
	case 1: 
		//Pistols[Hand]->GetActorForwardVector()
		return Pistols[Hand]->StaticMesh->GetRightVector() * -1;
		
	case 2:
		return (Pistols[Hand]->GetActorLocation() - Colliders[Hand]->GetComponentLocation()).GetSafeNormal();

	case 3:
		// ((Pistols[Hand]->GetActorLocation() - Colliders[Hand]->GetComponentLocation()).GetSafeNormal()) + (Pistols[Hand]->GetActorForwardVector()).GetSafeNormal();
		// (((Pistols[Hand]->GetActorLocation() - Colliders[Hand]->GetComponentLocation()).GetSafeNormal()) + Pistols[Hand]->StaticMeshes[1]->GetRightVector() * -1).GetSafeNormal();
		return (((Pistols[Hand]->GetActorLocation() - Colliders[Hand]->GetComponentLocation()).GetSafeNormal()) + Pistols[Hand]->StaticMesh->GetRightVector() * -1).GetSafeNormal();

	default:
		break;
	}
	return FVector();
}

void USS_MotionController::DisableCollider(EHand Hand)
{
	Colliders[Hand == EHand::LEFT ? EHand::RIGHT : EHand::LEFT]->SetVisibility(false);
}

void USS_MotionController::LoadCalibrationValuesManually(EHand Hand, float Radius, FVector Position)
{
	Colliders[Hand]->SetSphereRadius(Radius);
	Colliders[Hand]->SetRelativeLocation(Position);	
}


