#include "SBZSpawnWaveManager.h"

USBZSpawnWaveManager::USBZSpawnWaveManager() {
    this->SpawnWaveSettingsProxy = NULL;
}

void USBZSpawnWaveManager::SetSpawnWaveSettingsProxy(const USBZSpawnWaveSettingsProxyComponent* InSpawnWaveSettingsProxy) {
}

void USBZSpawnWaveManager::SetOrderOnSpawnedPawns(const FSBZSpawnWaveFilteredOrder& FilteredOrder) {
}

void USBZSpawnWaveManager::SetDifficulty(ESBZDifficulty NewDifficulty) {
}

void USBZSpawnWaveManager::SetBehaviorOnSpawnedPawns(const FSBZSpawnWaveFilteredBehavior& FilteredBehavior) {
}

void USBZSpawnWaveManager::PopulateSpawnTypeLimitsOnWave(FSBZSpawnWaveSettings& WaveSettings) {
}

void USBZSpawnWaveManager::OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn) {
}

void USBZSpawnWaveManager::OnPawnKilled(APawn* Pawn) {
}

USBZSpawnWaveSettingsProxyComponent* USBZSpawnWaveManager::GetSpawnWaveSettingsProxy() const {
    return NULL;
}

USBZSpawnWaveManager* USBZSpawnWaveManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


