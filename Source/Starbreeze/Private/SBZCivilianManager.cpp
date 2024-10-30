#include "SBZCivilianManager.h"

USBZCivilianManager::USBZCivilianManager() {
    this->Settings = NULL;
}

void USBZCivilianManager::StopStaying() {
}

void USBZCivilianManager::OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn) {
}

void USBZCivilianManager::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

void USBZCivilianManager::OnExitedActionPhase() {
}

void USBZCivilianManager::OnEnteredActionPhase() {
}

bool USBZCivilianManager::IsAllowedToFlee(ASBZAIController* AIController) {
    return false;
}

USBZCivilianManager* USBZCivilianManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


