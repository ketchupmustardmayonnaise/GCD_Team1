// Copyright Epic Games, Inc. All Rights Reserved.

#include "GCD_Team1GameMode.h"
#include "GCD_Team1Character.h"
#include "UObject/ConstructorHelpers.h"

AGCD_Team1GameMode::AGCD_Team1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
