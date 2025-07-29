// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "FPSHUD.generated.h"

/**
*
*/
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	// Primary draw call for the HUD.
	virtual void DrawHUD() override;

protected:
	// This will be drawn at the center of the screen.
	UPROPERTY(EditDefaultsOnly, Category = "HUD")
	UTexture2D* CrosshairTexture;
};