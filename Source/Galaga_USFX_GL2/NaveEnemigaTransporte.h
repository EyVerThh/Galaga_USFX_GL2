#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaTransporte.generated.h"

UCLASS()
class GALAGA_USFX_GL2_API ANaveEnemigaTransporte : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    ANaveEnemigaTransporte();

    // Funci�n Tick
    virtual void Tick(float DeltaTime) override;

    // Otras funciones y variables, si las hay
    virtual int32 RecibirDanio(float dano);// Funci�n para recibir da�o
public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
    UStaticMeshComponent* mallaNaveEnemigaTransporte;
};
