#include "SBZMainMenuCosmetic.h"


void USBZMainMenuCosmetic::PopulateStoreItems(ESBZItemCategory Category) {
}


bool USBZMainMenuCosmetic::IsSelectButtonDown() const {
    return false;
}

void USBZMainMenuCosmetic::Display(ESBZMainMenuCosmeticType InType, ESBZEquippableLoadoutSlot InEquippableSlot, int32 InIndex) {
}

void USBZMainMenuCosmetic::Buy(const TMap<USBZCosmeticsPartSlot*, USBZModularPartDataAsset*>& InBuyDataMap) {
}



void USBZMainMenuCosmetic::ApplyMaskPreview() {
}

void USBZMainMenuCosmetic::ApplyEquippablePreview(const TMap<USBZCosmeticsPartSlot*, USBZModularPartDataAsset*>& InPreviewDataMap, const TMap<USBZCosmeticsPartSlot*, USBZModularPartConfig*>& InPreviewConfigMap) {
}

USBZMainMenuCosmetic::USBZMainMenuCosmetic() {
    this->Type = ESBZMainMenuCosmeticType::Mask;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->Index = -1;
}

