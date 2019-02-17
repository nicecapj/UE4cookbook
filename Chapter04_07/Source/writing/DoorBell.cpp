// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorBell.h"
#include "Engine.h"
#include "Openable.h"

// Sets default values
ADoorBell::ADoorBell()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    HasBeenPushed = false;
    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));
    if (MeshAsset.Object != nullptr)
    {
        GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
        //GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
        GetStaticMeshComponent()->bGenerateOverlapEvents = true;
    }

    GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
    GetStaticMeshComponent()->SetWorldScale3D(FVector(0.5, 0.5, 0.5));
    SetActorEnableCollision(true);
    DoorToOpen = nullptr;

}
bool ADoorBell::CanInteract_Implementation()
{
    return !HasBeenPushed;
}
void ADoorBell::PerformInteract_Implementation()
{
    HasBeenPushed = true;
    if (DoorToOpen->GetClass()->ImplementsInterface(UOpenable::StaticClass()))
    {
        IOpenable::Execute_Open(DoorToOpen);
    }
}