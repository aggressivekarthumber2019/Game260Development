// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnState.h"
#include "PawnStatMod.h"
#include "PawnStatComponent.h"

void APawnState::EnterState_Implementation(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn)
{
	OwnerPawnStatComponent = PSC;
	OwnerVehiclePawn = VehiclePawn;
}

void APawnState::TickState_Implementation(float DeltaTime)
{
}

void APawnState::ExitState_Implementation()
{
}

void APawnState::AddCallableMod(const TSubclassOf<class UPawnStatMod> Mod)
{
	AllowedModSet.Emplace(Mod.GetDefaultObject()->GetFName().ToString());
}

void APawnState::EnableMod(const class UPawnStatMod* Mod)
{
	if (AllowedModSet.Contains(Mod->GetFName().ToString()))
	{
		OwnerPawnStatComponent->EnableMod(Mod);
	}
}

void APawnState::DisableMod(const class UPawnStatMod* Mod)
{
	if (AllowedModSet.Contains(Mod->GetFName().ToString()))
	{
		OwnerPawnStatComponent->DisableMod(Mod);
	}
}
