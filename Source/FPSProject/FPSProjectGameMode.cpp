// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameMode.h"

void AFPSProjectGameMode::StartPlay()
{
    Super::StartPlay();

    check(GEngine != nullptr);

    // Display a debug message for five seconds.
    // The -1 "Key" value prevents updates or refreshes.
    GEngine->AddOnScreenDebugMessage(
        -1,
        5.0f,
        FColor::Yellow,
        TEXT("Hello World, this is FPSProjectGameMode!")
    );
}