// Copyright Epic Games, Inc. All Rights Reserved.

#include "PUTIKON_ProjectGameMode.h"
#include "PUTIKON_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APUTIKON_ProjectGameMode::APUTIKON_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
