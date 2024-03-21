#include "SBZSpawnLocationHandler.h"

void ASBZSpawnLocationHandler::TriggerSpawnManually() {
}

void ASBZSpawnLocationHandler::OnServerImportantLootPickedUp(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

ASBZSpawnLocationHandler::ASBZSpawnLocationHandler() {
    this->bShouldRandomizeOnBeginPlay = true;
    this->Seed = -1;
    this->HackableActor = NULL;
    this->HackableEmailIndex = -1;
    this->ImportantItem = NULL;
    this->RandomIndex = -1;
}

