// Copyright Epic Games, Inc. All Rights Reserved.

#include "HorrorGameMode.h"
#include "HorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHorrorGameMode::AHorrorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
