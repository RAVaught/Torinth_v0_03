// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Torinth_v0_03.h"
#include "Torinth_v0_03GameMode.h"
#include "Torinth_v0_03Character.h"

ATorinth_v0_03GameMode::ATorinth_v0_03GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
