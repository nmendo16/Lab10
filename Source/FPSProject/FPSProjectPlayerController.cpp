// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSProjectPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "FPSProjectCameraManager.h"

AFPSProjectPlayerController::AFPSProjectPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = AFPSProjectCameraManager::StaticClass();
}

void AFPSProjectPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
