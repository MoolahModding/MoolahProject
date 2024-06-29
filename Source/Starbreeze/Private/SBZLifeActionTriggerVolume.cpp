#include "SBZLifeActionTriggerVolume.h"
#include "SBZActorFilterComponent.h"

ASBZLifeActionTriggerVolume::ASBZLifeActionTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bShouldStartEnabled = true;
    this->bDisableOnLifeActionReserved = false;
    this->bDisableOnLifeActionExiting = false;
    this->bDisableOnLifeActionComplete = false;
    this->ActorFilterComponent = CreateDefaultSubobject<USBZActorFilterComponent>(TEXT("SBZActorFilterComponent"));
    this->bTriggeredByHumanShield = false;
    this->bAutoTrigger = false;
    this->Action = NULL;
}

void ASBZLifeActionTriggerVolume::SetVolumeEnabled(bool bEnabled) {
}

void ASBZLifeActionTriggerVolume::OnSlotStart(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void ASBZLifeActionTriggerVolume::OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void ASBZLifeActionTriggerVolume::OnSlotReady(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void ASBZLifeActionTriggerVolume::OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void ASBZLifeActionTriggerVolume::OnSlotExiting(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void ASBZLifeActionTriggerVolume::OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void ASBZLifeActionTriggerVolume::OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void ASBZLifeActionTriggerVolume::OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}

void ASBZLifeActionTriggerVolume::OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors) {
}


