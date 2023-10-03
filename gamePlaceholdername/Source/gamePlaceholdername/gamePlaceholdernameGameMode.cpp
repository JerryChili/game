// Copyright Epic Games, Inc. All Rights Reserved.

#include "gamePlaceholdernameGameMode.h"
#include "gamePlaceholdernameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgamePlaceholdernameGameMode::AgamePlaceholdernameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
