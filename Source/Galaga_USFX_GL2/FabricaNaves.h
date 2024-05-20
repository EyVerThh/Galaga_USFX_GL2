// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FabricaNaves.generated.h"

UCLASS()
class GALAGA_USFX_GL2_API AFabricaNaves : public AActor
{
	GENERATED_BODY()

public:
	// Establece valores predeterminados para las propiedades de este actor
	AFabricaNaves();


	//virtual ANaveEnemiga* FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation) PURE_VIRTUAL(AFabricaNaves::FabricarNaves, return nullptr;);//Funcion para fabricar naves
	UFUNCTION(BlueprintCallable, Category = "FabricaNaves")
	static ANaveEnemiga* FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);//Funcion para fabricar naves

	//static ANaveE* FabricarNavesE(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);//Funcion para fabricar naves


protected:
	// Se llama cuando comienza el juego o cuando se genera
	virtual void BeginPlay() override;

public:
	// Llama a cada cuadro
	virtual void Tick(float DeltaTime) override;
};
