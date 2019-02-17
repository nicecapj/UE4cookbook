// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ColoredTexture.h"
#include "Warrior.generated.h"

UCLASS()
class CHAPTER2_API AWarrior : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
	FColoredTexture Texture;
	UFUNCTION(BlueprintCallable, Category = Properties)
	FString ToString();

public:	
	// Sets default values for this actor's properties
	AWarrior();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
