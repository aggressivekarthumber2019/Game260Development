// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Items/Mods/PawnStatMod.h"
#include "SubclassOf.h"
#include "GUIDDictionary.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLEMOVEMENT_API UGUIDDictionary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FGuid GetGUID(const TSubclassOf<UPawnStatMod>& ModType);
	
};
