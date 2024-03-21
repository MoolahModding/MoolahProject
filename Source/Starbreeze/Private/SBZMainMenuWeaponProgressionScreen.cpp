#include "SBZMainMenuWeaponProgressionScreen.h"

void USBZMainMenuWeaponProgressionScreen::OnWeaponPartProgressionButtonFocusedChanged(USBZMenuButton* InButton, bool bIsFocused) {
}


bool USBZMainMenuWeaponProgressionScreen::DisplayWeaponProgressionScreen(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}

USBZMainMenuWeaponProgressionScreen::USBZMainMenuWeaponProgressionScreen() {
    this->Panel_WeaponProgressionPartButtons = NULL;
    this->Widget_WeaponProgressionDisplay = NULL;
    this->WeaponPartProgressionButtonClass = NULL;
}

