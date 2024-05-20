// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Nodriza.TwinStickUFO_Nodriza'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}
// Implementaci�n de la funci�n Tick
void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Aqu� va la l�gica para el comportamiento de Tick de tu nave enemiga nodriza
    // Por ejemplo:
    // Mover la nave
    // Realizar comprobaciones de colisi�n
    // Actualizar cualquier estado necesario
}
