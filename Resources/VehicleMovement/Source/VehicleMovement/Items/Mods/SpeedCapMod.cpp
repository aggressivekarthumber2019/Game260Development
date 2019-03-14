// Fill out your copyright notice in the Description page of Project Settings.

#include "SpeedCapMod.h"
#include "CarStat.h"




void USpeedCapMod::EnableMod_Implementation(UCarStat* StatType)
{
	StatType->MMaxSpeedFactor += MBoostedSpeed ;
}

void USpeedCapMod::DisableMod_Implementation(UCarStat* StatType)
{
	StatType->MMaxSpeedFactor -= MBoostedSpeed ;
}
