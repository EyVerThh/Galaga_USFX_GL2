// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeColision.generated.h"

UCLASS()
class GALAGA_USFX_GL2_API AFacadeColision : public AActor
{
	GENERATED_BODY()

public:
	AFacadeColision();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	//
	//protected:
	//	UPROPERTY()
	//	
	//	/*AFacadeColision* FacadeColision;*/

public:
	//// Función para establecer la referencia al proyectil
	//void SetProjectile(AGalagaUSFX_LAB06Projectile* InProjectile) { Projectile = InProjectile; }

	void DestruirNaves(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};
