// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnStatComponent.h"
#include "Kismet/KismetGuidLibrary.h"

#define TO_MS(SECONDS) SECONDS * 1000.f

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

	// Mod count down timer
	TArray<UPawnStatMod*> ToBeDisabledMods;
	for (auto& Pair : MStatModifiers)
	{
		auto* Value = &(Pair.Value);

		// Check if mod has timer
		if (Value->MMod->MMaxTimeMS != 0.f)
		{
			Value->MModTimeRemainMS -= TO_MS(DeltaTime);

			// Mod expired, removing it
			if (Value->MModTimeRemainMS <= 0.f)
			{
				ToBeDisabledMods.Emplace(Value->MMod);
			}
		}
	}

	// Remove any flagged mods
	for (auto& Mod : ToBeDisabledMods)
	{
		DisableMod(Mod);
	}
}

UPawnStat* UPawnStatComponent::GetCurrentStat() const
{
	if (IsValid(MBasePawnStat))
	{
		return MBasePawnStat;
	}

	return nullptr;
}

void UPawnStatComponent::EnableMod(UPawnStatMod* Mod)
{
	UE_LOG(LogTemp, Warning, TEXT("Stat mod enabled!"));

	// Common error checking
	if (!UKismetGuidLibrary::IsValid_Guid(Mod->GetGUID()))
	{
		UE_LOG(LogTemp, Fatal, TEXT("UPawnStatMod derived (Blueprint)class was not given a GUID! \n Message me on discord if you don't know how to deal with this"));
	}

	if (MStatModifiers.Contains(Mod->GetGUID().ToString())) // Already has this mod
	{
		auto ModTracker = &MStatModifiers[Mod->GetGUID().ToString()];
		auto CurrentStackCount = ModTracker->MStackCount;
		auto MaxStackCount = ModTracker->MMod->MMaxStackCount;

		// Can still be stacked
		if (CurrentStackCount < MaxStackCount)
		{
			++ModTracker->MStackCount;
		}
	}
	else
	{
		UStatModTracker ModTracker;

		ModTracker.MMod = Mod;
		ModTracker.MModTimeRemainMS = ModTracker.MMod->MMaxTimeMS;
		ModTracker.MStackCount = 1;

		MStatModifiers.Emplace(Mod->GetGUID().ToString(), MoveTemp(ModTracker));
	}

	MStateMachine->EnableMod(Mod);
}

void UPawnStatComponent::DisableMod(UPawnStatMod* Mod)
{
	UE_LOG(LogTemp, Warning, TEXT("Stat mod disabled!"));

	// Common error checking
	if (!UKismetGuidLibrary::IsValid_Guid(Mod->GetGUID()))
	{
		UE_LOG(LogTemp, Fatal, TEXT("UPawnStatMod derived (Blueprint)class was not given a GUID! \n Message me on discord if you don't know how to deal with this"));
	}

	if (MStatModifiers.Contains(Mod->GetGUID().ToString())) // Already has this mod
	{
		auto ModTracker = &MStatModifiers[Mod->GetGUID().ToString()];

		if (ModTracker->MStackCount == 1) // Last stack
		{
			MStateMachine->DisableMod(Mod);

			MStatModifiers.Remove(Mod->GetGUID().ToString());
		}
		else // Remove 1 stack
		{
			ModTracker->MStackCount--;
		}
	}
}

void UPawnStatComponent::SwitchState()
{

}

