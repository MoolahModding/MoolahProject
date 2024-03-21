#include "SBZHackingZoneController.h"
#include "Components/StaticMeshComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

void ASBZHackingZoneController::SetInteractionEnabled(bool bEnabled) {
}

void ASBZHackingZoneController::OnSabotaged(bool bNewSabotagedState) {
}

void ASBZHackingZoneController::OnHeistGoneLoud() {
}

void ASBZHackingZoneController::OnAckCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZHackingZoneController::DisableHackingZones() {
}


ASBZHackingZoneController::ASBZHackingZoneController() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->SabotagePoint = NULL;
    this->NumberOfZonesActiveAtOnce = 2;
    this->bSkipRandomization = false;
    this->SingleLocationDuration = 15.00f;
    this->PlayerMultiplierArray.AddDefaulted(5);
    this->LoudOptions = ESBZLoudOptions::Continue;
    this->Seed = -1;
    this->NumberOfZonesOccupied = 0;
    this->bIsSabotaged = false;
}

