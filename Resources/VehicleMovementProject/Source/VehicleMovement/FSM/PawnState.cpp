// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnState.h"
#include "PawnStatMod.h"
#include "PawnStatComponent.h"

void UPawnState::EnterState_Implementation(class UPawnStatComponent* PSC, class AKartVehiclePawn* VehiclePawn)
{
	OwnerPawnStatComponent = PSC;
	OwnerVehiclePawn = VehiclePawn;
}

void UPawnState::TickState_Implementation(float DeltaTime)
{
}

void UPawnState::ExitState_Implementation()
{
}

void UPawnState::MoveX_Implementation(const float AxisValue)
{
}

void UPawnState::MoveY_Implementation(const float AxisValue)
{
}

void UPawnState::BoostPressed_Implementation()
{
}

void UPawnState::BoostRelease_Implementation()
{
}

void UPawnState::Break_Implementation(const float AxisValue)
{
}

void UPawnState::AddCallableMod(const TSubclassOf<class UPawnStatMod> Mod)
{
	AllowedModSet.Emplace(Mod.GetDefaultObject()->GetFName().ToString());
}

void UPawnState::EnableMod(const class UPawnStatMod* Mod)
{
	if (AllowedModSet.Contains(Mod->GetFName().ToString()))
	{
		OwnerPawnStatComponent->EnableMod(Mod);
	}
}

void UPawnState::DisableMod(const class UPawnStatMod* Mod)
{
	if (AllowedModSet.Contains(Mod->GetFName().ToString()))
	{
		OwnerPawnStatComponent->DisableMod(Mod);
	}
}
