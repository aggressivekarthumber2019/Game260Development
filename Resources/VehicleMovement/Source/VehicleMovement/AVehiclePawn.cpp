// Fill out your copyright notice in the Description page of Project Settings.

#include "AVehiclePawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "TimerManager.h"

// Sets default values
AAVehiclePawn::AAVehiclePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Vehicle component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Vehicle Mesh"));
	SetRootComponent(MeshComponent);// make the vehicle into a root component

	// Spring arm component
	CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	CameraSpringArm->TargetOffset = FVector(0.f, 0.f, 200.f);
	CameraSpringArm->SetRelativeRotation(FRotator(-15.f, 0.f, 0.f));
	CameraSpringArm->SetupAttachment(RootComponent);
	CameraSpringArm->TargetArmLength = 600.0f;
	CameraSpringArm->bEnableCameraRotationLag = true;
	CameraSpringArm->CameraRotationLagSpeed = 7.0f;
	CameraSpringArm->bInheritPitch = false;
	CameraSpringArm->bInheritRoll = false;

	// Camera component 
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Third Person Camera"));
	CameraComponent->SetupAttachment(CameraSpringArm, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;
	CameraComponent->bUsePawnControlRotation = false;
	CameraComponent->FieldOfView = 90.0f;

	// Movement Component
	PawnMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Car Movement Component"));

	// vehicle wheel component
	WheelBaseFR = CreateDefaultSubobject<USceneComponent>(TEXT("Wheel Base Front Right"));
	WheelBaseFL = CreateDefaultSubobject<USceneComponent>(TEXT("Wheel Base Front Left"));
	WheelBaseBR = CreateDefaultSubobject<USceneComponent>(TEXT("Wheel Base Back Right"));
	WheelBaseBL = CreateDefaultSubobject<USceneComponent>(TEXT("Wheel Base Back Left"));

	WheelBaseFR->SetupAttachment(MeshComponent);
	WheelBaseFR->SetRelativeLocation(FVector(50, 50, -40));
	WheelFR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel Mesh front right"));
	WheelFR->SetupAttachment(WheelBaseFR);

	WheelBaseFL->SetupAttachment(MeshComponent);
	WheelBaseFL->SetRelativeLocation(FVector(50, -50, -40));
	WheelFL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel Mesh front left"));
	WheelFL->SetupAttachment(WheelBaseFL);

	WheelBaseBR->SetupAttachment(MeshComponent);
	WheelBaseBR->SetRelativeLocation(FVector(-50, 50, -40));
	WheelBR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel Mesh back right"));
	WheelBR->SetupAttachment(WheelBaseBR);

	WheelBaseBL->SetupAttachment(MeshComponent);
	WheelBaseBL->SetRelativeLocation(FVector(-50, -50, -40));
	WheelBL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel Mesh back left"));
	WheelBL->SetupAttachment(WheelBaseBL);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> WheelMesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	if (WheelMesh.Object)
	{
		WheelBL->SetStaticMesh(WheelMesh.Object);
	}


	// Ray Cast
	// ray cast distance
	RCDistance = 1.0f;

	// set the vehicle component
	MinSpeed = -0.5;
	currentSpeed = 0;
	currenTurn = 0;

	PawnAcceleration = 50;
	PawnDeceleration = 0.5;
	PawnBrakeDeceleration = 1000;

	PawnNormalSpeed = 5200;
	PawnBoostSpeed = 9200;
	normalMaxSpeed = 1.0;
	boostMaxSpeed = 1.5;

	frameRate = 0.0098;
	WaitTimer = 3.0f;
	canMove = true;
	gravity = -25;

}

// Called when the game starts or when spawned
void AAVehiclePawn::BeginPlay()
{
	Super::BeginPlay();
	MaxSpeed = normalMaxSpeed;
	PawnMovementComponent->MaxSpeed = PawnNormalSpeed;

	GetWorld()->GetTimerManager().SetTimer(LoopTimerHandle, this, &AAVehiclePawn::FixedUpdate, frameRate, true);
	//GetWorld()->GetTimerManager().SetTimer(StartGameTimerHandle, this, &AAVehiclePawn::GameStart, WaitTimer, false);
}

// Called every frame
void AAVehiclePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*RayCastGround();
	ReducedValues();
	MoveCar();*/
}

void AAVehiclePawn::FixedUpdate()
{
	RayCastGround();
	
	if (canMove)
	{
		ReducedValues();
		MoveCar();
	}
}

void AAVehiclePawn::GameStart()
{
	canMove = true;
	GetWorld()->GetTimerManager().ClearTimer(StartGameTimerHandle);
}
// Called to bind functionality to input
void AAVehiclePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// checking for gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AAVehiclePawn::MoveX); // call the MoveX method with keys bind to 'MoveForward'
	PlayerInputComponent->BindAxis("MoveRight", this, &AAVehiclePawn::MoveY);  // call the MoveY method with keys bind to 'MoveRight'
	PlayerInputComponent->BindAction("Boost", IE_Pressed, this, &AAVehiclePawn::BoostPress);
	PlayerInputComponent->BindAction("Boost", IE_Released, this, &AAVehiclePawn::BoostRelease);
	PlayerInputComponent->BindAxis("Brakes", this, &AAVehiclePawn::Brake);
}

void AAVehiclePawn::BoostPress()
{
	MaxSpeed = boostMaxSpeed;
	PawnMovementComponent->MaxSpeed = PawnBoostSpeed;
}
void AAVehiclePawn::BoostRelease()
{
	MaxSpeed = normalMaxSpeed;
	PawnMovementComponent->MaxSpeed = PawnNormalSpeed;
}

// Movement on x direction
void AAVehiclePawn::MoveX(float AxisValue)
{
	velocity = AxisValue;
	if (AxisValue > 0)
	{
		currentSpeed += PawnAcceleration * 0.02f;
	}
	if (AxisValue < 0)
	{
		currentSpeed -= PawnAcceleration * 0.02f;
	}
}

// Movement on y direction
void AAVehiclePawn::MoveY(float AxisValue)
{
	TurnVel = AxisValue;
	float tempTurnCar = AxisValue / 20;
	float tempTurn = currenTurn + tempTurnCar;
	currenTurn = FMath::Clamp(tempTurn, -1.5f, 1.5f);
}

void AAVehiclePawn::Brake(float AxisValue)
{
	if(AxisValue > 0)
	{
		if(currentSpeed > 0)
		{
			currentSpeed -= PawnBrakeDeceleration * 0.02f;
			UE_LOG(LogTemp, Log, TEXT("Break Speed:  %f"), currentSpeed);

		}else if(currentSpeed < 0)
		{
			currentSpeed += PawnBrakeDeceleration * 0.02f;
		}
	}	
}

void AAVehiclePawn::ReducedValues()
{

	// if the velocity is low and the car is moving slow it down
	if (velocity < 1 && currentSpeed > 0)
	{
		currentSpeed -= PawnDeceleration * 0.02f;

	}
	else
	{
		// if the velocity is low and the car is moving slow it down but in reverse
		if (velocity > -1 && currentSpeed < 0)
		{
			currentSpeed += PawnDeceleration * 0.02f;

		}
	}
	if (velocity == 0 && (currentSpeed <= 0.5 || currentSpeed >= -0.5))
	{
		currentSpeed = 0;
	}


	// if the turn velocity is low and the car is turning slow it down
	if (TurnVel < 1 && currenTurn > 0)
	{
		currenTurn -= 0.010;

	}
	else
	{
		// if the turn velocity is low and the car is turning slow but in reverse
		if (TurnVel > -1 && currenTurn < 0)
		{
			currenTurn += 0.010;

		}
	}
	if (TurnVel == 0 && (currenTurn <= 0.5 || currenTurn >= -0.5))
	{
		currenTurn = 0;
	}

}

void AAVehiclePawn::MoveCar()
{
	// multiply the foward vector by the speed
	FVector TempFowardVector = FVector(GetActorForwardVector().X * currentSpeed, GetActorForwardVector().Y * currentSpeed, gravity);
	TempFowardVector.Normalize(1);
	PawnMovementComponent->AddInputVector(TempFowardVector);


	// set the turn speed
	AddActorLocalRotation(FRotator(0, currenTurn, 0));
}

void AAVehiclePawn::RayCastGround()
{

	FHitResult* hitResult = new FHitResult();
	FVector startTrace = GetActorLocation() - GetActorUpVector() * 60;
	FVector DownVector = -GetActorUpVector();
	FVector EndTrace = (DownVector * 1000.0f) + startTrace;
	FCollisionQueryParams CQP = FCollisionQueryParams();

	if (GetWorld()->LineTraceSingleByChannel(*hitResult, startTrace, EndTrace, ECC_Visibility, CQP))
	{
		DrawDebugLine(GetWorld(), startTrace, EndTrace, FColor::Red, true);

		if (hitResult->GetComponent()->ComponentHasTag("Road"))
		{
			SetActorLocation(hitResult->ImpactPoint, true);
		}
	}

}

