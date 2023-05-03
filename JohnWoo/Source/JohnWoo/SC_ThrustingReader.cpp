// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "SC_ThrustingReader.h"
#include "Math/Vector.h"
#include "Calibration.h"
// Sets default values for this component's properties
USC_ThrustingReader::USC_ThrustingReader()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void USC_ThrustingReader::BeginPlay()
{
	Super::BeginPlay();
	// velocity & acceleration
	SetupThreshholds(5.5, 5);
	CalibrationSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UCalibration>();
}


// Called every frame
void USC_ThrustingReader::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CheckThresholds(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("spawed %s"), customThresholdMet[1] == true ? TEXT("True"):TEXT("False")));
}

bool USC_ThrustingReader::IsThrusting()
{
	return (customThresholdMet == arrayOfTruth);
}
void USC_ThrustingReader::ResetThresholsMet()
{
	customThresholdMet = arrayOfLies;
}

TMap<FString, float> USC_ThrustingReader::GetVelocityAndAccel()
{
	TMap<FString, float> Temp;
	Temp.Emplace("Velocity", velocity);
	Temp.Emplace("Acceleration", currentAcceleration);
	return Temp;
}

void USC_ThrustingReader::WriteToFile(float v, float a, float d, FString n, float r)
{
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::GameSourceDir()) + TEXT("/" + n + ".txt");
	FFileHelper::SaveStringToFile(FString::SanitizeFloat(v) + "," + FString::SanitizeFloat(a) + "," + FString::SanitizeFloat(d) + "," + (IsThrusting() ? "true" : "false") + "," + n + "," + FString::SanitizeFloat(r) + "\n", *FilePath,
		FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);

}

void USC_ThrustingReader::SetupThreshholds(float v, float a)
{
	customThresholdMet.Init(false, 2);
	arrayOfTruth.Init(true, 2);
	arrayOfLies.Init(false, 2);

	customThresholds[0] = v; //Velocity
	customThresholds[1] = a; // Acceleration
	//customThresholds[2] = 20;
}

void USC_ThrustingReader::CheckThresholds(float DeltaTime)
{
	// get distance between current location and previous TICK location
	
	//distanceVector = GetComponentLocation() - oldLocation;
	distanceVector = GetComponentTransform().GetRelativeTransform(GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation() - oldLocation;
	

	// get magnitude of the distance vector discrepancy of the two locations 
	velocity = distanceVector.Size();


	//Velocity check
	if (velocity > customThresholds[0]) {
		customThresholdMet[0] = true;
		//tempVel = velocity;
	}
	else {
		customThresholdMet[0] = false;
		//tempVel = 0;
	}
	//Acceleration check
	if (currentAcceleration > customThresholds[1]) {
		customThresholdMet[1] = true;
		//tempAccel = currentAcceleration;
	}
	else {
		customThresholdMet[1] = false;
		//tempAccel = 0;
	}
	
	//GetRelativeTransform(GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform())
	
	//GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Purple, FString::Printf(TEXT("spawed %f"), velocity));
	// calculate the current velocity
	currentVelocity = velocity - velocityPast;

	// calculate the current acceleration
	currentAcceleration = abs(currentVelocity / DeltaTime);

	// get the location it is at now (IS COMPARED AT THE START OF TICK)
	
	//oldLocation = GetComponentLocation();
	oldLocation = GetComponentTransform().GetRelativeTransform(GetWorld()->GetFirstPlayerController()->GetPawn()->GetTransform()).GetLocation();
	

	// get last velocity of this TICK (IS COMPARED AT THE START OF TICK
	velocityPast = distanceVector.Size();

	//UE_LOG(LogTemp, Log, TEXT("VELOCITY %f"), velocity);
	//UE_LOG(LogTemp, Log, TEXT("CURRENT ACCELERATIION %f"), currentAcceleration);
}



