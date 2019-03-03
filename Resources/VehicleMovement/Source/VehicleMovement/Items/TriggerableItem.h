// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vehicle/VehicleStats/PawnStatMod.h"
#include "TriggerableItem.generated.h"

UCLASS(Blueprintable)
class VEHICLEMOVEMENT_API ATriggerableItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerableItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Items")
	class UStaticMeshComponent* MeshComponent;
	
	UPROPERTY(VisibleAnywhere, Category = "Items")
	class USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, Instanced, Category = "Items")
	UPawnStatMod* PawnStatMod;

public:
	UFUNCTION(BlueprintCallable, Category = "Items")
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
