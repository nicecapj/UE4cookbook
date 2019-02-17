// Fill out your copyright notice in the Description page of Project Settings.

#include "Door.h"
#include "EngineMinimal.h"


// Sets default values
ADoor::ADoor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));
    if (MeshAsset.Object != nullptr)
    {
        GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
        //GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
        GetStaticMeshComponent()->bGenerateOverlapEvents = true;
    }
    GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
    GetStaticMeshComponent()->SetWorldScale3D(FVector(0.3, 2, 3));
    SetActorEnableCollision(true);
}

void ADoor::PerformInteract_Implementation()
{
    GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("The door refuses to budge. Perhaps there is a hidden switch nearby?"));
}

void ADoor::Open_Implementation()
{
    AddActorLocalOffset(FVector(0, 0, 200));
}