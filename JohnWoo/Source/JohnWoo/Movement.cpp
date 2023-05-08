// Fill out your copyright notice in the Description page of Project Settings.


#include "Movement.h"
#include "ProjectileDaddy.h"
#include <Kismet/GameplayStatics.h>
// Sets default values for this component's properties
UMovement::UMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UMovement::BeginPlay()
{
	Super::BeginPlay();
	GetOwner()->GetComponents<UStaticMeshComponent>(StaticMeshComponents);
	StaticMesh = StaticMeshComponents[StaticMeshComponents[0]->GetName() == "Sphere" ? 1 : 0];
	LoggingSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<ULoggingSubsystem>();
	// ...

}

void UMovement::CalculateMovement()
{


}

void UMovement::Draw(FVector Vec, FColor Color)
{
	DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(),
		(GetOwner()->GetActorLocation()) + Vec * 1000, Color);
}

FVector UMovement::WeightedDirection(FVector V1, FVector V2, float W)
{
	return ((1.0f - W) * V1 + V2 * W);
}

// Called every frame
void UMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	//FVector Offset = GetOwner()->GetActorRightVector() * 2;
	_DeltaTime = DeltaTime;
	//FVector NewPosition = GetOwner()->GetActorLocation();
	//GetComponentTransform().
	FVector NewPosition = StaticMesh->GetComponentTransform().GetRelativeTransform(
		GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation();

	LoggingSubsystem->SavePoisition(NewPosition.X, NewPosition.Y, NewPosition.Z, DeltaTime);
		//GetOwner()->GetActorTransform().GetRelativeTransform(
		//GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation();

	//FVector NewPosition = GetComponentTransform().GetRelativeTransform(GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation();
	if (n <= 10) {
		Displacement += NewPosition + (-ActorOldPosition);
		Displacement /= n;
	}
	else {
		Displacement = NewPosition + (-ActorOldPosition);
		n = 0;
	}
	
	Velocity = Displacement / _DeltaTime;
	//FVector Direction = GetOwner()->GetActorForwardVector() + Velocity.GetSafeNormal();
	//FVector Direction = (StaticMesh->GetRightVector()) * -1 + (Velocity.GetSafeNormal());
	//Weight = 1;


	FVector Direction = WeightedDirection(StaticMesh->GetRightVector() * -1, (Velocity).GetSafeNormal(), Weight);
	float Acceleration = abs((Velocity.Size() - OldVelocity.Size()) / _DeltaTime);

	Draw(Velocity.GetSafeNormal(), FColor::Yellow);
	//Draw(-Displacement.GetSafeNormal(), FColor::Yellow);
	Draw(Direction, FColor::Red);

	float dot = Velocity.GetSafeNormal().Dot(Direction.GetSafeNormal());
	float Angle = FMath::RadiansToDegrees(acos(dot));
	//Weight = acos(dot);
	//Weight = 0.8;
	Draw(WeightedDirection(Direction, StaticMesh->GetRightVector() * -1, acos(dot)), FColor::Blue);
	Draw(-1*StaticMesh->GetRightVector(), FColor::Green);

	//Direction.Y = Direction.Y * -1;
	if (Acceleration > 17000 && Angle < 20 && Timer > 0.5 && Displacement.Size() > 2.5 && StaticMesh->GetRightVector().Dot(Direction) < 0)
	{
		//GetWorld()->SpawnActor<AActor>(Bullet, GetOwner()->GetActorLocation() + ((StaticMesh->GetRightVector() * -1) * 2),
			//Angle < 10 ? Direction.Rotation() : WeightedDirection(Direction, StaticMesh->GetRightVector() * -1).Rotation());
		AActor* _Projectile = GetWorld()->SpawnActor<AActor>(Bullet, StaticMesh->GetComponentLocation() + ((StaticMesh->GetRightVector() * -1) * 0),
			(Direction.GetSafeNormal() + StaticMesh->GetForwardVector() * 0).Rotation());
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), Sound, GetOwner()->GetActorLocation(),
			GetOwner()->GetActorRotation(), 1.2f);
		GetWorld()->GetFirstPlayerController()->PlayHapticEffect(HapticEffect, EControllerHand::Right);

		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Displacement %f"), Displacement.Size()));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Acceleration %f"), Acceleration));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Angle %f"), Angle));
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("Velocity size %f"), StaticMesh->GetRightVector().Dot(Direction)));

		DrawDebugLine(GetWorld(), GetOwner()->GetActorLocation(),
			(GetOwner()->GetActorLocation()) +
			WeightedDirection(Direction, StaticMesh->GetRightVector() * -1, acos(dot)).GetSafeNormal() * 1000, FColor::Yellow, false, 1, 0, 2);
		
		auto P = (AProjectileDaddy*)_Projectile;
		P->Acceleration = Acceleration;
		P->DiplacementSize = Displacement.Size();
		Timer = 0;
	}
	
	Timer += DeltaTime;

	//ActorOldPosition = GetOwner()->GetActorLocation();
	ActorOldPosition = StaticMesh->GetComponentTransform().GetRelativeTransform(
		GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation();
		//GetOwner()->GetActorTransform().GetRelativeTransform(
		//GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation();
	n += 1;
	//OldVelocity = Velocity;
	// ...
}
