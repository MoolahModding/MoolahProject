#include "SBZMainMenuInventoryItemSlotButton.h"



bool USBZMainMenuInventoryItemSlotButton::IsAvailable() const {
    return false;
}

void USBZMainMenuInventoryItemSlotButton::InitializeItem(const USBZInventoryBaseData* InventoryBaseData) {
}

void USBZMainMenuInventoryItemSlotButton::InitializeInventoryItem(const FSBZPlayerUiItemInfo& InItemData) {
}

FText USBZMainMenuInventoryItemSlotButton::GetSkillName() const {
    return FText::GetEmpty();
}

ESBZUIItemSource USBZMainMenuInventoryItemSlotButton::GetItemSource() const {
    return ESBZUIItemSource::InfamyLevel;
}

USBZInventoryBaseData* USBZMainMenuInventoryItemSlotButton::GetItemData() const {
    return NULL;
}

int32 USBZMainMenuInventoryItemSlotButton::GetInfamyLevel() const {
    return 0;
}

USBZMainMenuInventoryItemSlotButton::USBZMainMenuInventoryItemSlotButton() {
    this->ItemData = NULL;
    this->InfamyLevel = 0;
    this->bIsAvailable = false;
    this->ItemSource = ESBZUIItemSource::InfamyLevel;
}

