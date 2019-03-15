// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnState.h"
#include "AVehiclePawn.h"
#include "PawnStat.h"
#include "PawnStatComponent.h"

void UPawnState::EnterState_Implementation(UPawnStatComponent* PawnStat, AAVehiclePawn* VehiclePawn)
{
	this->PawnStat = PawnStat;
	this->VehiclePawn = VehiclePawn;
}

void UPawnState::TickState_Implementation(const float DeltaTime)
{
}

void UPawnState::ExitState_Implementation()
{
}

void UPawnState::AddCallableMod(const TSubclassOf<class UPawnStatMod> Mod)
{
}

void UPawnState::EnableMod_Implementation(class UPawnStatMod* Mod)
{
	PawnStat->MBasePawnStat->AcceptEnableMod(Mod);
}

void UPawnState::DisableMod_Implementation(class UPawnStatMod* Mod)
{
	PawnStat->MBasePawnStat->AcceptDisableMod(Mod);
}
