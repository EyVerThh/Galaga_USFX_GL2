#include "NaveEnemigaTransporte.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

// Constructor
ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
  {
       // Declaración e inicialización de mallaNaveEnemigaTransporte
       mallaNaveEnemigaTransporte = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNaveEnemigaTransporte"));
       // Realiza otras configuraciones necesarias para mallaNaveEnemigaTransporte
    }

  // Implementación de la función Tick
  void ANaveEnemigaTransporte::Tick(float DeltaTime)
  {
      Super::Tick(DeltaTime);
      Mover(DeltaTime);
}
 
 }   
