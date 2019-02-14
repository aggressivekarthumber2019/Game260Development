// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AVehiclePawn.generated.h"

UCLASS()
class VEHICLEMOVEMENT_API AAVehiclePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAVehiclePawn();


	// Vehicle object mesh component
	/** Vehicle with a mesh component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		class UStaticMeshComponent* MeshComponent;

	// Camera component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vehicle Parts")
		class UCameraComponent* CameraComponent;

	// Camera spring arm component
	/** Controls camera delay */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vehicle Parts")
		class USpringArmComponent* CameraSpringArm;

	// Movement component
	/** Vehicle Movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		class UFloatingPawnMovement* PawnMovementComponent;

	// distance for ray cast
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float RCDistance;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float MinSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float normalMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float boostMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float PawnNormalSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float PawnBoostSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float frameRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		float PawnAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Wheels")
		class USceneComponent* WheelBaseFR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Wheels")
		class USceneComponent* WheelBaseFL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Wheels")
		class USceneComponent* WheelBaseBR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Wheels")
		class USceneComponent* WheelBaseBL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		class UStaticMeshComponent* WheelFR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		class UStaticMeshComponent* WheelFL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		class UStaticMeshComponent* WheelBR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts")
		class UStaticMeshComponent* WheelBL;

	
	FTimerHandle LoopTimerHandle;
	
private:
	float MaxSpeed;
	float currentSpeed;
	float currenTurn;
	float velocity;
	float TurnVel;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement on x and y direction method
	void MoveX(float AxisValue);
	void MoveY(float AxisValue);
	void RayCastGround();
	void MoveCar();
	void ReducedValues();
	void BoostPress();
	void BoostRelease();
	void FixedUpdate();

};
