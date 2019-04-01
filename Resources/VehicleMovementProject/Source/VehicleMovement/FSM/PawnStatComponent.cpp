// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnStatComponent.h"
#include "KartVehiclePawn.h"


// Sets default values for this component's properties
UPawnStatComponent::UPawnStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPawnStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPawnStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (IsValid(CurrentState))
	{
		CurrentState->TickState(DeltaTime);
	}
}

UPawnState* UPawnStatComponent::GetCurrentState() const
{
	return CurrentState;
}

void UPawnStatComponent::SwitchState(UPawnState* NewState)
{
	if (!IsValid(NewState))
	{
		return;
	}

	if (IsValid(CurrentState))
	{
		CurrentState->ExitState();
	}

	CurrentState = NewState;
	CurrentState->EnterState(this, Cast<AKartVehiclePawn>(GetOwner()));
}

void UPawnStatComponent::EnableMod(UPawnStatMod* Mod)
{
	if (Mod->IsCommand)
	{
		Mod->EnableMod(this, Cast<AKartVehiclePawn>(GetOwner()));
	}
}

void UPawnStatComponent::DisableMod(UPawnStatMod* Mod)
{
	if (Mod->IsCommand)
	{
		Mod->DisableMod(this, Cast<AKartVehiclePawn>(GetOwner()));
	}
}

void UPawnStatComponent::AddItem(UPawnStatMod* Mod)
{
	Inventory.Emplace(Mod);
}

void UPawnStatComponent::SetMaxSpeed(const float Speed)
{
	VehiclePawnMaxSpeed = Speed;
	OnMaxSpeedChanged.Broadcast();
}
