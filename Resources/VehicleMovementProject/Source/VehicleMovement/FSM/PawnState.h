// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubclassOf.h"
#include "PawnState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class VEHICLEMOVEMENT_API UPawnState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TSet<uint32> AllowedModSet;

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

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void MoveX(const float AxisValue);
	virtual void MoveX_Implementation(const float AxisValue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void MoveY(const float AxisValue);
	virtual void MoveY_Implementation(const float AxisValue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BoostPressed();
	virtual void BoostPressed_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BoostRelease();
	virtual void BoostRelease_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Break(const float AxisValue);
	virtual void Break_Implementation(const float AxisValue);

	UFUNCTION(BlueprintCallable)
	void AddCallableMod(const TSubclassOf<class UPawnStatMod> Mod);

	UFUNCTION(BlueprintCallable)
	void EnableMod(class UPawnStatMod* Mod);

	UFUNCTION(BlueprintCallable)
	void DisableMod(class UPawnStatMod* Mod);
};
