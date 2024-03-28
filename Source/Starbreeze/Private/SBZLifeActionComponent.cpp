#include "SBZLifeActionComponent.h"

void USBZLifeActionComponent::OnSlotStart(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void USBZLifeActionComponent::OnSlotReserved(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void USBZLifeActionComponent::OnSlotReady(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

void USBZLifeActionComponent::OnSlotFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZLifeActionComponent::OnSlotExited(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result) {
}

void USBZLifeActionComponent::OnSlotEntered(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot) {
}

bool USBZLifeActionComponent::IsCharacterPlayingAction(const ASBZCharacter* Character) const {
    return false;
}

bool USBZLifeActionComponent::IsCharacterPendingAction(const ASBZCharacter* Character) const {
    return false;
}

FTransform USBZLifeActionComponent::GetSlotTransformForCharacter(const ASBZCharacter* Character) const {
    return FTransform{};
}

USBZLifeActionSlot* USBZLifeActionComponent::GetReservedSlotForCharacter(const ASBZCharacter* Character) const {
    return NULL;
}

ASBZCharacter* USBZLifeActionComponent::GetCharacterInActionSlot(const FGameplayTag& LifeActionSlotTag, const USBZLifeActionInstance* LifeActionInstance) const {
    return NULL;
}

ASBZCharacter* USBZLifeActionComponent::GetCharacterInAction(const FGameplayTag& LifeActionTag) const {
    return NULL;
}

USBZLifeActionInstance* USBZLifeActionComponent::GetActionWithReservedSlotForCharacter(const ASBZCharacter* Character) const {
    return NULL;
}

USBZLifeActionInstance* USBZLifeActionComponent::GetActionForSlot(const USBZLifeActionSlot* Slot) {
    return NULL;
}

USBZLifeActionComponent::USBZLifeActionComponent() {
}

