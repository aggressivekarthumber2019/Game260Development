// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../PawnStatMod.h"
#include "PawnState.h"
#include "DelegateCombinations.h"
#include "PawnStatComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMaxSpeedChangeCallback);


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VEHICLEMOVEMENT_API UPawnStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** \brief callback */
	UPROPERTY()
	FMaxSpeedChangeCallback OnMaxSpeedChanged;

	/** \brief	The floating pawn movements max speed value. Can be changed in blueprints and editor
	/** \author Mike, Jaymie */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Stats")
	float VehiclePawnMaxSpeed;

	/** \brief	The floating pawn movements acceleration value. Can be changed in blueprints and editor
	/** \author Mike, Jaymie */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Stats")
	float VehiclePawnAcceleration;

	/** \brief	The floating pawn movements deceleration value. Can be changed in blueprints and editor
	/** \author Mike, Jaymie */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Stats")
	float VehiclePawnDeceleration;

	/** \brief	The floating pawn movements max speed value. Can be changed in blueprints and editor
	/** \author Mike, Jaymie */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Stats")
	float VehiclePawnBoostSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Stats")
	float VehicleSpecialMeter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Stats")
	float VehicleSpecialRefillRate;

	// Sets default values for this component's properties
	UPawnStatComponent();

protected:
	UPROPERTY()
	UPawnState* CurrentState;

	UPROPERTY()
	TArray<UPawnStatMod*> Inventory;

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

	TMap<FName, UStatModTracker> MStatModifiers;

	TArray<FName> MRemoveList;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	UPawnState* GetCurrentState() const;

	UFUNCTION(BlueprintCallable)
	void SwitchState(UPawnState* NewState);

	void EnableMod(UPawnStatMod* Mod);

	void DisableMod(UPawnStatMod* Mod);

	UFUNCTION(BlueprintCallable)
	void AddItem(UPawnStatMod* Mod);

	UFUNCTION(BlueprintCallable)
	void SetMaxSpeed(const float Speed);
};