// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnStatMod.h"
#include "Kismet/KismetGuidLibrary.h"

void UPawnStatMod::Construct(int32 MaxStack, float MaxTimeMS)
{
	MMaxStackCount = MaxStack;
	MMaxTimeMS = MaxTimeMS;
}

FGuid UPawnStatMod::GetGUID() const
{
	return GUID;
}

void UPawnStatMod::EnableMod_Implementation(UCarStat* StatType)
{

}

void UPawnStatMod::DisableMod_Implementation(UCarStat* StatType)
{

}
