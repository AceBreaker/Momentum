// Copyright Epic Games, Inc. All Rights Reserved.

#include "MomentumPlatformerGameMode.h"
#include "MomentumPlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMomentumPlatformerGameMode::AMomentumPlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
