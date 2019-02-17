// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InventoryActor.h"
#include "InventoryComponent.h"
#include "InventoryCharacter.generated.h"

UCLASS()
class WRITING_API AInventoryCharacter : public ACharacter
{
        GENERATED_BODY()

    public:
        // Sets default values for this character's properties
        AInventoryCharacter();

    protected:
        // Called when the game starts or when spawned
        virtual void BeginPlay() override;

        UPROPERTY()
        UInventoryComponent* MyInventory;


        UFUNCTION()
        void DropItem();

        UFUNCTION()
        void TakeItem(AInventoryActor* InventoryItem);

        UFUNCTION()
        virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp,
            bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

        void MoveForward(float AxisValue);
        void MoveRight(float AxisValue);
        void PitchCamera(float AxisValue);
        void YawCamera(float AxisValue);

    public:
        // Called every frame
        virtual void Tick(float DeltaTime) override;

        // Called to bind functionality to input
        virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    private:
        FVector MovementInput;
        FVector CameraInput;
};
