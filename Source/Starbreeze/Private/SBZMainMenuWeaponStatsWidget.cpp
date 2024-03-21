#include "SBZMainMenuWeaponStatsWidget.h"

void USBZMainMenuWeaponStatsWidget::SetEmpty() {
}

void USBZMainMenuWeaponStatsWidget::SetBaseFromSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
}

void USBZMainMenuWeaponStatsWidget::SetBaseFromEquippableData(const USBZEquippableData* InEquippableData) {
}

void USBZMainMenuWeaponStatsWidget::SetBaseFromEquippableConfig(const FSBZEquippableConfig& InEquippableConfig) {
}



bool USBZMainMenuWeaponStatsWidget::HasCompare() const {
    return false;
}

void USBZMainMenuWeaponStatsWidget::CompareWithWeaponPart(const USBZModularPartSlotBase* InPartSlot, const USBZEquippablePartDataAsset* InWeaponPart) {
}

void USBZMainMenuWeaponStatsWidget::CompareWithSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
}

void USBZMainMenuWeaponStatsWidget::CompareWithNothing() {
}

void USBZMainMenuWeaponStatsWidget::CompareWithEquippableData(const USBZEquippableData* InEquippableData) {
}

void USBZMainMenuWeaponStatsWidget::CompareWithEquippableConfig(const FSBZEquippableConfig& InEquippableConfig) {
}

USBZMainMenuWeaponStatsWidget::USBZMainMenuWeaponStatsWidget() {
    this->BaseAmmoLoadedMax = 0;
    this->BaseAmmoInventoryMax = 0;
    this->BaseFireType = ESBZFireType::Semi;
    this->CompareAmmoLoadedMax = 0;
    this->CompareAmmoInventoryMax = 0;
    this->CompareFireType = ESBZFireType::Semi;
    this->UIWeaponStats = NULL;
}

