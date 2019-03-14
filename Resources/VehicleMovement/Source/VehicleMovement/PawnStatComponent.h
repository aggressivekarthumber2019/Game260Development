// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnStat.h"
#include "Items/Mods/PawnStatMod.h"
#include "Items/PawnState.h"
#include "PawnStatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VEHICLEMOVEMENT_API UPawnStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPawnStatComponent();

protected:
	UPROPERTY(BlueprintReadWrite)
	UPawnStat* MBasePawnStat;

	UPROPERTY(BlueprintReadWrite)
	UPawnState* MStateMachine;

	// Called when the game starts
	virtual void BeginPlay() override;

private:
	struct UStatModTracker
	{
		/** \brief	Current number of stacks */
		int32 MStackCount;

		/** \brief	The modifier time remain in milliseconds */
		float MModTimeRemainMS;

		/** \brief	The modifier */
		UPawnStatMod* MMod;
	};

	TMap<FString, UStatModTracker> MStatModifiers;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPawnStat* GetCurrentStat() const;

	/**
	 * \fn	void UPawnStatComponent::EnableMod(UPawnStatMod* Mod);
	 *
	 * \brief	Internal function used to enable a mod. You should never find yourself calling this
	 * function directly.
	 *
	 * \author	Jaymie
	 * \date	3/14/2019
	 *
	 * \param [in]	Mod	If non-null, the modifier.
	 */
	void EnableMod(UPawnStatMod* Mod);

	/**
	 * \fn	void UPawnStatComponent::DisableMod(UPawnStatMod* Mod);
	 *
	 * \brief	Internal function used to disable a mod. You should never find yourself calling this
	 * function directly.
	 *
	 * \author	Jaymie
	 * \date	3/14/2019
	 *
	 * \param [in]	Mod	If non-null, the modifier.
	 */
	void DisableMod(UPawnStatMod* Mod);

	/**
	 * \fn	void UPawnStatComponent::SwitchState();
	 *
	 * \brief	Switches the current state of the FSM
	 *
	 * \author	Jaymie
	 * \date	3/14/2019
	 */
	UFUNCTION(BlueprintCallable)
	void SwitchState();
};
