// Fill out your copyright notice in the Description page of Project Settings.

#include "CarStat.h"




void UCarStat::SetAccelerationFactor(const float AccelerationFactor)
{
	// Change acceleration factor
	MAccelerationFactor = AccelerationFactor;

	// Invoke delegates
	if (OnAccelerationChanged.IsBound())
	{
		OnAccelerationChanged.Broadcast();
	}
}

void UCarStat::ConstructCarStat
(
	const float HealthFactor,
	const float MaxSpeedFactor,
	const float MinSpeedFactor,
	const float HandleFactor,
	const float AccelerationFactor,
	const float WeightFactor
)
{
	UPawnStat::ConstructPawnStat(HealthFactor, MaxSpeedFactor, MinSpeedFactor); // Calling base construct

	MHandleFactor = HandleFactor;
	MAccelerationFactor = AccelerationFactor;
	MWeightFactor = WeightFactor;
}

float UCarStat::GetHandleFactor() const
{
	return MHandleFactor;
}

float UCarStat::GetAccelerationFactor() const
{
	return MAccelerationFactor;
}

float UCarStat::GetWeightFactor() const
{
	return FGenericPlatformMath::Abs(1.f - MWeightFactor);
}

void UCarStat::AcceptEnableMod(UPawnStatMod* Mod)
{
	Mod->EnableMod(this);
}

void UCarStat::AcceptDisableMod(UPawnStatMod* Mod)
{
	Mod->DisableMod(this);
}