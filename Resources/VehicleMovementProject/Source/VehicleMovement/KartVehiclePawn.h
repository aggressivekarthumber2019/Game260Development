// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "KartVehiclePawn.generated.h"

/**
* Blueprintable: You can make blueprints out of this class
*
* BlueprintType: This class is accessible in blueprints
*/
 
UCLASS(BlueprintType, Blueprintable)
class VEHICLEMOVEMENT_API AKartVehiclePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AKartVehiclePawn();

	/////////////////////////////////////////////////
	///// DEBUGGING VARIABLES AND METHODS ///////////
	/////////////////////////////////////////////////

	/** DEBUG MODE - If this is true, it will display on screen debug messages*/
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Vehicle Parts | Debug")
	bool bShouldDisplayOnScreenDebug = false;

	UFUNCTION(BlueprintCallable, Category = "Vehicle Parts | Debug")
	void SetDebugModeEnabled(bool bDebugOn) { bShouldDisplayOnScreenDebug = bDebugOn; };

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Vehicle Parts | Debug")
	bool bControllerTestMode = true;


	////////////////////////////////////////////////
	////// VEHICLE COMPONENTS //////////////////////
	////////////////////////////////////////////////

	/** Sarfaraz: Vehicle with a mesh component */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class USkeletalMeshComponent* SkeletalMeshComponent;

	/** Mike: Box Collider that represents the body of the car */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class UBoxComponent* CarBoxCollider;


	//////// Wheel Skeletal Meshes ////////

	/** Mike: Skeletal mesh comp for the front left wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class UStaticMeshComponent* FLWheelStaticMesh;

	/** Mike: Skeletal mesh comp for the front right wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class UStaticMeshComponent* FRWheelStaticMesh;

	/** Mike: Skeletal mesh comp for the back left wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class UStaticMeshComponent* BLWheelStaticMesh;

	/** Mike: Skeletal mesh comp for the back right wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class UStaticMeshComponent* BRWheelStaticMesh;


	//////// Wheel Colliders ////////

	/** Mike: Sphere component for the front left wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class USphereComponent* FLWheelSphereCollider;

	/** Mike: Sphere component for the front right wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class USphereComponent* FRWheelSphereCollider;

	/** Mike: Sphere component for the back left wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class USphereComponent* BLWheelSphereCollider;

	/** Mike: Sphere component for the back right wheel */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Skeleton")
	class USphereComponent* BRWheelSphereCollider;

	//////// Movement Comps ////////////

	/** Sarfaraz: Vehicle Movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Movement Component")
	class UFloatingPawnMovement* PawnMovementComponent;

	/** Jaymie: Pawn stat component use to track vehicle stats and all of its buffs */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Movement Component")
	class UPawnStatComponent* PawnStatComponent;

	/** Text component for the In-Car speed */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Movement Component")
	class UTextRenderComponent* CarSpeedText;

	///////////////////////////////////////
	//////// CAMERA COMPONENTS ////////////
	///////////////////////////////////////

	/** Sarfaraz: Camera component of the car */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Camera")
	class UCameraComponent* CameraComponent;

	/** Sarfaraz: Controls camera delay and movement behind the car */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Camera")
	class USpringArmComponent* CameraSpringArm;

	/** Mike: The public offset of the camera that can be set in the editor. Could also be used for changing the camera angle while playing the game */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Camera")
	FVector SpringArmCameraOffset;

	/** Mike: The public rotation of the camera that can be set in the editor. Could also be used for changing the camera rotation while playing the game */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Camera")
	FRotator SpringArmCameraRotation;

	/** Mike: The public Field of View of the third person camera. Could also be used for changing the FOV while playing the game */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Camera")
	float ThirdPersonFOV;


	//////////////////////////////////////////////
	////// INPUT VARIABLES  //////////////////////
	/////////////////////////////////////////////

	/** Mike: This is the minimum amount of input that can be applied to the cars speed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
    int CurrentCarSpeedReadable;
	
	/** Mike: This is the minimum amount of input that can be applied to the cars speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float InputMinSpeedAmount;

	/** Mike: This is the maximum amount of input that can be applied to the cars speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float InputMaxSpeedAmount;

	/** Mike: This is the max turning rate for the car */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float InputTurnRateLimit;

	/** Mike: This is the braking speed of the car */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float BrakeSpeed;

	/** Mike: This is the braking speed of the car */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float SlowCarSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float CurrentVehicleSpecialMeter;

	/** Mike: This is the braking speed of the car */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle Parts | Car Stats")
	float SlowCarTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Parts")
	float FrameRate;

	// Timer function
	FTimerHandle LoopTimerHandle;
	FTimerHandle LoopSpeedometer;
	
	/** Mike: Setter function for current speed */
	UFUNCTION(BlueprintCallable, Category = "Vehicle Parts | Setter")
	void SetCurrentSpeedAmount(float val) { InputCurrentSpeedAmount = val; }

	/** Mike: Setter function for current turn amount */
	UFUNCTION(BlueprintCallable, Category = "Vehicle Parts | Setter")
	void SetCurrentTurnAmount(float val) { InputCurrenTurnAmount = val; }

	/** Mike: Getter function for current speed */
	UFUNCTION(BlueprintCallable, Category = "Vehicle Parts | Getter")
	float GetCurrentSpeedAmount() { return InputCurrentSpeedAmount;  }

	/** Mike: Getter function for current turn amount */
	UFUNCTION(BlueprintPure, Category = "Vehicle Parts | Getter")
	float GetCurrentTurnAmount() { return InputCurrenTurnAmount; }

	/** Mike: Getter function for if the character can move */
	UFUNCTION(BlueprintCallable, Category = "Vehicle Parts | Getter")
	bool GetCanMove() { return canMove; }

	UFUNCTION(BlueprintPure, Category = "Vehicle Parts | Getter")
	bool GetIsBraking() { return bIsBraking; }

	UFUNCTION(BlueprintPure, Category = "Vehicle Parts | Getter")
	bool GetIsGoingForward() { return bIsGoingForward; }

private:

	// Mike: String that displays the speed of the car
	FString SpeedometerString;

	// Mike: The current speed and turning rate of the car
	float InputCurrentSpeedAmount;

	float InputCurrenTurnAmount;

	float AirControlXValue;

	// Mike: Boolean for if the car is braking or not
	bool bIsBraking;

	// Mike: Boolean for if the car is going forwards (true) or backwards (false)
	bool bIsGoingForward;

	// Sarfaraz: Boolean to determine if the car can move or not
	bool canMove;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Mike: Set Speedometer
	void UpdateSpeedometer();

	//////////////////
	// CAR MOVEMENT
	//////////////////

	// Movement on x and y direction method
	UFUNCTION(BlueprintCallable)
	void MoveX(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void MoveY(float AxisValue);

	UFUNCTION()
	void MoveXCallBack(float AxisValue);

	UFUNCTION()
	void MoveYCallBack(float AxisValue);

	// Movement on x and y direction method
	UFUNCTION(BlueprintCallable)
	void AirControl(float AxisValue);

	/** Mike: Called when the user brakes */
	UFUNCTION(BlueprintCallable)
	void CarBrakeOn();

	/** Sarfaraz: Called when the user stops braking */
	UFUNCTION(BlueprintCallable)
	void CarBrakeOff();
	
	//Raycast to check if the car is on the ground
	bool RayCastGround();

	/** Sarfaraz: This method is called on a timer at a constant rate*/
	void FixedUpdate();

	// Mike: Method used to move the car forward
	void MoveCar();

	//BOOSTING -------------------------------------------------------------
	/** Sarfaraz: When the user presses the boost key, this method is called */
	UFUNCTION(BlueprintCallable)
	void BoostPress();
	/** Sarfaraz: When the user releases the boost, this method is called */
	UFUNCTION(BlueprintCallable)
	void BoostRelease();
	UFUNCTION()
	void BoostPressCallBack();
	UFUNCTION()
	void BoostReleaseCallBack();


	///////////
	// ITEMS //
	///////////

	// Mike: Function for items
	UFUNCTION()
	void UseItemCode();

	/** Jaymie: Max speed changed callback */
	UFUNCTION(BlueprintCallable)
	void MaxSpeedChangedCallBack();

	/** Jaymie: Max speed changed callback */
	UFUNCTION(BlueprintCallable)
	void MaxSpeedChangedCallBack();

	/** Jaymie: Driftruptor logic */
	UFUNCTION(BlueprintCallable)
	void DriftRuptor(const float Amount);

	/** Jaymie: Driftruptor end logic */
	UFUNCTION(BlueprintCallable)
	void SetCurrentRotationAmount(const float Amount);

	/** Jaymie: Booster */
	void RefillSpecialMeter();
};