// Fill out your copyright notice in the Description page of Project Settings.

#include "TriggerableItem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "KartVehiclePawn.h"
#include "FSM/PawnState.h"
#include "FSM/PawnStatComponent.h"

// Sets default values
ATriggerableItem::ATriggerableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Mike: Updated the root Component to be a Scene Component (allows us to re-orient the static meshes)
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Scene Component"));
	SetRootComponent(RootSceneComponent);// make the vehicle into a root component

	// Item mesh component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->SetupAttachment(RootSceneComponent);

	// Trigger
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger Component"));
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ATriggerableItem::OnOverlapBegin);
	SphereComponent->SetSphereRadius(100.f);
	SphereComponent->SetupAttachment(MeshComponent);

	// Mike: Updated collision channels to match main project (Trace Channel 4 is Items)
	SphereComponent->SetCollisionObjectType(ECC_GameTraceChannel4);
}

// Called when the game starts or when spawned
void ATriggerableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggerableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATriggerableItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AKartVehiclePawn* VehiclePawn = Cast<AKartVehiclePawn>(OtherActor);

	if (IsValid(VehiclePawn))
	{
		UPawnState* State = VehiclePawn->PawnStatComponent->GetCurrentState();
		if (IsValid(State))
		{
			State->EnableMod(PawnStatMod);

			Destroy();
		}
	}
}

