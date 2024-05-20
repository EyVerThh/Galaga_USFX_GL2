#include "NaveEnemigaTransporte.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

// Constructor
ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
  {
       // Declaraci�n e inicializaci�n de mallaNaveEnemigaTransporte
       mallaNaveEnemigaTransporte = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNaveEnemigaTransporte"));
       // Realiza otras configuraciones necesarias para mallaNaveEnemigaTransporte
    }

  // Implementaci�n de la funci�n Tick
  void ANaveEnemigaTransporte::Tick(float DeltaTime)
  {
      Super::Tick(DeltaTime);
      Mover(DeltaTime);
}
 
 }   
