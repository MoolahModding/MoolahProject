#include "SBZInventoryBaseData.h"

FText USBZInventoryBaseData::GetFormattedDescriptionText() const {
    return FText::GetEmpty();
}

void USBZInventoryBaseData::GetDisplayName(FText& OutDisplayName, bool& OutHasText) const {
}

USBZInventoryBaseData::USBZInventoryBaseData() {
    this->ItemRarity = ESBZItemRarity::NoRarity;
}

