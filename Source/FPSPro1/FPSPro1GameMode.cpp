// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSPro1GameMode.h"
#include "FPSPro1HUD.h"
#include "FPSPro1Character.h"
#include "UObject/ConstructorHelpers.h"

AFPSPro1GameMode::AFPSPro1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSPro1HUD::StaticClass();
}
