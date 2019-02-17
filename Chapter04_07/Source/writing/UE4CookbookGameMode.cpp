// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4CookbookGameMode.h"
#include "EngineUtils.h"
#include "SingleInterfaceActor.h"



void AUE4CookbookGameMode::BeginPlay()
{
    FTransform SpawnLocation;
    ASingleInterfaceActor* SpawnedActor = GetWorld()->SpawnActor<ASingleInterfaceActor>(ASingleInterfaceActor::StaticClass(), SpawnLocation);
    if (SpawnedActor->GetClass()->ImplementsInterface(UMyInterface::StaticClass()))
    {
        GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Spawned actor implements interface!"));
    }

    for (TActorIterator<AActor> It(GetWorld(), AActor::StaticClass()); It; ++It)
    {
        AActor* Actor = *It;
        IMyInterface* MyInterfaceInstance = Cast<IMyInterface>(Actor);
        if (MyInterfaceInstance)
        {
            MyInterfaceInstances.Add(MyInterfaceInstance);
        }
    }

    GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%d actors implement the interface"), MyInterfaceInstances.Num()));
}
