// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_GL2GameMode.h"
#include "Galaga_USFX_GL2Pawn.h"
#include "FabricaNaves.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"	
#include "NaveEnemigaTransporte.h"
AGalaga_USFX_GL2GameMode::AGalaga_USFX_GL2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_GL2Pawn::StaticClass();
}
