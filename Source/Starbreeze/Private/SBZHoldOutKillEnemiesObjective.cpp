#include "SBZHoldOutKillEnemiesObjective.h"

USBZHoldOutKillEnemiesObjective::USBZHoldOutKillEnemiesObjective() {
    this->NumEnemiesToKill = 1;
}

void USBZHoldOutKillEnemiesObjective::OnEnemySpawned(USBZSpawnManager* SpawnManager, APawn* Pawn) {
}

void USBZHoldOutKillEnemiesObjective::OnEnemyKilled(APawn* Pawn) {
}


