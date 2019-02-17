// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InventoryActor.generated.h"

UCLASS()
class WRITING_API AInventoryActor : public AStaticMeshActor
{
        GENERATED_BODY()

    public:
        // Sets default values for this component's properties
        AInventoryActor();
        virtual void PickUp();
        virtual void PutDown(FTransform TargetLocation);


    protected:
        // Called when the game starts
        virtual void BeginPlay() override;

    public:
        // Called every frame
        //virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



};
