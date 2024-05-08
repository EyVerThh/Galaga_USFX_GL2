// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemiga.h"
#include "Galaga_USFX_GL2GameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_USFX_GL2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_GL2GameMode();
public:
	TArray<ANaveEnemiga*> NavesEnemigas;
};


