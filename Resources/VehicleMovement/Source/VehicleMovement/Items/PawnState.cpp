// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnState.h"
#include "Mods/PawnStatMod.h"
#include "AVehiclePawn.h"
#include "PawnStat.h"

void UPawnState::EnterState_Implementation(UPawnStat* PawnStat, AAVehiclePawn* VehiclePawn)
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

void UPawnState::InvokeMod_Implementation(UPawnStatMod* Mod)
{
	//Mod->EnableMod(PawnStatComponent);
}
