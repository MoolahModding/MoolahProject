#include "SBZThermalLance.h"
#include "SBZInteractableComponent.h"

void ASBZThermalLance::OnServerRemovedCanister(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZThermalLance::OnServerAddedCanister(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZThermalLance::OnRefuelingReached() {
}

void ASBZThermalLance::OnRanOutOfFuel() {
}

void ASBZThermalLance::OnInteractStateChanged(const USBZBaseInteractableComponent* Interactable, bool bEnabled) {
}

void ASBZThermalLance::OnIgnitionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZThermalLance::OnDisassembled(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZThermalLance::OnBoltingComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZThermalLance::OnBagEntered(ASBZBagTriggerVolume* Volume, ASBZBagItem* BagItem, FSBZBagHandle BagHandle) {
}

void ASBZThermalLance::OnAckRemovedCanister(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZThermalLance::OnAckAddedCanister(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}


ASBZThermalLance::ASBZThermalLance() {
    this->IgnitionInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("IgnitionInteraction"));
    this->RemoveCanisterInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("RemoveCanisterInteraction"));
    this->AddCanisterInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("AddCanisterInteraction"));
    this->DisassembleInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("DisassembleInteraction"));
    this->BoltingInteractions.AddDefaulted(3);
    this->bNeedsDisassemblyWhenFinished = true;
    this->bShouldSpawnBagsWhenCompleted = true;
    this->BagTriggerVolume = NULL;
    this->RequiredBagType = NULL;
    this->DisassembleInteractionWaitTime = 2.00f;
    this->BoltedEvent = NULL;
    this->RemoveCannisterEvent = NULL;
    this->AddCannisterEvent = NULL;
}

