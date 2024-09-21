#include "SBZInventoryBaseData.h"

USBZInventoryBaseData::USBZInventoryBaseData() {
    this->ItemRarity = ESBZItemRarity::NoRarity;
}

FText USBZInventoryBaseData::GetFormattedDescriptionText() const {
    return FText::GetEmpty();
}

void USBZInventoryBaseData::GetDisplayName(FText& OutDisplayName, bool& OutHasText) const {
}


