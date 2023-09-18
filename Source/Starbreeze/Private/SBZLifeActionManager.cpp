#include "SBZLifeActionManager.h"

USBZLifeActionManager::USBZLifeActionManager() {
}

void USBZLifeActionManager::StopActionForCharacter(ASBZCharacter* Character, USBZLifeActionSlot* Slot, ESBZLifeActionStopReason StopReason) {
}

bool USBZLifeActionManager::SetSlotReadyForCharacter(ASBZCharacter* Character) {
    return false;
}

USBZLifeActionSlot* USBZLifeActionManager::ReserveAction(ASBZCharacter* Character, const FSBZLifeActionRequest& Request) {
    return NULL;
}

void USBZLifeActionManager::OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void USBZLifeActionManager::OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZLifeActionManager::OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZLifeActionManager::OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

bool USBZLifeActionManager::IsCharacterPlayingAction(const ASBZCharacter* Character) const {
    return false;
}

bool USBZLifeActionManager::IsCharacterPendingAction(const ASBZCharacter* Character) const {
    return false;
}

USBZLifeActionComponent* USBZLifeActionManager::GetLifeActionComponentForCharacter(const ASBZCharacter* Character) const {
    return NULL;
}

USBZLifeActionSlot* USBZLifeActionManager::GetClosestLifeActionMatchingTagAny(const FVector Location, const FGameplayTag& LifeActionSlotTag) const {
    return NULL;
}

ASBZCharacter* USBZLifeActionManager::GetCharacterForActionSlot(const USBZLifeActionComponent* LifeActionComponent, const FGameplayTag& LifeActionSlotTag, const USBZLifeActionInstance* LifeActionInstance) const {
    return NULL;
}

FTransform USBZLifeActionManager::GetActionSlotTransformForCharacter(const ASBZCharacter* Character) const {
    return FTransform{};
}

USBZLifeActionSlot* USBZLifeActionManager::GetActionSlotForCharacter(const ASBZCharacter* Character) const {
    return NULL;
}

USBZLifeActionManager* USBZLifeActionManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool USBZLifeActionManager::EnterActionForCharacter(ASBZCharacter* Character) {
    return false;
}


