#include "SBZHeadbobCameraModifier.h"

void USBZHeadbobCameraModifier::HandleEquippableArrayChanged(ASBZCharacter* Character) {
}

void USBZHeadbobCameraModifier::HandleCurrentEquippableIndexChanged(ASBZCharacter* Character, int32 CurrentEquippableIndex, bool bIsOnlyDataChanged) {
}

USBZHeadbobCameraModifier::USBZHeadbobCameraModifier() {
    this->DefaultHeadbobData = NULL;
    this->CurrentData = NULL;
    this->CurrentTargetingData = NULL;
}

