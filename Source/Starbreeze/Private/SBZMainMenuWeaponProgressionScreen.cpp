#include "SBZMainMenuWeaponProgressionScreen.h"

USBZMainMenuWeaponProgressionScreen::USBZMainMenuWeaponProgressionScreen() {
    this->Panel_WeaponProgressionPartButtons = NULL;
    this->Widget_WeaponProgressionDisplay = NULL;
    this->WeaponPartProgressionButtonClass = NULL;
    this->WeaponPartProgressionButtonClass = NULL;
    this->StackValue = TEXT("Default__SBZMainMenuWeaponProgressionScreen");
}

void USBZMainMenuWeaponProgressionScreen::OnWeaponPartProgressionButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused) {
}


bool USBZMainMenuWeaponProgressionScreen::DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}


