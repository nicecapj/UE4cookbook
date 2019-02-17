// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "AttributeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CHAPTER9_API AAttributeGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	FText GetButtonLabel() const;

private:
	TSharedPtr<SVerticalBox> Widget;
};
