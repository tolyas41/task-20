// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tower.generated.h"

class AProjectile;

UCLASS()
class TASK16_API ATower : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostActorCreated() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	TSubclassOf<AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> TowerMeshClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* ProjectileSpawnPoint;

	void Fire();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire")
	float FireRate;

};
