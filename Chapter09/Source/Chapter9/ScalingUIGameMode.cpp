// Fill out your copyright notice in the Description page of Project Settings.

#include "ScalingUIGameMode.h"
#include "ScalingUIPlayerController.h"


AScalingUIGameMode::AScalingUIGameMode()
	: AGameMode()
{
	PlayerControllerClass = AScalingUIPlayerController::StaticClass();
}
