// Copyright Epic Games, Inc. All Rights Reserved.

#include "projectBaseGameMode.h"
#include "projectBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AprojectBaseGameMode::AprojectBaseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
