// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Items/Mods/PawnStatMod.h"
#include "PawnStat.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class VEHICLEMOVEMENT_API UPawnStat : public UObject
{
	GENERATED_BODY()

	friend class USpeedCapMod;
	friend class UItemSpeedCapMod;
	
protected:
	UPROPERTY(BlueprintReadWrite)
	/** \brief	The health factor */
	float MHealthFactor;

	UPROPERTY(BlueprintReadWrite)
	/** \brief	The maximum speed factor */
	float MMaxSpeedFactor;

	UPROPERTY(BlueprintReadWrite)
	/** \brief	The minimum speed factor */
	float MMinSpeedFactor;

	UPROPERTY(BlueprintReadWrite)
	/** \brief	The current speed */
	float MCurrentSpeed;

public:
	UPawnStat() = default;

	/**
	 * \fn	void UPawnStat::Construct(const float HealthFactor, const float MaxSpeedFactor, const float MinSpeedFactor);
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
	UFUNCTION(BlueprintCallable)
	void ConstructPawnStat(const float HealthFactor, const float MaxSpeedFactor, const float MinSpeedFactor);

	/**
	 * \fn	float UPawnStat::GetHealthFactor() const;
	 *
	 * \brief	Gets health factor
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \returns	The health factor.
	 */
	UFUNCTION(BlueprintCallable)
	float GetHealthFactor() const;

	/**
	 * \fn	float UPawnStat::GetMaxSpeedFactor() const;
	 *
	 * \brief	Gets maximum speed factor
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \returns	The maximum speed factor.
	 */
	UFUNCTION(BlueprintCallable)
	float GetMaxSpeedFactor() const;

	/**
	 * \fn	float UPawnStat::GetMinSpeedFactor() const;
	 *
	 * \brief	Gets minimum speed factor
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \returns	The minimum speed factor.
	 */
	UFUNCTION(BlueprintCallable)
	float GetMinSpeedFactor() const;

	/**
	 * \fn	float UPawnStat::GetCurrentSpeed() const;
	 *
	 * \brief	Gets current speed
	 *
	 * \author	Jaymie
	 * \date	2/28/2019
	 *
	 * \returns	The current speed.
	 */
	UFUNCTION(BlueprintCallable)
	float GetCurrentSpeed() const;

	/**
	 * \fn	void UPawnStat::SetCurrentSpeed();
	 *
	 * \brief	Sets current speed
	 *
	 * \author	Jaymie
	 * \date	2/28/2019
	 */
	UFUNCTION(BlueprintCallable)
	void SetCurrentSpeed(const float NewSpeed);

	/**
	 * \fn	void UPawnStat::AppendCurrentSpeed(const float Amount);
	 *
	 * \brief	Appends a current speed
	 *
	 * \author	Jaymie
	 * \date	2/28/2019
	 *
	 * \param	Amount	The amount.
	 */
	UFUNCTION(BlueprintCallable)
	void AppendCurrentSpeed(const float Amount);

	/**
	 * \fn	virtual void UPawnStat::AcceptEnableMod(const UPawnStatMod& Mod) = 0;
	 *
	 * \brief	Visitor for enable modifier
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \param	Mod	The modifier.
	 */
	virtual void AcceptEnableMod(UPawnStatMod* Mod) {};

	/**
	 * \fn	virtual void UPawnStat::AcceptDisableMod(const UPawnStatMod& Mod) = 0;
	 *
	 * \brief	Visitor for disable modifier
	 *
	 * \author	Jaymie
	 * \date	2/18/2019
	 *
	 * \param	Mod	The modifier.
	 */
	virtual void AcceptDisableMod(UPawnStatMod* Mod) {};
};
