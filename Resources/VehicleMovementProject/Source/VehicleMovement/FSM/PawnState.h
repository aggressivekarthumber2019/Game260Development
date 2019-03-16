// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SubclassOf.h"
#include "PawnState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class VEHICLEMOVEMENT_API APawnState : public AInfo
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	TSet<FString> AllowedModSet;

	UPROPERTY(BlueprintReadWrite)
	class UPawnStatComponent* OwnerPawnStatComponent;

	UPROPERTY(BlueprintReadWrite)
	class AKartVehiclePawn* OwnerVehiclePawn;
	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnterState(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn);
	virtual void EnterState_Implementation(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TickState(float DeltaTime);
	virtual void TickState_Implementation(float DeltaTime);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ExitState();
	virtual void ExitState_Implementation();

	UFUNCTION(BlueprintCallable)
	void AddCallableMod(const TSubclassOf<class UPawnStatMod> Mod);

	UFUNCTION(BlueprintCallable)
	void EnableMod(const class UPawnStatMod* Mod);

	UFUNCTION(BlueprintCallable)
	void DisableMod(const class UPawnStatMod* Mod);
};
