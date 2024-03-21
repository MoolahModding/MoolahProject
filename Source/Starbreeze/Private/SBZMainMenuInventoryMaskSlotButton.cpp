#include "SBZMainMenuInventoryMaskSlotButton.h"



bool USBZMainMenuInventoryMaskSlotButton::IsPresetMaskSlot() const {
    return false;
}

bool USBZMainMenuInventoryMaskSlotButton::IsPreconfigMaskSlot() const {
    return false;
}

bool USBZMainMenuInventoryMaskSlotButton::IsEmpty() const {
    return false;
}

void USBZMainMenuInventoryMaskSlotButton::InitializeMaskSlot(int32 InMaskSlotIndex) {
}

int32 USBZMainMenuInventoryMaskSlotButton::GetMaskSlotIndex() const {
    return 0;
}

FSBZMaskInventorySlot USBZMainMenuInventoryMaskSlotButton::GetMaskSlot() const {
    return FSBZMaskInventorySlot{};
}

USBZMaskData* USBZMainMenuInventoryMaskSlotButton::GetMaskInSlot() const {
    return NULL;
}

USBZMainMenuInventoryMaskSlotButton::USBZMainMenuInventoryMaskSlotButton() {
    this->MaskSlotIndex = -1;
}

