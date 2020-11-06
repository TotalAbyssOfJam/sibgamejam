// Copyright Epic Games, Inc. All Rights Reserved.

#include "sibgamejamGameMode.h"
#include "sibgamejamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AsibgamejamGameMode::AsibgamejamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
