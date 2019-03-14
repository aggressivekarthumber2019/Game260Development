// Fill out your copyright notice in the Description page of Project Settings.

#include "SpinOutMod.h"
#include "CarStat.h"

void USpinOutMod::EnableMod_Implementation(UCarStat* StatType)
{
	//StatType->MCurrentSpeed += PostSpinOutSpeed ; // old changes

	StatType-> MCurrentSpeed += (-SpinOutSpeedReduction) ;

}

void USpinOutMod::DisableMod_Implementation(UCarStat* StatType)
{
	UE_LOG(LogTemp, Log, TEXT("Spun Out!")) ;
}
