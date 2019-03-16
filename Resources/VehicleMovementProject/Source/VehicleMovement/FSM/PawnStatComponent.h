// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../PawnStatMod.h"
#include "PawnState.h"
#include "PawnStatComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VEHICLEMOVEMENT_API UPawnStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
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

	// Sets default values for this component's properties
	UPawnStatComponent();

protected:
	UPROPERTY()
	APawnState* CurrentState;

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
		const UPawnStatMod* MMod;
	};

	TMap<int32, UStatModTracker> MStatModifiers;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	APawnState* GetCurrentState() const;

	UFUNCTION(BlueprintCallable)
	void SwitchState(APawnState* NewState);

	void EnableMod(const UPawnStatMod* Mod);

	void DisableMod(const UPawnStatMod* Mod);
};
