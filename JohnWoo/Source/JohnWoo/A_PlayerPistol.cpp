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
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "LoggingSubsystem.h"

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
	MotionControllerSubSystem->Toilet();
	MotionControllerSubSystem->InitializeControllers();
	// orientation = depricated
	MotionControllerSubSystem->AttachPistolToController(this, Orientation != 1 ? EHand::LEFT : EHand::RIGHT);
	ThrustingReader = (USC_ThrustingReader*)GetComponentByClass(USC_ThrustingReader::StaticClass());
	GetComponents<UStaticMeshComponent>(StaticMeshes);
	//StaticMeshes[1]->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	StaticMesh = StaticMeshes[StaticMeshes[0]->GetName() == "Sphere" ? 1 : 0];
}

// Called every frame
void AA_PlayerPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//PT();
	//MotionControllerSubSystem->UpdateColliderRadius(Orientation != 1 ? EHand::LEFT : EHand::RIGHT);
	if ((SphereVariable->GetComponentLocation() - GetActorLocation()).Size() < SphereVariable->GetUnscaledSphereRadius() * 0.3) {
		CloseToCenter = true;
	}
	//UE_LOG(LogTemp, Log, TEXT("distance difference %f"), (SphereVariable->GetComponentLocation() - GetActorLocation()).Size());
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT(" It's Micheal here %s"), *StaticMesh->GetName()));
	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 50, FColor::Blue, true, 1, 0, 1);
	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + (StaticMesh->GetRightVector() * -1) * 50, FColor::Blue, true, 1, 0, 1);
	//DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 50, FColor::Blue, true, 1, 0, 1);
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT(" It's Micheal here %s"), *(FindComponentByClass<UStaticMeshComponent>()->GetForwardVector().ToString())));

}

bool AA_PlayerPistol::CheckRayFromSelf()//depricated
{

	ForwardVector = GetActorForwardVector();
	Start = GetActorLocation() + ForwardVector * 300;
	EndOfTrace = ((ForwardVector * 100000) + Start);
	return GetWorld()->LineTraceSingleByChannel(OutHit, Start, EndOfTrace, ECC_WorldStatic, CollisionParams);
}

void AA_PlayerPistol::Shoot(FVector directionVector, FVector StartingPoint)
{
	
	Start = StartingPoint + directionVector * 300;
	EndOfTrace = ((directionVector * 100000) + Start);
	//LoggingSubsystem->savevlo
	GetWorld()->LineTraceSingleByChannel(OutHit, Start, EndOfTrace, ECC_WorldStatic, CollisionParams);

	DrawDebugLine(GetWorld(), StartingPoint + directionVector * 150, EndOfTrace, FColor::Green, false, 1, 0, 5);
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetActorLocation(), GetActorRotation());
	AActor* Proj = GetWorld()->SpawnActor<AActor>(Projectile, Start, directionVector.Rotation());
	//ThrustingReader->ResetThresholsMet();
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("spawed %f"), GetThrustingReader()->GetVelocityAndAccel()["Acceleration"]));
	//UE_LOG(LogTemp, Log, TEXT("VELOCITY %f"), ThrustingReader->GetVelocityAndAccel()["Velocity"]);
	//UE_LOG(LogTemp, Log, TEXT("ACCEL %f"), ThrustingReader->GetVelocityAndAccel()["Acceleration"]);
	//UE_LOG(LogTemp, Log, TEXT("Actor Label %s"), *(OutHit.GetActor()->GetActorLabel()));
	//UE_LOG(LogTemp, Log, TEXT("Actor Label %s"), *(OutHit.GetActor()->GetActorLabel()));
	//UE_LOG(LogTemp, Log, TEXT("Actor Label %s"), *(OutHit.GetActor()->GetActorLabel()));
	
	if (OutHit.IsValidBlockingHit())//makes hit true when something in GameTraceChannel2 is being hit
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Shot")));
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("Shot %s"), *(OutHit.GetActor()->GetActorLabel())));
		//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("Shot %s"), *(OutHit.GetActor()->GetActorLabel())));

		if (OutHit.GetActor()->IsA(AEnemy::StaticClass())) {
			Cast<AEnemy>(OutHit.GetActor())->TakeDamageXXX(20);
		}

		//ThrustingReader->ResetThresholsMet();
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
