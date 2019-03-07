// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnStat.h"
#include "Delegates/Delegate.h"
#include "CarStat.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAccelerationChangedSignature);

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class VEHICLEMOVEMENT_API UCarStat : public UPawnStat
{
	GENERATED_BODY()

		friend class USpeedCapMod;
	
protected:
	UPROPERTY(BlueprintReadWrite)
		/** \brief	The handle factor */
		float MHandleFactor;

	UPROPERTY(BlueprintReadWrite, BlueprintSetter = SetAccelerationFactor)
		/** \brief	The acceleration factor */
		float MAccelerationFactor;

	UPROPERTY(BlueprintReadWrite)
		/** \brief	The weight factor */
		float MWeightFactor;

	/**
	 * \fn	void UCarStat::SetAccelerationFactor();
	 *
	 * \brief	Sets acceleration factor
	 *
	 * \author	Jaymie
	 * \date	2/28/2019
	 */
	UFUNCTION(BlueprintCallable)
	void SetAccelerationFactor(const float AccelerationFactor);
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnAccelerationChangedSignature OnAccelerationChanged;

	UFUNCTION(BlueprintCallable)
	/**
		 * \fn	void UCarStat::Construct(const float HealthFactor, const float MaxSpeedFactor, const float MinSpeedFactor);
		 *
		 * \brief	Constructs
		 *
		 * \author	Jaymie
		 * \date	2/18/2019
		 *
		 * \param	HealthFactor  	The health factor.
		 * \param	MaxSpeedFactor	The maximum speed factor.
		 * \param	MinSpeedFactor	The minimum speed factor.
		 */
	void ConstructCarStat
	(
		const float HealthFactor,
		const float MaxSpeedFactor,
		const float MinSpeedFactor,
		const float HandleFactor,
		const float AccelerationFactor,
		const float WeightFactor
	);

	/**
	 * \fn	float UCarStat::GetHandleFactor() const;
	 *
	 * \brief	Gets handle factor
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \returns	The handle factor.
	 */
	float GetHandleFactor() const;

	/**
	 * \fn	float UCarStat::GetAccelerationFactor() const;
	 *
	 * \brief	Gets acceleration factor
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \returns	The acceleration factor.
	 */
	float GetAccelerationFactor() const;

	/**
	 * \fn	float UCarStat::GetWeightFactor() const;
	 *
	 * \brief	Gets weight factor
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \returns	The weight factor.
	 */
	float GetWeightFactor() const;


	virtual void AcceptEnableMod(UPawnStatMod* Mod) override;


	virtual void AcceptDisableMod(UPawnStatMod* Mod) override;

};