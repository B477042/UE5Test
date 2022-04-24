// Copyright Epic Games, Inc. All Rights Reserved.

#include "SmashGameMode.h"
#include "SmashCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASmashGameMode::ASmashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
