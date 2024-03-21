#include "SBZCivilianManager.h"

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

USBZCivilianManager::USBZCivilianManager() {
    this->Settings = NULL;
}

