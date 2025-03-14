#include "SBZMainMenuArmorModifierScreen.h"

USBZMainMenuArmorModifierScreen::USBZMainMenuArmorModifierScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuArmorModifierScreen");
    this->Panel_ArmorChunkSlotButtons = NULL;
    this->ArmorChunkTypeButtonClass = NULL;
    this->EquippedArmorChunkButton = NULL;
    this->ArmorLoadoutIndex = -1;
    this->ArmorChunkIndex = -1;
    this->SelectedArmorChunkButton = NULL;
}

void USBZMainMenuArmorModifierScreen::SetNewEquippedButton(USBZMainMenuArmorChunkButton* InEquippedArmorChunkButton) {
}





void USBZMainMenuArmorModifierScreen::OnArmorChunkButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuArmorModifierScreen::OnArmorChunkButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused) {
}


bool USBZMainMenuArmorModifierScreen::InitializeArmorChunkCustomization(int32 InArmorLoadoutIndex, int32 InArmorChunkIndex) {
    return false;
}

int32 USBZMainMenuArmorModifierScreen::GetCurrentArmorChunkIndex() const {
    return 0;
}

void USBZMainMenuArmorModifierScreen::GetArmorInfo(int32& OutArmorLoadoutIndex, int32& OutArmorChunkIndex) {
}


