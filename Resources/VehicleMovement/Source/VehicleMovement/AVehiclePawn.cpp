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
#include "PawnStatComponent.h"
#include "CarStat.h"
#include "Items/Mods/SpeedCapMod.h"

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

	// Movement component
	PawnMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Car Movement Component"));

	// Pawn stat component
	PawnStatComponent = CreateDefaultSubobject<UPawnStatComponent>(TEXT("Pawn Stat Component"));

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
	//MinSpeed = -0.5;
	//currentSpeed = 0;
	currenTurn = 0;

	//PawnAcceleration = 50;
	PawnDeceleration = 0.5;
	PawnBrakeDeceleration = 5000.f;

	//PawnNormalSpeed = 5200;
	//PawnBoostSpeed = 9200;
	//normalMaxSpeed = 1.0;
	//boostMaxSpeed = 1.5;

	frameRate = 0.0098;
	WaitTimer = 3.0f;
	canMove = true;
	gravity = -9.8;

}

// Called when the game starts or when spawned
void AAVehiclePawn::BeginPlay()
{
	Super::BeginPlay();
	//MaxSpeed = normalMaxSpeed;
	
	// Setup component
	if (PawnStatComponent->GetCurrentStat() != nullptr)
	{
		CurrentStat = CastChecked<UCarStat>(PawnStatComponent->GetCurrentStat());

		PawnMovementComponent->MaxSpeed = CurrentStat->GetMaxSpeedFactor();
		OnStatAccelerationChange();
		PawnMovementComponent->Deceleration = PawnBrakeDeceleration * CurrentStat->GetWeightFactor();

		CurrentStat->SetCurrentSpeed(0.f);
	}

	// Setup component callbacks
	CurrentStat->OnAccelerationChanged.AddDynamic(this, &AAVehiclePawn::OnStatAccelerationChange);

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

	// checking for Gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AAVehiclePawn::MoveX); // call the MoveX method with keys bind to 'MoveForward'
	PlayerInputComponent->BindAxis("MoveRight", this, &AAVehiclePawn::MoveY);  // call the MoveY method with keys bind to 'MoveRight'
	PlayerInputComponent->BindAction("Boost", IE_Pressed, this, &AAVehiclePawn::BoostPress);
	PlayerInputComponent->BindAction("Boost", IE_Released, this, &AAVehiclePawn::BoostRelease);
	PlayerInputComponent->BindAxis("Brakes", this, &AAVehiclePawn::Brake);
}

void AAVehiclePawn::BoostPress()
{
	UE_LOG(LogTemp, Warning, TEXT("Boost Pressed"));

	//MaxSpeed = boostMaxSpeed;

	//PawnStatComponent->EnableMod(SpeedCapMod);
	//PawnMovementComponent->MaxSpeed = CurrentStat->GetMaxSpeedFactor();
}

void AAVehiclePawn::BoostRelease()
{
	UE_LOG(LogTemp, Warning, TEXT("Boost Un-Pressed"));

	//MaxSpeed = normalMaxSpeed;
	
	//PawnStatComponent->DisableMod(SpeedCapMod);
	//PawnMovementComponent->MaxSpeed = CurrentStat->GetMaxSpeedFactor();
}

// Movement on x direction
void AAVehiclePawn::MoveX(float AxisValue)
{
	velocity = AxisValue;
	CurrentStat->AppendCurrentSpeed(AxisValue);
}

// Movement on y direction
void AAVehiclePawn::MoveY(float AxisValue)
{
	TurnVel = AxisValue;
	float tempTurn = currenTurn + AxisValue;
	currenTurn = FMath::Clamp(tempTurn * CurrentStat->GetHandleFactor(), -1.f, 1.f);
}

void AAVehiclePawn::Brake(float AxisValue)
{
	if(AxisValue > 0)
	{
		if(CurrentStat->GetCurrentSpeed() > 0)
		{
			CurrentStat->AppendCurrentSpeed(-PawnBrakeDeceleration * CurrentStat->GetWeightFactor());
			//currentSpeed -= PawnBrakeDeceleration * CurrentStat->GetWeightFactor();
			UE_LOG(LogTemp, Log, TEXT("Break Speed:  %f"), CurrentStat->GetCurrentSpeed());

		}else if(CurrentStat->GetCurrentSpeed() < 0)
		{
			CurrentStat->AppendCurrentSpeed(PawnBrakeDeceleration * CurrentStat->GetWeightFactor());
			//currentSpeed += PawnBrakeDeceleration * CurrentStat->GetWeightFactor();
		}
	}	
}

void AAVehiclePawn::OnStatAccelerationChange()
{
	PawnMovementComponent->Acceleration = CurrentStat->GetAccelerationFactor() * CurrentStat->GetWeightFactor();
}

void AAVehiclePawn::ReducedValues()
{

	// if the velocity is low and the car is moving slow it down
	//if (velocity < 1 && currentSpeed > 0)
	//{
	//	currentSpeed -= PawnDeceleration * CurrentStat->GetWeightFactor();

	//}
	//else
	//{
	//	// if the velocity is low and the car is moving slow it down but in reverse
	//	if (velocity > -1 && currentSpeed < 0)
	//	{
	//		currentSpeed += PawnDeceleration * CurrentStat->GetWeightFactor();

	//	}
	//}
	if (velocity == 0 && (CurrentStat->GetCurrentSpeed() <= 0.5 || CurrentStat->GetCurrentSpeed() >= -0.5))
	{
		CurrentStat->SetCurrentSpeed(0.f);
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
	// multiply the forward vector by the speed
	FVector TempFowardVector = FVector(GetActorForwardVector().X * CurrentStat->GetCurrentSpeed(), GetActorForwardVector().Y * CurrentStat->GetCurrentSpeed(), gravity);
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

