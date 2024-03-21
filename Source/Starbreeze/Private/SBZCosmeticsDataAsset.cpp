#include "SBZCosmeticsDataAsset.h"

bool USBZCosmeticsDataAsset::IsConsumable() const {
    return false;
}

ESBZRarity USBZCosmeticsDataAsset::GetRarity() const {
    return ESBZRarity::Common;
}

USBZCosmeticsDataAsset::USBZCosmeticsDataAsset() {
    this->Rarity = ESBZRarity::Common;
}

