#include "SBZMainMenuInventorySuitSlotButton.h"



bool USBZMainMenuInventorySuitSlotButton::IsPresetSuitSlot() const {
    return false;
}

bool USBZMainMenuInventorySuitSlotButton::IsEmpty() const {
    return false;
}

void USBZMainMenuInventorySuitSlotButton::InitializeSuitSlot(int32 InSuitSlotIndex) {
}

int32 USBZMainMenuInventorySuitSlotButton::GetSuitSlotIndex() const {
    return 0;
}

FSBZSuitConfig USBZMainMenuInventorySuitSlotButton::GetSuitInSlotConfig() const {
    return FSBZSuitConfig{};
}

USBZSuitData* USBZMainMenuInventorySuitSlotButton::GetSuitInSlot() const {
    return NULL;
}

USBZMainMenuInventorySuitSlotButton::USBZMainMenuInventorySuitSlotButton() {
    this->SuitSlotIndex = -1;
}

