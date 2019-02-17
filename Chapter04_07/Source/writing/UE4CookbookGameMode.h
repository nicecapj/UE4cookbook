// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyInterface.h"
#include "UE4CookbookGameMode.generated.h"

/**
 *
 */
UCLASS()
class WRITING_API AUE4CookbookGameMode : public AGameMode
{
        GENERATED_BODY()
    protected:
        virtual void BeginPlay() override;

        //UPROPERTY()
        TArray<IMyInterface*>MyInterfaceInstances;
};
