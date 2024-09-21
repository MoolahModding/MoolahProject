#include "SBZLifeActionInstance.h"

USBZLifeActionInstance::USBZLifeActionInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogPlayer = NULL;
    this->OwningLifeActionComponent = NULL;
}

void USBZLifeActionInstance::StopDialog(bool bReset) {
}

void USBZLifeActionInstance::StartDialog() {
}

bool USBZLifeActionInstance::IsSlotFree(const FGameplayTag& InTag) const {
    return false;
}

FGameplayTag USBZLifeActionInstance::GetTag() const {
    return FGameplayTag{};
}

ESBZLifeActionState USBZLifeActionInstance::GetState() const {
    return ESBZLifeActionState::Stopped;
}

USBZLifeActionSlot* USBZLifeActionInstance::GetSlotWithTag(const FGameplayTag& InTag) const {
    return NULL;
}

USBZLifeActionSlot* USBZLifeActionInstance::GetReservedSlot(const ASBZCharacter* Character) const {
    return NULL;
}

bool USBZLifeActionInstance::ContainsSlot(const USBZLifeActionSlot* InSlot) const {
    return false;
}

bool USBZLifeActionInstance::AreAllNeededSlotsReady() const {
    return false;
}


