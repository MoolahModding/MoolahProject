#include "SBZMainMenuArmorSlotButton.h"

USBZMainMenuArmorSlotButton::USBZMainMenuArmorSlotButton() {
    this->ArmorSlotIndex = -1;
}



bool USBZMainMenuArmorSlotButton::IsEmpty() const {
    return false;
}

void USBZMainMenuArmorSlotButton::InitializeArmorSlot(int32 InArmorSlotIndex) {
}

int32 USBZMainMenuArmorSlotButton::GetArmorSlotIndex() const {
    return 0;
}

FSBZArmorInventorySlot USBZMainMenuArmorSlotButton::GetArmorSlot() const {
    return FSBZArmorInventorySlot{};
}

USBZArmorData* USBZMainMenuArmorSlotButton::GetArmorInSlot() const {
    return NULL;
}


