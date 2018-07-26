// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UC_TestingGroundsGameMode.h"
#include "UC_TestingGroundsHUD.h"
#include "UC_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUC_TestingGroundsGameMode::AUC_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUC_TestingGroundsHUD::StaticClass();
}
