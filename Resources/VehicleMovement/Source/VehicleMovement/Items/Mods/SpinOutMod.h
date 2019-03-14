// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnStatMod.h"
#include "SpinOutMod.generated.h"

/**
 * 
 */
UCLASS(editinlinenew)
class VEHICLEMOVEMENT_API USpinOutMod : public UPawnStatMod
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		/** \brief	The amount of Speed after being Spun out */
		float SpinOutSpeedReduction = 500 ;

	virtual void EnableMod_Implementation(UCarStat* StatType) override;


	virtual void DisableMod_Implementation(UCarStat* StatType) override;
};
