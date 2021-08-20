// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTextProjectGameMode.h"
#include "MyTextProjectHUD.h"
#include "MyTextProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTextProjectGameMode::AMyTextProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyTextProjectHUD::StaticClass();
}
