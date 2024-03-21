#include "SBZConnectedMaintenanceBox.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"
#include "SBZShoutTargetComponent.h"

void ASBZConnectedMaintenanceBox::SetEnabled(bool bEnabled) {
}

void ASBZConnectedMaintenanceBox::OnServerCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZConnectedMaintenanceBox::OnRep_CurrentState(ESBZMaintenanceBoxState OldState) {
}

void ASBZConnectedMaintenanceBox::OnRep_CompletedCableBoxes() {
}

void ASBZConnectedMaintenanceBox::OnCableBoxComplete(bool bSuccessful) {
}

void ASBZConnectedMaintenanceBox::Multicast_SetState_Implementation(ESBZMaintenanceBoxState NewState) {
}

void ASBZConnectedMaintenanceBox::Multicast_SetNextColor_Implementation() {
}

void ASBZConnectedMaintenanceBox::EnableCutting() {
}




void ASBZConnectedMaintenanceBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZConnectedMaintenanceBox, CurrentState);
    DOREPLIFETIME(ASBZConnectedMaintenanceBox, CompletedCableBoxes);
}

ASBZConnectedMaintenanceBox::ASBZConnectedMaintenanceBox() {
    this->Objective = NULL;
    this->SequenceLength = 1;
    this->NumberOfSequences = 1;
    this->bRequiresDeactivate = false;
    this->Seed = -1;
    this->FirstNotificationAsset = NULL;
    this->SecondNotificationAsset = NULL;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->ShoutTargetComponent = CreateDefaultSubobject<USBZShoutTargetComponent>(TEXT("SBZShoutTargetComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("SBZInteractableComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->CurrentState = ESBZMaintenanceBoxState::Off;
    this->CompletedCableBoxes = -1;
    this->bShouldUpdateCompletedCount = true;
    this->bHasTriggeredSearch = false;
}

