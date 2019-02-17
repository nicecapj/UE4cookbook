// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "StyledHUDGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CHAPTER9_API AStyledHUDGameMode : public AGameMode
{
	GENERATED_BODY()	
	
public:
	virtual void BeginPlay() override;
	
private:
	TSharedPtr<SVerticalBox> Widget;
};
