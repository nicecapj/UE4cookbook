// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryActor.h"
#include "Engine.h"


// Called when the game starts
void AInventoryActor::BeginPlay()
{
    Super::BeginPlay();
}

void AInventoryActor::PickUp()
{
    SetActorTickEnabled(false);
    SetActorHiddenInGame(true);
    SetActorEnableCollision(false);
}
void AInventoryActor::PutDown(FTransform TargetLocation)
{
    SetActorTickEnabled(true);
    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);
    SetActorLocation(TargetLocation.GetLocation());
}

AInventoryActor::AInventoryActor():Super()
{
    PrimaryActorTick.bCanEverTick = true;
    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>	(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    if (MeshAsset.Object != nullptr)
    {
        GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
        GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
    }

    GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
    SetActorEnableCollision(true);
}