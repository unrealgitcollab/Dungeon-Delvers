// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DungeonDelversGameMode.h"
#include "DungeonDelversPlayerController.h"
#include "DungeonDelversCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonDelversGameMode::ADungeonDelversGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADungeonDelversPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}