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

	// Removing
	for (auto Name : MRemoveList)
	{
		MStatModifiers.Remove(Name);
	}

	// Mods
	for (auto& Entry : MStatModifiers)
	{
		UStatModTracker* CurrentMod = &Entry.Value;

		// Check that the current mod is valid first then Subtract time
		if (CurrentMod && CurrentMod->MMod->MMaxTimeMS != 0.f)
		{
			// Subtract time
			CurrentMod->MModTimeRemainMS -= DeltaTime * 1000.f;

			if (CurrentMod->MModTimeRemainMS < 0.f)
			{
				// Reset timer
				CurrentMod->MModTimeRemainMS = CurrentMod->MMod->MMaxTimeMS;

				DisableMod(CurrentMod->MMod);
			}
		}
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
	// Mod id
	FName ObjectID = Mod->StaticClass()->GetDefaultObjectName();

	// Check if we have that mod
	if (MStatModifiers.Contains(ObjectID))
	{
		UStatModTracker CurrentMod = MStatModifiers[ObjectID];

		// Increment stack
		CurrentMod.MStackCount++;
	}
	else
	{
		UStatModTracker NewMod;
		NewMod.MMod = Mod;
		NewMod.MModTimeRemainMS = Mod->MMaxTimeMS;
		NewMod.MStackCount = Mod->MMaxStackCount;

		MStatModifiers.Emplace(ObjectID, NewMod);
	}

	Mod->EnableMod(this, Cast<AKartVehiclePawn>(GetOwner()));
}

void UPawnStatComponent::DisableMod(UPawnStatMod* Mod)
{
	// Mod id
	FName ObjectID = Mod->StaticClass()->GetDefaultObjectName();
	// Check if the ObjectID is valid and Check if we have that mod
	if (ObjectID.IsValid() && MStatModifiers.Contains(ObjectID))
	{
		UStatModTracker* CurrentMod = &MStatModifiers[ObjectID];

		if (CurrentMod->MStackCount <= 1)
		{
			MRemoveList.Emplace(ObjectID);
		}
		else
		{
			// Decurment stack
			CurrentMod->MStackCount--;
		}
	}

	//Check if valid before using the mod
	if (Mod)
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
