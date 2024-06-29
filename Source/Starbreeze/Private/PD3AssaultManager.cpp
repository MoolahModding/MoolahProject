#include "PD3AssaultManager.h"

UPD3AssaultManager::UPD3AssaultManager() {
    this->Settings = NULL;
    this->ThrowableTypeCooldown[0] = 0.00f;
    this->ThrowableTypeCooldown[1] = 0.00f;
    this->ThrowableTypeCooldown[2] = 0.00f;
    this->ThrowableTypeCooldown[3] = 0.00f;
    this->ThrowableTypeCooldown[4] = 0.00f;
    this->ThrowableTypeCooldown[5] = 0.00f;
    this->BuddySystemAdditionalSpecials = 1.00f;
}

void UPD3AssaultManager::StartEndlessAssault() {
}

void UPD3AssaultManager::SetVehicleSpawnEnabled(ASBZSpline* Spline, bool bEnabled) {
}

void UPD3AssaultManager::SetLevelProgression(float InLevelProgression) {
}

void UPD3AssaultManager::SetAssaultActive(bool bIsActive) {
}

void UPD3AssaultManager::SetAdditionalTimeScoreWeight(float InWeight) {
}

void UPD3AssaultManager::SetAdditionalDistanceScoreWeight(float InWeight) {
}

void UPD3AssaultManager::RequestVehicleSpawn(USBZAssaultVehicleSpawnerData* VehicleData, ASBZSpline* EnterSpline, ASBZSpline* ExitSpline) {
}

void UPD3AssaultManager::OnPlayersAliveChanged(const TArray<UObject*>& Players) {
}

void UPD3AssaultManager::OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn) {
}

void UPD3AssaultManager::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void UPD3AssaultManager::OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive) {
}

void UPD3AssaultManager::OnDamageTakenEvent(const FSBZDamageEvent& DamageEventdata) {
}

bool UPD3AssaultManager::IsAssaultActive() const {
    return false;
}

UPD3AssaultManager* UPD3AssaultManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


