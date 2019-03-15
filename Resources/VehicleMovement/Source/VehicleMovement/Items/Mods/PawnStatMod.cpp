// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnStatMod.h"
#include "Kismet/KismetGuidLibrary.h"

void UPawnStatMod::Construct(const int32 MaxStack, const float MaxTimeMS)
{
	MMaxStackCount = MaxStack;
	MMaxTimeMS = MaxTimeMS;
}

FGuid UPawnStatMod::GetGUID() const
{
	return MGUID;
}

void UPawnStatMod::Begin_Implementation()
{

}

void UPawnStatMod::EnableMod_Implementation(UCarStat* StatType)
{

}

void UPawnStatMod::DisableMod_Implementation(UCarStat* StatType)
{

}
