// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnStatMod.generated.h"

// Forward declares
class UCarStat;
class UMiscStat;

/**
 * 
 */
UCLASS()
class VEHICLEMOVEMENT_API UPawnStatMod : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
		/** \brief	Unique identifier */
		int32 guid;

	UPROPERTY(BlueprintReadWrite)
		/** \brief	Number of maximum stacks */
		int32 MMaxStackCount;
	
	UPROPERTY(BlueprintReadWrite)
		/** \brief	The maximum time of this mod in milliseconds */
		float MMaxTimeMS;

	UPawnStatMod();

	int32 GetGUID() const;

	virtual void EnableMod(UCarStat* StatType) const {};
	virtual void EnableMod(UMiscStat* StatType) const {};

	virtual void DisableMod(UCarStat* StatType) const {};
	virtual void DisableMod(UMiscStat* StatType) const {};
};
