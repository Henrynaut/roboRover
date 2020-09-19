// Copyright Epic Games, Inc. All Rights Reserved.

#include "roboRoverGameMode.h"
#include "roboRoverPawn.h"
#include "roboRoverHud.h"

AroboRoverGameMode::AroboRoverGameMode()
{
	DefaultPawnClass = AroboRoverPawn::StaticClass();
	HUDClass = AroboRoverHud::StaticClass();
}
