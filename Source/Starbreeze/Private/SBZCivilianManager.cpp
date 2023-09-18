#include "SBZCivilianManager.h"

USBZCivilianManager::USBZCivilianManager() {
    this->Settings = NULL;
}

void USBZCivilianManager::StopStaying() {
}

void USBZCivilianManager::OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn) {
}

void USBZCivilianManager::OnPawnKilled(APawn* Pawn) {
}

void USBZCivilianManager::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

bool USBZCivilianManager::IsAllowedToFlee(ASBZAIController* AIController) {
    return false;
}

USBZCivilianManager* USBZCivilianManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


