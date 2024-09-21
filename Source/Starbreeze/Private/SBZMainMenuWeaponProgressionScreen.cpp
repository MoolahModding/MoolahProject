#include "SBZMainMenuWeaponProgressionScreen.h"

USBZMainMenuWeaponProgressionScreen::USBZMainMenuWeaponProgressionScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuWeaponProgressionScreen");
    this->Panel_WeaponProgressionPartButtons = NULL;
    this->Widget_WeaponProgressionDisplay = NULL;
    this->WeaponPartProgressionButtonClass = NULL;
}

void USBZMainMenuWeaponProgressionScreen::OnWeaponPartProgressionButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused) {
}


bool USBZMainMenuWeaponProgressionScreen::DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}


