// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnStat.h"

void UPawnStat::ConstructPawnStat(const float HealthFactor, const float MaxSpeedFactor, const float MinSpeedFactor)
{
	MHealthFactor = HealthFactor;
	MMaxSpeedFactor = MaxSpeedFactor;
	MMinSpeedFactor = MinSpeedFactor;
}

float UPawnStat::GetHealthFactor() const
{
	return MHealthFactor;
}

float UPawnStat::GetMaxSpeedFactor() const
{
	return MMaxSpeedFactor;
}

float UPawnStat::GetMinSpeedFactor() const
{
	return MMinSpeedFactor;
}

float UPawnStat::GetCurrentSpeed() const
{
	return MCurrentSpeed;
}

void UPawnStat::SetCurrentSpeed(const float NewSpeed)
{
	MCurrentSpeed = NewSpeed;
}

void UPawnStat::AppendCurrentSpeed(const float Amount)
{
	MCurrentSpeed += Amount;
}
