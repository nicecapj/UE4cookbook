// Fill out your copyright notice in the Description page of Project Settings.

#include "Barracks.h"
#include "Engine.h"
#include "BarracksUnit.h"
#include "uobject/ConstructorHelpers.h"

// Sets default values
ABarracks::ABarracks()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>("BuildingMesh");
    SpawnPoint = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");

    SpawnInterval = 10;
    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    if (MeshAsset.Object != nullptr)
    {
        BuildingMesh->SetStaticMesh(MeshAsset.Object);
        BuildingMesh->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
    }

    auto ParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Engine/Tutorial/SubEditors/TutorialAssets/TutorialParticleSystem.TutorialParticleSystem'"));
    if (ParticleSystem.Object != nullptr)
    {
        SpawnPoint->SetTemplate(ParticleSystem.Object);
    }
    SpawnPoint->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
    UnitToSpawn = ABarracksUnit::StaticClass();

}

void ABarracks::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
}

void ABarracks::SpawnUnit()
{
    FVector SpawnLocation = SpawnPoint
        ->GetComponentLocation();
    GetWorld()->SpawnActor(UnitToSpawn, &SpawnLocation);
}

// Called when the game starts or when spawned
void ABarracks::BeginPlay()
{
    Super::BeginPlay();

    RootComponent = BuildingMesh;
    //DEPRECATED(4.12, "This function is deprecated, please use AttachToComponent instead.")
    //SpawnPoint->AttachTo(RootComponent);
    SpawnPoint->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
    SpawnPoint->SetRelativeLocation(FVector(150, 0, 0));
    GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle,
        this, &ABarracks::SpawnUnit, SpawnInterval, true);

}

// Called every frame
void ABarracks::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

