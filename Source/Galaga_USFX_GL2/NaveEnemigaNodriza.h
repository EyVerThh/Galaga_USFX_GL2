// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_GL2_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
public:

	ANaveEnemigaNodriza();

	void Tick(float DeltaTime);


public:
	virtual void Mover(float DeltaTime);
	virtual int32 RecibirDanio(float dano);// Función para recibir daño

};
