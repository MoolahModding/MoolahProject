#include "SBZHeadbobCameraModifier.h"

USBZHeadbobCameraModifier::USBZHeadbobCameraModifier() {
    this->DefaultHeadbobData = NULL;
    this->CurrentData = NULL;
    this->CurrentTargetingData = NULL;
}

void USBZHeadbobCameraModifier::HandleEquippableArrayChanged(ASBZCharacter* Character) {
}

void USBZHeadbobCameraModifier::HandleCurrentEquippableIndexChanged(ASBZCharacter* Character, int32 CurrentEquippableIndex, bool bIsOnlyDataChanged) {
}


