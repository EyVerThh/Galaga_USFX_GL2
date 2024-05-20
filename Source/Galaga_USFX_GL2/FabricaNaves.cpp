#include "FabricaNaves.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaTransporte.h"

// Sets default values
AFabricaNaves::AFabricaNaves()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Function to fabricate enemy ships
ANaveEnemiga* AFabricaNaves::FabricarNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
    FVector SpawnLocationAdjusted = SpawnLocation;

    if (TipoNave == "NaveEnemigaCaza")
    {
        ANaveEnemigaCaza* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocationAdjusted, SpawnRotation);
        return Cast<ANaveEnemiga>(NuevaNaveEnemiga);
    }
    else if (TipoNave == "NaveEnemigaEspia")
    {
        ANaveEnemigaEspia* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaEspia>(SpawnLocationAdjusted, SpawnRotation);
        return Cast<ANaveEnemiga>(NuevaNaveEnemiga);
    }
    else if (TipoNave == "NaveEnemigaNodriza")
    {
        ANaveEnemigaNodriza* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaNodriza>(SpawnLocationAdjusted, SpawnRotation);
        return Cast<ANaveEnemiga>(NuevaNaveEnemiga);
    }
    else if (TipoNave == "NaveEnemigaTransporte")
    {
        ANaveEnemigaTransporte* NuevaNaveEnemiga = World->SpawnActor<ANaveEnemigaTransporte>(SpawnLocationAdjusted, SpawnRotation);
        return Cast<ANaveEnemiga>(NuevaNaveEnemiga);
    }

    return nullptr;
}

// Called when the game starts or when spawned
void AFabricaNaves::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AFabricaNaves::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}
