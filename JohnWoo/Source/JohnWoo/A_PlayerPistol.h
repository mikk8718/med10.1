#pragma once
#include "Components/SceneComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "A_PlayerPistol.generated.h"
class USC_ThrustingReader;
class USS_MotionController;
class USphereComponent;
UCLASS()
class JOHNWOO_API AA_PlayerPistol : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AA_PlayerPistol();
	bool hit = false;
	void Shoot(FVector directionVector,FVector StartingPoint);
	USC_ThrustingReader*& GetThrustingReader();
	bool GetIsThrusting();
	bool HasEntered = true;
	float TimeExitted = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Orientation;
	UPROPERTY(EditAnywhere)
	USoundBase* Sound;
	UPROPERTY(EditAnywhere)
	USoundBase* FailureSound;
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> Projectile;
	TArray<UStaticMeshComponent*> StaticMeshes;
	UStaticMeshComponent* StaticMesh;
	UPROPERTY(EditAnywhere)
	UHapticFeedbackEffect_Base* HapticEffect;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	USphereComponent* SphereVariable;
	bool CloseToCenter;


private:
	FHitResult OutHit;
	FVector Start;
	FVector ForwardVector;
	FVector EndOfTrace;
	FCollisionQueryParams CollisionParams;
	class USC_ThrustingReader* ThrustingReader;
	USS_MotionController* MotionControllerSubSystem;

	UPROPERTY(EditAnywhere)
		TArray<UActorComponent*> Components;

	UPROPERTY(EditAnywhere)
		FRotator ActorRot;

	UPROPERTY(EditAnywhere)
		FVector StartOffset;
	bool CheckRayFromSelf();


};
