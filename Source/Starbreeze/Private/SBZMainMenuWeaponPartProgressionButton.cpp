#include "SBZMainMenuWeaponPartProgressionButton.h"


void USBZMainMenuWeaponPartProgressionButton::SetIsDefaultButton() {
}

void USBZMainMenuWeaponPartProgressionButton::SetEquipped(bool bInIsEquipped) {
}


bool USBZMainMenuWeaponPartProgressionButton::IsDefaultButton() const {
    return false;
}

void USBZMainMenuWeaponPartProgressionButton::InitializeWeaponPartProgression(const FSBZWeaponPartProgressionCurrent& InWeaponPartProgression) {
}

FSBZWeaponPartProgressionCurrent USBZMainMenuWeaponPartProgressionButton::GetWeaponPartProgression() const {
    return FSBZWeaponPartProgressionCurrent{};
}

USBZWeaponPartDataAsset* USBZMainMenuWeaponPartProgressionButton::GetWeaponPart() const {
    return NULL;
}

int32 USBZMainMenuWeaponPartProgressionButton::GetUnlockLevel() const {
    return 0;
}

ESBZWeaponPartApplyStatus USBZMainMenuWeaponPartProgressionButton::GetPartApplyStatus() const {
    return ESBZWeaponPartApplyStatus::NotAllowed;
}


USBZMainMenuWeaponPartProgressionButton::USBZMainMenuWeaponPartProgressionButton() {
    this->bIsEquipped = false;
    this->bIsDefault = false;
}

