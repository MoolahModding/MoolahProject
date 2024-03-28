#include "SBZMainMenuInventoryGloveSlotButton.h"



bool USBZMainMenuInventoryGloveSlotButton::IsEmpty() const {
    return false;
}

void USBZMainMenuInventoryGloveSlotButton::InitializeGloveSlot(int32 InGloveSlotIndex) {
}

int32 USBZMainMenuInventoryGloveSlotButton::GetGloveSlotIndex() const {
    return 0;
}

USBZGloveData* USBZMainMenuInventoryGloveSlotButton::GetGloveInSlot() const {
    return NULL;
}

USBZMainMenuInventoryGloveSlotButton::USBZMainMenuInventoryGloveSlotButton() {
    this->GloveSlotIndex = -1;
}

