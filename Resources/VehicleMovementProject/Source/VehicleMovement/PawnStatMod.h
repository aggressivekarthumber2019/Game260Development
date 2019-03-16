// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnStatMod.generated.h"

/**
 * 
 */
UCLASS(editinlinenew, Blueprintable, BlueprintType)
class VEHICLEMOVEMENT_API UPawnStatMod : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	/** \brief	Number of maximum stacks */
	int32 MMaxStackCount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	/** \brief	The maximum time of this mod in milliseconds */
	float MMaxTimeMS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	/**
	 * \brief	Is this mod an instant command. If yes this mod will execute by PawnStatComponent
	 * without being place into the buff buffer.
	 */
	bool IsCommand;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnableMod(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn) const;
	virtual void EnableMod_Implementation(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisableMod(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn) const;
	virtual void DisableMod_Implementation(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn) const;
};
