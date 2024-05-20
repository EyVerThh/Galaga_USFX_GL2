// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_GL2_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	int VelocidadVertical;
	float Radio = 500.0f; // Radio de la circunferencia
	float Angulo = 0.0f; // �ngulo inicial
	float Speed = 20.0f;
public:

	ANaveEnemigaEspia();

public:
	virtual void Mover(float DeltaTime);
	virtual int32 RecibirDanio(float dano);// Funci�n para recibir da�o
	// Funci�n Tick
	virtual void Tick(float DeltaTime) override;

};
