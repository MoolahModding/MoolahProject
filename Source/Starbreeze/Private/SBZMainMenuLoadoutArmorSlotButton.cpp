#include "SBZMainMenuLoadoutArmorSlotButton.h"

USBZMainMenuLoadoutArmorSlotButton::USBZMainMenuLoadoutArmorSlotButton() {
    this->ArmorSlotIndex = -1;
}



bool USBZMainMenuLoadoutArmorSlotButton::IsEmpty() const {
    return false;
}

void USBZMainMenuLoadoutArmorSlotButton::InitializeArmorSlot(int32 InArmorSlotIndex) {
}

void USBZMainMenuLoadoutArmorSlotButton::GetEntitlementAndArmorSku(FGuid& EntitlementID, FString& Sku) const {
}

int32 USBZMainMenuLoadoutArmorSlotButton::GetArmorSlotIndex() const {
    return 0;
}

FSBZArmorInventorySlot USBZMainMenuLoadoutArmorSlotButton::GetArmorSlot() const {
    return FSBZArmorInventorySlot{};
}

USBZInventoryBaseData* USBZMainMenuLoadoutArmorSlotButton::GetArmorInventoryData() const {
    return NULL;
}


