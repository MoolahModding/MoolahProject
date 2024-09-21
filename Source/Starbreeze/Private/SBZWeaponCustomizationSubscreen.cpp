#include "SBZWeaponCustomizationSubscreen.h"

USBZWeaponCustomizationSubscreen::USBZWeaponCustomizationSubscreen() {
    this->CosmeticSlot = NULL;
    this->CosmeticData = NULL;
    this->CosmeticConfig = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = -1;
}


void USBZWeaponCustomizationSubscreen::SetupScreen(const USBZCosmeticsPartSlot* NewCosmeticSlot, ESBZEquippableLoadoutSlot LoadoutSlot, int32 LoadoutIndex) {
}

void USBZWeaponCustomizationSubscreen::RefreshEquippableConfig(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
}




void USBZWeaponCustomizationSubscreen::OnApplyCosmeticDone(ESBZMetaRequestResult Result) {
}

USBZCosmeticsPartSlot* USBZWeaponCustomizationSubscreen::GetCosmeticSlot() const {
    return NULL;
}

USBZCosmeticsDataAsset* USBZWeaponCustomizationSubscreen::GetCosmeticPart() const {
    return NULL;
}

TArray<FSBZCosmeticsInventoryItem> USBZWeaponCustomizationSubscreen::GetCosmeticItems(const USBZCosmeticsPartSlot* NewCosmeticSlot) {
    return TArray<FSBZCosmeticsInventoryItem>();
}

USBZEquippablePartConfig* USBZWeaponCustomizationSubscreen::GetCosmeticConfig() {
    return NULL;
}

void USBZWeaponCustomizationSubscreen::ApplyCosmeticOnBackend() {
}

void USBZWeaponCustomizationSubscreen::ApplyCosmeticData(const USBZCosmeticsDataAsset* CosmeticDataAsset) {
}

void USBZWeaponCustomizationSubscreen::ApplyCosmeticConfig(const USBZCosmeticsDataAsset* CosmeticDataAsset, int32 ConfigIndex) {
}


