// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GaamJaaGameMode.h"
#include "GaamJaaPlayerController.h"
#include "GaamJaaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGaamJaaGameMode::AGaamJaaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGaamJaaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}