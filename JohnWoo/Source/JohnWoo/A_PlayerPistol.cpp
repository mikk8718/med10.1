// Fill out your copyright notice in the Description page of Project Settings.


#include "A_PlayerPistol.h"

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
	
}

// Called every frame
void AA_PlayerPistol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

