#include "SBZHackingZoneController.h"
#include "Components/StaticMeshComponent.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

ASBZHackingZoneController::ASBZHackingZoneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProgressionValuesToPost.AddDefaulted(4);
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->bUseHackingZones = true;
    this->NumberOfZonesActiveAtOnce = 2;
    this->bSkipRandomization = false;
    this->SingleLocationDuration = 15.00f;
    this->PlayerMultiplierArray.AddDefaulted(5);
    this->SpeedIncreasePerInteractionArray.AddDefaulted(1);
    this->NumberOfInteractionsForInstantComplete = 5;
    this->LoudOptions = ESBZLoudOptions::Continue;
    this->Seed = -1;
    this->NumberOfZonesOccupied = 0;
    this->NumberOfInteractionsDone = 0;
    this->StaticMesh->SetupAttachment(RootComponent);
}

void ASBZHackingZoneController::SetInteractionEnabled(bool bEnabled) {
}

void ASBZHackingZoneController::OnInteractionActorServerCompleteInteraction(ASBZInteractionActor* Interactable, USBZInteractorComponent* Interactor) {
}

void ASBZHackingZoneController::OnHeistGoneLoud() {
}

void ASBZHackingZoneController::OnAckCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZHackingZoneController::DisableHackingZones() {
}


