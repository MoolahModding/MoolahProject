#include "SBZTrafficManager.h"

void USBZTrafficManager::OnExitedActionPhase() {
}

void USBZTrafficManager::OnEnteredActionPhase(UWorld* World) {
}

void USBZTrafficManager::HandleVehicleStopped(ASBZWheeledVehicle* Vehicle) {
}

void USBZTrafficManager::HandleVehicleEndObstacle(ASBZWheeledVehicle* Vehicle, AActor* Actor) {
}

void USBZTrafficManager::HandleVehicleBeginObstacle(ASBZWheeledVehicle* Vehicle, AActor* Actor) {
}

void USBZTrafficManager::HandleSwatVanArrived(ASBZWheeledVehicle* Vehicle) {
}

void USBZTrafficManager::HandleHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZTrafficManager::HandleFirstResponderArrived(ASBZWheeledVehicle* Vehicle) {
}

void USBZTrafficManager::HandleEscapeVanArrived(ASBZWheeledVehicle* Vehicle) {
}

void USBZTrafficManager::HandleCivilianArrived(ASBZWheeledVehicle* Vehicle) {
}

USBZTrafficManager::USBZTrafficManager() {
    this->Settings = NULL;
    this->TimeToNextSpawnAttempt = 0.00f;
    this->AmountFirstRespondersLeftToArrive = 0;
    this->EscapeVan = NULL;
    this->bCivilianTrafficEnabled = true;
    this->TimeToNextCivilianSpawn = 0.00f;
    this->AmountActiveCivilianVehicles = 0;
    this->bIsInActionPhase = false;
}

