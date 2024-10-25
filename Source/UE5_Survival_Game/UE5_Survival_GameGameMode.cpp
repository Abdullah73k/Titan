// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_Survival_GameGameMode.h"
#include "UE5_Survival_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_Survival_GameGameMode::AUE5_Survival_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
