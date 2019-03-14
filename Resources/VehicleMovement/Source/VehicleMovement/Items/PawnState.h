// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class VEHICLEMOVEMENT_API UPawnState : public UObject
{
	GENERATED_BODY()

protected:
	class UPawnStat* PawnStat;
	class AAVehiclePawn* VehiclePawn;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnterState(class UPawnStat* PawnStat, class AAVehiclePawn* VehiclePawn);
	virtual void EnterState_Implementation(class UPawnStat* PawnStat, class AAVehiclePawn* VehiclePawn);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TickState(const float DeltaTime);
	virtual void TickState_Implementation(const float DeltaTime);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ExitState();
	virtual void ExitState_Implementation();

	UFUNCTION(BlueprintCallable)
	void AddCallableMod(const TSubclassOf<class UPawnStatMod> Mod);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InvokeMod(class UPawnStatMod* Mod);
	virtual void InvokeMod_Implementation(class UPawnStatMod* Mod);
};
