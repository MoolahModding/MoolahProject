#include "SBZCosmeticsDataAsset.h"

USBZCosmeticsDataAsset::USBZCosmeticsDataAsset() {
    this->Rarity = ESBZRarity::Common;
}

bool USBZCosmeticsDataAsset::IsConsumable() const {
    return false;
}

ESBZRarity USBZCosmeticsDataAsset::GetRarity() const {
    return ESBZRarity::Common;
}


