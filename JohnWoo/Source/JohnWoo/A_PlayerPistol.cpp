// Fill out your copyright notice in the Description page of Project Settings.


#include "A_playerPistol.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "SC_ThrustingReader.h"
#include "MotionControllerComponent.h"
#include "SS_MotionController.h"
#include "MyENUMS.h"


// Sets default values
AA_PlayerPistol::AA_PlayerPistol()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AA_PlayerPistol::BeginPlay()
{
	Super::BeginPlay();

	MotionControllerSubSystem = GetGameInstance()->GetSubsystem<USS_MotionController>();
	MotionControllerSubSystem->InitializeControllers();
	MotionControllerSubSystem->AttachPistolToController(this, Orientation != 1 ? EHand::LEFT : EHand::RIGHT);
	ThrustingReader = (USC_ThrustingReader*)GetComponentByClass(USC_ThrustingReader::StaticClass());
}

// Called every frame
void AA_PlayerPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//PT();
	MotionControllerSubSystem->UpdateColliderRadius(Orientation != 1 ? EHand::LEFT : EHand::RIGHT);

}

bool AA_PlayerPistol::CheckRayFromSelf()
{
	Start = GetActorLocation() + StartOffset;
	ForwardVector = GetActorForwardVector();
	EndOfTrace = ((ForwardVector * 500.f) + Start);
	return GetWorld()->LineTraceSingleByChannel(OutHit, Start, EndOfTrace, ECC_WorldStatic, CollisionParams);
}


void AA_PlayerPistol::Shoot()
{
	if (CheckRayFromSelf())//makes hit true when something in GameTraceChannel2 is being hit
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetActorLocation(), GetActorRotation());
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Shot")));
		ThrustingReader->ResetThresholsMet();
	}
}

USC_ThrustingReader*& AA_PlayerPistol::GetThrustingReader()
{
	//thrusting reader

	return ThrustingReader;
}

bool AA_PlayerPistol::GetIsThrusting()
{
	return ThrustingReader->IsThrusting();
}
