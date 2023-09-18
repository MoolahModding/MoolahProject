#include "SBZHackingZoneController.h"
#include "Components/StaticMeshComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZHackingZoneController::ASBZHackingZoneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMesh->SetupAttachment(RootComponent);
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
    this->ProgressionValuesToPost.AddDefaulted(4);
}

void ASBZHackingZoneController::SetInteractionEnabled(bool bEnabled) {
}

void ASBZHackingZoneController::OnServerCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZHackingZoneController::OnSabotaged(bool bNewSabotagedState) {
}

void ASBZHackingZoneController::OnHeistGoneLoud() {
}

void ASBZHackingZoneController::DisableHackingZones() {
}


