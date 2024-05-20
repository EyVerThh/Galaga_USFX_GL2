#include "FacadeColision.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaTransporte.h"

// Sets default values
AFacadeColision::AFacadeColision()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFacadeColision::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AFacadeColision::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AFacadeColision::DestruirNaves(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
    {
        // Verificar si la bala colisionó con una Nave Aérea Caza
        ANaveEnemigaCaza* NaveEnemigaCaza = Cast<ANaveEnemigaCaza>(OtherActor);
        if (NaveEnemigaCaza)
        {
            // Reducir la energía de la nave enemiga
            float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
            NaveEnemigaCaza->RecibirDanio(Cantidad);
        }

        // Verificar si la bala colisionó con una Nave Aérea Espía
        ANaveEnemigaEspia* NaveEnemigaEspia = Cast<ANaveEnemigaEspia>(OtherActor);
        if (NaveEnemigaEspia)
        {
            // Reducir la energía de la nave enemiga
            float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
            NaveEnemigaEspia->RecibirDanio(Cantidad);
        }

        // Verificar si la bala colisionó con una Nave Nodriza
        ANaveEnemigaNodriza* NaveEnemigaNodriza = Cast<ANaveEnemigaNodriza>(OtherActor);
        if (NaveEnemigaNodriza)
        {
            // Reducir la energía de la nave enemiga
            float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
            NaveEnemigaNodriza->RecibirDanio(Cantidad);
        }

        // Verificar si la bala colisionó con una Nave de Transporte
        ANaveEnemigaTransporte* NaveEnemigaTransporte = Cast<ANaveEnemigaTransporte>(OtherActor);
        if (NaveEnemigaTransporte)
        {
            // Reducir la energía de la nave enemiga
            float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
            NaveEnemigaTransporte->RecibirDanio(Cantidad);
        }
    }
}

