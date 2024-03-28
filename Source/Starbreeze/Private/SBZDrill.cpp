#include "SBZDrill.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZOutlineComponent.h"

bool ASBZDrill::UnjamDrill() {
    return false;
}

void ASBZDrill::TEMP_SetShowOutline(bool bShow) {
}

bool ASBZDrill::StartDrill() {
    return false;
}

void ASBZDrill::OnUnjamInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled) {
}

void ASBZDrill::OnStateChanged_Implementation() {
}

void ASBZDrill::Multicast_StopDrill_Implementation(ESBZDrillState StopState, float TimeLeftDrill) {
}

void ASBZDrill::Multicast_StartDrill_Implementation(float EndServerTime) {
}

bool ASBZDrill::JamDrill() {
    return false;
}

void ASBZDrill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDrill, State);
    DOREPLIFETIME(ASBZDrill, EndTime);
    DOREPLIFETIME(ASBZDrill, TimeLeft);
}

ASBZDrill::ASBZDrill() {
    this->State = ESBZDrillState::None;
    this->EndTime = -1.00f;
    this->TimeLeft = 10.00f;
    this->Duration = 10.00f;
    this->UnjamInteraction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("UnjamInteraction"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OutlineComponent"));
    this->OutlineAsset = NULL;
}

