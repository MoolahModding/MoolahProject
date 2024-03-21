#include "SBZMainMenuInventoryCharacterPreferenceScreen.h"


void USBZMainMenuInventoryCharacterPreferenceScreen::NativeOnClearPreferredCharactersInputPressed() {
}

void USBZMainMenuInventoryCharacterPreferenceScreen::NativeOnCharacterPreferenceUpdated() {
}

void USBZMainMenuInventoryCharacterPreferenceScreen::NativeOnActiveCharacterSlotIndexChanged(int32 NewIndex) {
}

void USBZMainMenuInventoryCharacterPreferenceScreen::NativeCharacterSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuInventoryCharacterPreferenceScreen::NativeCharacterSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZMainMenuInventoryCharacterPreferenceScreen::IncrementSlot() {
}

void USBZMainMenuInventoryCharacterPreferenceScreen::DecrementSlot() {
}

USBZMainMenuInventoryCharacterPreferenceScreen::USBZMainMenuInventoryCharacterPreferenceScreen() {
    this->ClearCharactersInputActionName = TEXT("UI_TertiaryInteraction");
    this->CharacterSlotButtonClass = NULL;
    this->Panel_CharacterSlotButtons = NULL;
    this->Widget_CharacterPreferenceDisplay = NULL;
    this->Widget_CharacterDisplayPanel = NULL;
    this->FocusedCharacterSlotButton = NULL;
}

