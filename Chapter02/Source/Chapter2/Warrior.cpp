// Fill out your copyright notice in the Description page of Project Settings.

#include "Warrior.h"

// Sets default values
AWarrior::AWarrior()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FString AWarrior::ToString()
{
	return FString::Printf(TEXT("An instance of UProfile: %s"), TCHAR_TO_UTF8(*Name));
}

// Called when the game starts or when spawned
void AWarrior::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

