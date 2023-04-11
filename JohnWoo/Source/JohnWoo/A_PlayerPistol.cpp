// Fill out your copyright notice in the Description page of Project Settings.


#include "A_playerPistol.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "SC_ThrustingReader.h"
#include "MotionControllerComponent.h"
#include "SS_MotionController.h"
#include "Enemy.h"
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
	DrawDebugLine(GetWorld(), GetActorLocation() + GetActorForwardVector() * 300, GetActorLocation() + (GetActorForwardVector() * 5000), FColor::Green, false, 1, 0, 5);

}

bool AA_PlayerPistol::CheckRayFromSelf()
{

	ForwardVector = GetActorForwardVector();
	Start = GetActorLocation() + ForwardVector * 300;
	EndOfTrace = ((ForwardVector * 500.f) + Start);
	return GetWorld()->LineTraceSingleByChannel(OutHit, Start, EndOfTrace, ECC_WorldStatic, CollisionParams);
}


void AA_PlayerPistol::Shoot()
{
	CheckRayFromSelf();
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetActorLocation(), GetActorRotation());
	if (OutHit.IsValidBlockingHit())//makes hit true when something in GameTraceChannel2 is being hit
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Shot")));
		//UE_LOG(LogTemp, Log, TEXT("%s"), *(OutHit.GetActor()->GetActorLabel()));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("Shot %s"), *(OutHit.GetActor()->GetActorLabel())));
		if (OutHit.GetActor()->IsA(AEnemy::StaticClass())) {
			Cast<AEnemy>(OutHit.GetActor())->TakeDamageXXX(10);
		}

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
