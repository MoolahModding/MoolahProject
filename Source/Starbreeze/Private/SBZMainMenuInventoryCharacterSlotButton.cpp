#include "SBZMainMenuInventoryCharacterSlotButton.h"

void USBZMainMenuInventoryCharacterSlotButton::SetPreferredValueIndex(int32 InPreferredValueIndex) {
}



bool USBZMainMenuInventoryCharacterSlotButton::IsPreferredCharacter() const {
    return false;
}

void USBZMainMenuInventoryCharacterSlotButton::InitializeCharacterSlotData(int32 InInventoryIndex) {
}

int32 USBZMainMenuInventoryCharacterSlotButton::GetDisplayPreferredIndex() const {
    return 0;
}

FSBZCharacterInventoryData USBZMainMenuInventoryCharacterSlotButton::GetCharacterSlotData() const {
    return FSBZCharacterInventoryData{};
}

void USBZMainMenuInventoryCharacterSlotButton::DeselectPreferredCharacter() {
}

USBZMainMenuInventoryCharacterSlotButton::USBZMainMenuInventoryCharacterSlotButton() {
    this->InventoryIndex = -1;
    this->PreferredValueIndex = -1;
}

