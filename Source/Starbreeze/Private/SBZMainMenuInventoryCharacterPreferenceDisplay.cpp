#include "SBZMainMenuInventoryCharacterPreferenceDisplay.h"

USBZMainMenuInventoryCharacterPreferenceDisplay::USBZMainMenuInventoryCharacterPreferenceDisplay() {
    this->HorizontalBox_CharacterDisplays = NULL;
    this->CharacterDisplayWidgetClass = NULL;
    this->ActiveIndex = 0;
}

void USBZMainMenuInventoryCharacterPreferenceDisplay::SetActiveIndex(int32 NewActiveIndex) {
}

void USBZMainMenuInventoryCharacterPreferenceDisplay::OnGameInstallStateChanged(bool bIsInstallPending) {
}

void USBZMainMenuInventoryCharacterPreferenceDisplay::NativeOnPreferredCharacterSlotButtonSelected(USBZCharacterPreferenceCharacterSlotButton* SelectedPreferredCharacterSlotButton) {
}

bool USBZMainMenuInventoryCharacterPreferenceDisplay::IsActiveSlotEmpty() const {
    return false;
}

void USBZMainMenuInventoryCharacterPreferenceDisplay::InitializeCharacterDisplays(int32 SlotIndex) {
}

void USBZMainMenuInventoryCharacterPreferenceDisplay::IncrementActiveIndex() {
}

int32 USBZMainMenuInventoryCharacterPreferenceDisplay::GetActiveIndex() const {
    return 0;
}

void USBZMainMenuInventoryCharacterPreferenceDisplay::DecrementActiveIndex() {
}


