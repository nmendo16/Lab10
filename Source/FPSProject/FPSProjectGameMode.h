// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSProjectGameMode.generated.h"

UCLASS()
class FPSPROJECT_API AFPSProjectGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void StartPlay() override;
};