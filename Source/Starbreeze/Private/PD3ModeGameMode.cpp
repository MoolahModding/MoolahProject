#include "PD3ModeGameMode.h"
#include "SBZSpawnWaveManager.h"

APD3ModeGameMode::APD3ModeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnWaveManager = CreateDefaultSubobject<USBZSpawnWaveManager>(TEXT("SBZSpawnWaveManager"));
}


