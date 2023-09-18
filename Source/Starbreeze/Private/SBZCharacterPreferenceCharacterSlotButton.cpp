#include "SBZCharacterPreferenceCharacterSlotButton.h"

USBZCharacterPreferenceCharacterSlotButton::USBZCharacterPreferenceCharacterSlotButton() {
    this->bIsLocked = false;
    this->ItemIndex = -1;
    this->CharacterInSlot = NULL;
}

void USBZCharacterPreferenceCharacterSlotButton::SetLocked(bool bInIsLocked) {
}

void USBZCharacterPreferenceCharacterSlotButton::SetIndexNone() {
}

void USBZCharacterPreferenceCharacterSlotButton::SetIndex(int32 InItemIndex) {
}

void USBZCharacterPreferenceCharacterSlotButton::SetEmpty() {
}

void USBZCharacterPreferenceCharacterSlotButton::SetCharacterInSlot(const USBZPlayerCharacterData* InCharacterInSlot) {
}

void USBZCharacterPreferenceCharacterSlotButton::SetActive(bool bInIsActive) {
}








bool USBZCharacterPreferenceCharacterSlotButton::IsLocked() const {
    return false;
}

bool USBZCharacterPreferenceCharacterSlotButton::IsEmpty() const {
    return false;
}

int32 USBZCharacterPreferenceCharacterSlotButton::GetDisplayIndex() const {
    return 0;
}


