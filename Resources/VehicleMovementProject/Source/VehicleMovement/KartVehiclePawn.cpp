// Fill out your copyright notice in the Description page of Project Settings.

#include "KartVehiclePawn.h"

#include "Engine/Engine.h"
#include "Engine/World.h"

#include "Components/InputComponent.h"
#include "Components/TextRenderComponent.h"
#include "DrawDebugHelpers.h"

#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"

#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"

#include "Kismet/KismetSystemLibrary.h"

#include "TimerManager.h"
#include "FSM/PawnStatComponent.h"


// Sets default values
AKartVehiclePawn::AKartVehiclePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/////////////////////////
	// BOX COMPONENT SETUP //-------------------------------------------------------------------
	/////////////////////////
	
	// Mike: Create the box component for this class
	CarBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Root Box Collider"));

	// Mike: Set this box to be the root component
	SetRootComponent(CarBoxCollider);

	// Mike: Change the size of the box
	CarBoxCollider->SetBoxExtent(FVector(60.0f, 45.0f, 30.0f));

	// Mike: Set the center of mass of the object to be at the bottom of the box extend 
	CarBoxCollider->SetCenterOfMass(FVector(0.0f, 0.0f, -CarBoxCollider->GetScaledBoxExtent().Z));

	// Mike: Enable physics for the box
	CarBoxCollider->SetSimulatePhysics(true);

	// Mike: Make a const reference to the custom collision channels made in the editor
	const ECollisionChannel Car_Body_Channel = ECC_GameTraceChannel1;
	const ECollisionChannel Car_Wheel_Channel = ECC_GameTraceChannel2;
	const ECollisionChannel Car_Mesh_Channel = ECC_GameTraceChannel3;
	const ECollisionChannel Item_Channel = ECC_GameTraceChannel4;

	// Mike: Setup the collision response of this car. It should be set to query and physics collisions mode
	CarBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); 
	
	// Mike: Set set the collision channel of this box to be equal to the car body channel
	CarBoxCollider->SetCollisionObjectType(Car_Body_Channel);
	
	// Mike: Set the collision response to all channels to be block (it will hit anything)
	CarBoxCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	
	// Mike: Change it's response to two individual channels, ignore collisions with the wheel and mesh of the car
	CarBoxCollider->SetCollisionResponseToChannel(Car_Wheel_Channel, ECollisionResponse::ECR_Ignore);
	CarBoxCollider->SetCollisionResponseToChannel(Car_Mesh_Channel, ECollisionResponse::ECR_Ignore); 

	// Mike: Add the item collision response channel to the main box collider of the car
	CarBoxCollider->SetCollisionResponseToChannel(Item_Channel, ECollisionResponse::ECR_Overlap);

	// Mike: DEBUG ONLY - Show the Box Collider in the game
	//CarBoxCollider->SetHiddenInGame(false);

	/////////////////////////
	// SKELETAL MESH SETUP //-------------------------------------------------------------------
	/////////////////////////
	
	// Mike: Create the USkeletalMeshComponent and give it a reasonable name
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vehicle SkeletalMesh"));
	
	// Mike: Attach this component to the root component 
	SkeletalMeshComponent->SetupAttachment(RootComponent);

	// Mike: Setup the collision responses of this class, it will ignore all collisions across the board
	SkeletalMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SkeletalMeshComponent->SetCollisionObjectType(Car_Mesh_Channel);
	SkeletalMeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	//////////////////////////
	// WHEEL COLLIDER SETUP //-------------------------------------------------------------------
	//////////////////////////

	// Mike: Setup the FRONT LEFT Wheel
	// Mike:Create default object
	FLWheelSphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Front Left Wheel Collider"));
	
	// Mike: Set the size of the sphere
	FLWheelSphereCollider->SetSphereRadius(20.0f); 
	
	// Mike: Set the collision profile of this car to CarWheel
	FLWheelSphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	FLWheelSphereCollider->SetCollisionObjectType(Car_Wheel_Channel);
	
	// Mike: Set the collisions response to all channels to be block
	FLWheelSphereCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	
	// Mike: Set the collisions response to the body and mesh challenge to ignore (this is the body of the car)
	FLWheelSphereCollider->SetCollisionResponseToChannel(Car_Body_Channel, ECollisionResponse::ECR_Ignore);
	FLWheelSphereCollider->SetCollisionResponseToChannel(Car_Mesh_Channel, ECollisionResponse::ECR_Ignore);
	
	// Mike: Attach to the skeletal Mesh
	FLWheelSphereCollider->SetupAttachment(CarBoxCollider);
	
	// Mike: DEBUG ONLY - Show the Box Collider in the game
	FLWheelSphereCollider->SetHiddenInGame(false);

	// Mike: Setup the FRONT RIGHT Wheel - same parameters as the front left but the location is different
	FRWheelSphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Front Right Wheel Collider"));
	FRWheelSphereCollider->SetSphereRadius(20.0f);
	FRWheelSphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	FRWheelSphereCollider->SetCollisionObjectType(Car_Wheel_Channel);
	FRWheelSphereCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	FRWheelSphereCollider->SetCollisionResponseToChannel(Car_Body_Channel, ECollisionResponse::ECR_Ignore);
	FRWheelSphereCollider->SetCollisionResponseToChannel(Car_Mesh_Channel, ECollisionResponse::ECR_Ignore);
	FRWheelSphereCollider->SetupAttachment(CarBoxCollider);
	FRWheelSphereCollider->SetHiddenInGame(false);

	// Mike: Setup the BACK LEFT Wheel - same parameters as the front left but the location is different
	BLWheelSphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Back Left Wheel Collider"));
	BLWheelSphereCollider->SetSphereRadius(20.0f);
	BLWheelSphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BLWheelSphereCollider->SetCollisionObjectType(Car_Wheel_Channel);
	BLWheelSphereCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	BLWheelSphereCollider->SetCollisionResponseToChannel(Car_Body_Channel, ECollisionResponse::ECR_Ignore);
	BLWheelSphereCollider->SetCollisionResponseToChannel(Car_Mesh_Channel, ECollisionResponse::ECR_Ignore);
	BLWheelSphereCollider->SetupAttachment(CarBoxCollider);
	BLWheelSphereCollider->SetHiddenInGame(false);

	// Mike: Setup the BACK RIGHT Wheel - same parameters as the front left but the location is different
	BRWheelSphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Back Right Wheel Collider"));
	BRWheelSphereCollider->SetSphereRadius(20.0f);
	BRWheelSphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BRWheelSphereCollider->SetCollisionObjectType(Car_Wheel_Channel);
	BRWheelSphereCollider->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	BRWheelSphereCollider->SetCollisionResponseToChannel(Car_Body_Channel, ECollisionResponse::ECR_Ignore);
	BRWheelSphereCollider->SetCollisionResponseToChannel(Car_Mesh_Channel, ECollisionResponse::ECR_Ignore);
	BRWheelSphereCollider->SetupAttachment(CarBoxCollider);
	BRWheelSphereCollider->SetHiddenInGame(false);


	///////////////////////////
	// WHEEL SKEL MESH SETUP //-------------------------------------------------------------------
	///////////////////////////

	//////////////////////// Mike: FRONT LEFT  //////////////////////
	// Mike: Create the default object 
	FLWheelStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Front Left Wheel Mesh"));

	// Mike: Setup the collision responses of this class, it will ignore all collisions across the board
	FLWheelStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FLWheelStaticMesh->SetCollisionObjectType(Car_Mesh_Channel);
	FLWheelStaticMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	// Mike: Attach this wheel to its associated wheel collider 
	FLWheelStaticMesh->SetupAttachment(FLWheelSphereCollider);

	//////////////////////// Mike: FRONT RIGHT  //////////////////////
	FRWheelStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Front Right Wheel Mesh"));
	FRWheelStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FRWheelStaticMesh->SetCollisionObjectType(Car_Mesh_Channel);
	FRWheelStaticMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	FRWheelStaticMesh->SetupAttachment(FRWheelSphereCollider);

	//////////////////////// Mike: BACK LEFT  //////////////////////
	BLWheelStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Back Left Wheel Mesh"));
	BLWheelStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BLWheelStaticMesh->SetCollisionObjectType(Car_Mesh_Channel);
	BLWheelStaticMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	BLWheelStaticMesh->SetupAttachment(BLWheelSphereCollider);

	//////////////////////// Mike: BACK RIGHT //////////////////////
	BRWheelStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Back Right Wheel Mesh"));
	BRWheelStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BRWheelStaticMesh->SetCollisionObjectType(Car_Mesh_Channel);
	BRWheelStaticMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	BRWheelStaticMesh->SetupAttachment(BRWheelSphereCollider);


	/////////////////////////////
	// CAMERA SPRING ARM SETUP //-------------------------------------------------------------------
	/////////////////////////////

	// Sarfaraz: Create the default object of a spring arm component
	CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera SpringArm"));
	
	// Sarfaraz: Add an offset to the spring arm component, placing it behind the camera
	SpringArmCameraOffset = FVector(0.0f, 0.0f, 56.0f);
	CameraSpringArm->TargetOffset = SpringArmCameraOffset;
	
	// Sarfaraz: Add a rotation to the spring arm component, making it face down a bit
	SpringArmCameraRotation = FRotator(0.0f, 0.0f, 0.0f); //Remove this line if you want to customize the values in blueprints
	CameraSpringArm->SetRelativeRotation(SpringArmCameraRotation);
	
	// Sarfaraz: Set the length of the arm
	CameraSpringArm->TargetArmLength = 200.0f;
	
	// Sarfaraz: Enable rotation lag with the camera
	CameraSpringArm->bEnableCameraRotationLag = true;
	
	// Sarfaraz: Set the rotation lag of the camera, making it slowly follow the vehicle instead of being rigidly attached to it
	CameraSpringArm->CameraRotationLagSpeed = 7.0f;
	
	// Sarfaraz: Set the arm to not inherit the pitch of the object it's following
	CameraSpringArm->bInheritPitch = false;
	
	// Sarfaraz: Set the arm to not inherit the roll of the object it's following
	CameraSpringArm->bInheritRoll = false;
	
	// Sarfaraz: Attach the camera to the root component of this object (the skeletal mesh)
	CameraSpringArm->SetupAttachment(CarBoxCollider);

	////////////////////
	//// CAMERA SETUP //-------------------------------------------------------------------
	////////////////////

	// Sarfaraz: Create the Camera component of the car and call it third person camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Third Person Camera"));
	
	// Sarfaraz: Attach the camera to the camera spring arm
	CameraComponent->SetupAttachment(CameraSpringArm, USpringArmComponent::SocketName);
	
	CameraComponent->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// Sarfaraz: Disable this camera from using the pawn control rotation
	CameraComponent->bUsePawnControlRotation = false;
	
	// Sarfaraz: Set the camera field of view
	ThirdPersonFOV = 90.0f; //REMOVE this if we want to set it at runtime / in blueprints
	CameraComponent->FieldOfView = ThirdPersonFOV;


	/////////////////////////
	//// SPEEDOMETER SETUP //-------------------------------------------------------------------
	/////////////////////////
	
	// Mike: Create a simple text renderer for the car speed
	CarSpeedText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Car Speed"));
	
	// Mike: Attach the text to the root component of the car
	CarSpeedText->SetupAttachment(RootComponent);

	// Mike: Rotate the text to face the camera
	CarSpeedText->SetWorldRotation(FRotator(0.0f, 180.0f, 0.0f));
	
	// Mike: Change the location of the text to face the camera
	CarSpeedText->SetRelativeLocation(FVector(-120.0f, -85.0f, 70.0f));

	/////////////////////////////////////
	//// PAWN STAT COMPONENT SETUP //-------------------------------------------------------------------
	/////////////////////////////////////

	PawnStatComponent = CreateDefaultSubobject<UPawnStatComponent>(TEXT("Car Stat Component"));

	/////////////////////////////////////
	//// PAWN MOVEMENT COMPONENT SETUP //-------------------------------------------------------------------
	/////////////////////////////////////

	// Sarfaraz: This is the movement component of the car, it does not need to be attached to the game object
	PawnMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Car Movement Component"));

	///////////////////////////////////
	//// DEFAULT VALUES FOR VEHICLES //-------------------------------------------------------------------
	///////////////////////////////////

	// Sarfaraz: Set the inputs current speed and turning rate to zero
	InputCurrentSpeedAmount = 0.0f;

	InputCurrenTurnAmount = 0.0f;

	// Sarfaraz: Setup the default values for the game's frame rate
	FrameRate = 0.0067f;
	canMove = true;
	bIsBraking = false;
}

void AKartVehiclePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AKartVehiclePawn::OnConstruction(const FTransform & T)
{
	// Mike: Super is first so it calls the blueprints Construction script first
	Super::OnConstruction(T);

	// Mike: Then set the offset using the C++
	// Mike: Add a small offset to the skeletal mesh so it is at the right level
	SkeletalMeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, (VehicleOffsetZ - 21.0f)));

	// Mike: Add an offset so it's in the right location
	FLWheelSphereCollider->SetRelativeLocation(FVector(50.0f, -28.0f, VehicleOffsetZ));
	FRWheelSphereCollider->SetRelativeLocation(FVector(50.0f, 28.0f, VehicleOffsetZ));
	BLWheelSphereCollider->SetRelativeLocation(FVector(-52.0f, -31.0f, VehicleOffsetZ));
	BRWheelSphereCollider->SetRelativeLocation(FVector(-52.0f, 31.0f, VehicleOffsetZ));

}

void AKartVehiclePawn::BeginPlay()
{
	// Mike: Call the parents begin play to ensure everything is initalized properly
	Super::BeginPlay();

	// Mike: DEBUG
	FString acceleration = FString::SanitizeFloat(PawnMovementComponent->Acceleration);
	FString deceleration = FString::SanitizeFloat(PawnMovementComponent->Deceleration);
	FString maxSpeed = FString::SanitizeFloat(PawnMovementComponent->MaxSpeed);

	// Mike: Debug Messages
	if (bShouldDisplayOnScreenDebug)
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Purple, "Vehicle: Acceleration = " + acceleration);
	if (bShouldDisplayOnScreenDebug)
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Purple, "Vehicle: Deceleration = " + deceleration);
	if (bShouldDisplayOnScreenDebug)
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Purple, "Vehicle: Max Speed = " + maxSpeed);

	/////////////////////////////////////
	//// PAWN MOVEMENT COMPONENT RUNTIME SETUP //-------------------------------------------------------------------
	/////////////////////////////////////

	// Mike: Set the acceleration of the movement component
	PawnMovementComponent->Acceleration = PawnStatComponent->VehiclePawnAcceleration;

	// Mike: Set the acceleration of the movement component
	PawnMovementComponent->Deceleration = PawnStatComponent->VehiclePawnDeceleration;

	// Mike: Set the acceleration of the movement component
	PawnMovementComponent->MaxSpeed = PawnStatComponent->VehiclePawnMaxSpeed;

	//This method will begin a timer which will run at at 60 frames per second regardless of the machine
	GetWorld()->GetTimerManager().SetTimer(LoopTimerHandle, this, &AKartVehiclePawn::FixedUpdate, FrameRate, true);

	GetWorld()->GetTimerManager().SetTimer(LoopSpeedometer, this, &AKartVehiclePawn::UpdateSpeedometer, 0.1f, true);

	// Register callback
	PawnStatComponent->OnMaxSpeedChanged.AddDynamic(this, &AKartVehiclePawn::MaxSpeedChangedCallBack);
}

void AKartVehiclePawn::FixedUpdate()
{
	// Sarfaraz: If the car is on the ground, then reduce the speed values and move the car
	if (RayCastGround())
	{
		canMove = true;
	}

	// Mike: If the car is not on the ground, then set the boolean can move to false
	else
	{
		canMove = false;
	}

	// Mike: Always move car regardless of the position
	MoveCar();
}

void AKartVehiclePawn::MaxSpeedChangedCallBack()
{
	PawnMovementComponent->MaxSpeed = PawnStatComponent->VehiclePawnMaxSpeed;
}

void AKartVehiclePawn::DriftRuptor(const float Amount)
{
	AddActorLocalRotation(FRotator(0, Amount, 0));
}

void AKartVehiclePawn::SetCurrentRotationAmount(const float Amount)
{
	InputCurrenTurnAmount = Amount;
}

void AKartVehiclePawn::RefillSpecialMeter()
{
	CurrentVehicleSpecialMeter += PawnStatComponent->VehicleSpecialRefillRate;
	if (CurrentVehicleSpecialMeter > PawnStatComponent->VehicleSpecialMeter)
	{
		CurrentVehicleSpecialMeter = PawnStatComponent->VehicleSpecialMeter;
	}
}

void AKartVehiclePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Sarfaraz: Called to bind functionality to input
	// Sarfaraz: Call the parent class's Setup Player Input Component
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Sarfaraz: Checking for Gameplay key bindings
	check(PlayerInputComponent);

	// Sarfaraz: Call the MoveX method with keys bind to 'MoveForward' 
	// Mike: This is currently bound to W (Forwards) and S (Backwards)
	// Sarfaraz: This is an axis so to get move backwards, simply add a key that adds a negative value to this method
	PlayerInputComponent->BindAxis("MoveForward", this, &AKartVehiclePawn::MoveXCallBack); 

	// Sarfaraz: call the MoveY method with keys bind to 'MoveRight'. 
	// Mike: This is currently bound to A (Left) and D (Right)
	// Sarfaraz: This is an axis so to get move left, simply add a key that adds a negative value to this method
	PlayerInputComponent->BindAxis("MoveRight", this, &AKartVehiclePawn::MoveYCallBack);  
	
	// Sarfaraz: Bind the method call "Boost Press" to the action "Boost" when the action is "Pressed"
	// Mike: This is currently bound to SHIFT
	PlayerInputComponent->BindAction("Boost", IE_Pressed, this, &AKartVehiclePawn::BoostPressCallBack);

	// Sarfaraz: Bind the method call "Boost Release" to the action "Boost" when the action is "Released"
	// Mike: This is currently bound to SHIFT
	PlayerInputComponent->BindAction("Boost", IE_Released, this, &AKartVehiclePawn::BoostReleaseCallBack);

	// Mike: NEW INPUT ------------------
	// Mike: Use Item function call 
	PlayerInputComponent->BindAction("UseItem", IE_Pressed, this, &AKartVehiclePawn::UseItemCode);

	// Sarfaraz: Bind the method "Brake" to the axis "Brakes"
	PlayerInputComponent->BindAction("BrakeOn", IE_Pressed, this, &AKartVehiclePawn::CarBrakeOn);
	PlayerInputComponent->BindAction("BrakeOff", IE_Released, this, &AKartVehiclePawn::CarBrakeOff);

	// Mike: Axis for AirControl
	PlayerInputComponent->BindAxis("AirControlX", this, &AKartVehiclePawn::AirControl);
}

void AKartVehiclePawn::UpdateSpeedometer()
{
    // Mike: Get the current speed of the car in INT form
    CurrentCarSpeedReadable = FMath::FloorToInt((PawnMovementComponent->Velocity.Size() / 50.0f));

    // Mike: Turn that int into a string
    SpeedometerString = FString::FromInt(CurrentCarSpeedReadable);

    // Mike: Set the car speed text
    CarSpeedText->SetText(SpeedometerString);
}   

void AKartVehiclePawn::BoostPress()
{
	//Debug Messages
	if (bShouldDisplayOnScreenDebug && GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Blue, "Vehicle: Boost pressed");
	
	// Mike: Updated, now changing the max speed of the pawn
	PawnMovementComponent->MaxSpeed = PawnStatComponent->VehiclePawnBoostSpeed;
}

void AKartVehiclePawn::BoostRelease()
{
	//Debug Messages
	if (bShouldDisplayOnScreenDebug && GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Blue, "Vehicle: Boost Released");

	// Mike: Updated, now changing the max speed of the pawn
	PawnMovementComponent->MaxSpeed = PawnStatComponent->VehiclePawnMaxSpeed;
}

void AKartVehiclePawn::BoostPressCallBack()
{
	UPawnState* CurrentState = PawnStatComponent->GetCurrentState();
	if (IsValid(CurrentState))
	{
		CurrentState->BoostPressed();
	}
}

void AKartVehiclePawn::BoostReleaseCallBack()
{
	UPawnState* CurrentState = PawnStatComponent->GetCurrentState();
	if (IsValid(CurrentState))
	{
		CurrentState->BoostRelease();
	}
}

void AKartVehiclePawn::MoveX(float AxisValue)
{
	// Mike: Set the current speed amount to be equal to the input from the keys
	InputCurrentSpeedAmount = AxisValue;
}

void AKartVehiclePawn::MoveY(float AxisValue)
{
	InputCurrenTurnAmount = AxisValue;
}

void AKartVehiclePawn::AirControl(float AxisValue)
{
	if (!canMove)
	{
		AirControlXValue = AxisValue;
		//if(bShouldDisplayOnScreenDebug)
			if (GEngine && bShouldDisplayOnScreenDebug)
				GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Red, "Air Control" + FString::SanitizeFloat(AirControlXValue));
	}
}

void AKartVehiclePawn::MoveXCallBack(float AxisValue)
{
	UPawnState* CurrentState = PawnStatComponent->GetCurrentState();
	if (IsValid(CurrentState))
	{
		CurrentState->MoveX(AxisValue);
	}
}

void AKartVehiclePawn::MoveYCallBack(float AxisValue)
{
	UPawnState* CurrentState = PawnStatComponent->GetCurrentState();
	if (IsValid(CurrentState))
	{
		CurrentState->MoveY(AxisValue);
	}
}

void AKartVehiclePawn::UseItemCode()
{
	if (GEngine && bShouldDisplayOnScreenDebug)
		GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Blue, "Using Item");
}

void AKartVehiclePawn::CarBrakeOn()
{
	bIsBraking = true;
}
void AKartVehiclePawn::CarBrakeOff()
{
	bIsBraking = false;
}

void AKartVehiclePawn::MoveCar()
{
	// Mike: Make a temporary vector that will be used to move the car
	FVector TempFowardVector;

	// Mike: Set the boolean "going forward" based on the dot product of the forward vector and the velocities safe normal
	bIsGoingForward = FVector::DotProduct(this->GetActorForwardVector(), PawnMovementComponent->Velocity.GetSafeNormal()) > 0;

	// Mike: Check if the car is currently braking
	if (bIsBraking)
	{
		// Mike: if the car is braking and the velocity of the car is nearly zero
		if (FMath::IsNearlyZero(PawnMovementComponent->Velocity.Size(), 20.0f))
		{
			// Mike:  Set both the input current speed and the actual speed of the pawn to zero
			InputCurrentSpeedAmount = 0.0f;
			PawnMovementComponent->Velocity = FVector(0.0f, 0.0f, 0.0f);
		}
		// Mike: If the speed of the car is not close to zero, check if the car is moving forward (via dot product)
		else if (bIsGoingForward)
		{
			// Mike: If the car is moving forward AND the player is holding down the gas, reduce the value 
			if (InputCurrentSpeedAmount > 0.1f)
			{
				//Mike : Slow the car down with the break
				InputCurrentSpeedAmount -= SlowCarSpeedRate;
			}
			else
			{
				// Mike: Otherwise, just set the value of the car to slow down
				InputCurrentSpeedAmount = BrakeSpeed;
			}
			
		}
		// Mike: If the car is moving backwards
		else if (!bIsGoingForward)
		{
			// Mike: Check if the speed is less than -0.1 
			if (InputCurrentSpeedAmount < -0.1f)
			{
				//Mike: If the player is backing up and pressing the brake, then slow their speed down
				InputCurrentSpeedAmount += SlowCarSpeedRate;
			}
			else
			{
				// Mike: Otherwise, their brake speed is the same
				InputCurrentSpeedAmount = -BrakeSpeed;
			}
		}
	}
	// Mike: 
	if (bShouldDisplayOnScreenDebug && GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Blue, "Actual Speed: " + FString::SanitizeFloat(PawnMovementComponent->Velocity.Size()));
		GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Red, "Current Speed: " + FString::SanitizeFloat(InputCurrentSpeedAmount));
	}

	// Sarfaraz: multiply the forward vector by the speed
	if (canMove)
	{
		// Mike: 
		TempFowardVector = FVector(CarBoxCollider->GetForwardVector().X * InputCurrentSpeedAmount, CarBoxCollider->GetForwardVector().Y * InputCurrentSpeedAmount, CarBoxCollider->GetForwardVector().Z * InputCurrentSpeedAmount);
		// Sarfaraz: set the turn speed
		AddActorLocalRotation(FRotator(0, InputCurrenTurnAmount, 0));
	}
	else
	{
		// Mike: 
		TempFowardVector = FVector(0.0f, 0.0f, -0.01f);

		// Mike: 
		AddActorLocalRotation(FRotator(AirControlXValue, 0, InputCurrenTurnAmount));
	}

	// Sarfaraz: Take the forward vector of the car and noramlize
	TempFowardVector.Normalize(1);

	// Sarfaraz: Add input to the car via add input vector
	PawnMovementComponent->AddInputVector(TempFowardVector);	
}


bool AKartVehiclePawn::RayCastGround()
{
	// Sarfaraz: Get the up vector of the car, used for 
	//FVector UpVector = GetActorUpVector();
	FVector UpVector = CarBoxCollider->GetUpVector();

	// Sarfaraz: The start of the trace will be at the cars location and below it
	//FVector startTrace = GetActorLocation() - UpVector * 13;
	FVector StartTrace = CarBoxCollider->GetComponentLocation() - UpVector;

	// Sarfaraz: The end of the trace will be a small line from the start trace and down
	FVector EndTrace = (-UpVector * 40.0f) + StartTrace;
	
	// Mike: Update hit resultt and temp AActor
	TArray<AActor*> temp;
	FHitResult hitResult;
	
	// Mike: Update line trace for complex collisions of the splines
	UKismetSystemLibrary::LineTraceSingle(GetWorld(), StartTrace, EndTrace, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), true, temp, EDrawDebugTrace::None, hitResult, true);

	// Sarfaraz: Line trace and see if anything is hit
	if (hitResult.bBlockingHit)
	{
		// Sarfaraz: If something is hit, get the actor that was hit
		AActor* hitActor = hitResult.GetActor();

		if (bShouldDebugTraceLine && GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Blue, "Hit Actor: " + hitActor->GetName());
		}

		// Sarfaraz: Check that the actor is valid and that it has the tag "Road". If it does, it's on the ground
		if (hitActor && hitActor->ActorHasTag("Road"))
		{			
			return true;
		}
	}
	if(bShouldDebugTraceLine && GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 200.0f, FColor::Blue, "Hitting Nothing!");

	return false;
}
