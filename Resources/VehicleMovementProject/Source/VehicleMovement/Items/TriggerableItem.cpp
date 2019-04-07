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
	SphereComponent->SetSphereRadius(50.f);
	SphereComponent->SetupAttachment(MeshComponent);

	// Mike: Make a const reference to the custom collision channel made in the editor
	const ECollisionChannel Item_Channel = ECC_GameTraceChannel4;

	// Mike: Updated collision channels to match main project (Trace Channel 4 is Items)
	SphereComponent->SetCollisionObjectType(Item_Channel);

	// Mike: Setup the collision response of the box trigger. It should be set to query only
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	// Mike: Set the collision response to all channels to be overlap (it will detect anything)
	SphereComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
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
		}
	}
}

