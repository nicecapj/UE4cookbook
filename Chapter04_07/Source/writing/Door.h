// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/StaticMeshActor.h"
#include "Interactable.h"
#include "Openable.h"
#include "Door.generated.h"

UCLASS()
class WRITING_API ADoor : public AStaticMeshActor,  public IInteractable, public IOpenable
{
        GENERATED_BODY()

    public:
        ADoor();

        UFUNCTION()
        virtual bool CanInteract_Implementation() override
        {
            return IInteractable::CanInteract_Implementation();
        };
        UFUNCTION()
        virtual void PerformInteract_Implementation() override;
        UFUNCTION()
        virtual void Open_Implementation() override;
};
