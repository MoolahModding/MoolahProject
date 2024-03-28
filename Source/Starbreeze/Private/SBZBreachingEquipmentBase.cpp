#include "SBZBreachingEquipmentBase.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZAIAttractorComponent.h"
#include "SBZLifeActionComponent.h"
#include "SBZLifeActionInstance.h"
#include "SBZLifeActionSlot.h"
#include "SBZOutlineComponent.h"

void ASBZBreachingEquipmentBase::UpdateMarker(USBZMarkerDataAsset* MarkerAsset, const FVector MarkerLocation) {
}

void ASBZBreachingEquipmentBase::SetState(ESBZBreachingEquipmentState NewState, bool bDoCosmetics) {
}

void ASBZBreachingEquipmentBase::OnRep_CurrentState(ESBZBreachingEquipmentState OldState) {
}

void ASBZBreachingEquipmentBase::Multicast_SetState_Implementation(ESBZBreachingEquipmentState NewState) {
}

void ASBZBreachingEquipmentBase::Multicast_SetEstimatedCompleteTime_Implementation(float InEstimatedCompleteTime) {
}

float ASBZBreachingEquipmentBase::GetProgressMade() const {
    return 0.0f;
}

ESBZBreachingEquipmentState ASBZBreachingEquipmentBase::GetCurrentState() const {
    return ESBZBreachingEquipmentState::HeatingUp;
}


void ASBZBreachingEquipmentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBreachingEquipmentBase, CurrentEquipmentState);
    DOREPLIFETIME(ASBZBreachingEquipmentBase, EstimatedCompleteTime);
    DOREPLIFETIME(ASBZBreachingEquipmentBase, ProgressMade);
}

ASBZBreachingEquipmentBase::ASBZBreachingEquipmentBase() {
    this->DurationTimeSeconds = 200.00f;
    this->bCanEverBeSabotaged = true;
    this->OutlineAsset = NULL;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->CurrentEquipmentState = ESBZBreachingEquipmentState::NotAssembled;
    this->EstimatedCompleteTime = 0.00f;
    this->ProgressMade = 0.00f;
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->LifeActionComponent = CreateDefaultSubobject<USBZLifeActionComponent>(TEXT("SBZLifeActionComponent"));
    this->LifeActionInstance = CreateDefaultSubobject<USBZLifeActionInstance>(TEXT("SBZLifeActionInstance"));
    this->LifeActionSlot = CreateDefaultSubobject<USBZLifeActionSlot>(TEXT("SBZLifeActionSlot"));
    this->InteractionMarkerAsset = NULL;
    this->FixMarkerAsset = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->DrillingEvent = NULL;
    this->JammedEvent = NULL;
    this->HeatingUpEvent = NULL;
    this->DoneEvent = NULL;
}

