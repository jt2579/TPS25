// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPS25GameMode.h"
#include "TPS25Character.h"
#include "UObject/ConstructorHelpers.h"

ATPS25GameMode::ATPS25GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
