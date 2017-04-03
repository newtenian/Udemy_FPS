// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Udemy_FPS.h"
#include "Udemy_FPSGameMode.h"
#include "Udemy_FPSHUD.h"
#include "Udemy_FPSCharacter.h"

AUdemy_FPSGameMode::AUdemy_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemy_FPSHUD::StaticClass();
}
