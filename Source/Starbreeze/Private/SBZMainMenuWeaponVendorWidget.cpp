#include "SBZMainMenuWeaponVendorWidget.h"

void USBZMainMenuWeaponVendorWidget::TryBuyWeaponPreset(const FSBZWeaponPresetStoreItem& WeaponPresetStoreItem) {
}

void USBZMainMenuWeaponVendorWidget::TryBuyWeapon(const FSBZWeaponStoreItem& WeaponStoreItem) {
}





void USBZMainMenuWeaponVendorWidget::NativeOnBuyWeaponPresetDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId) {
}

void USBZMainMenuWeaponVendorWidget::NativeOnBuyWeaponDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId) {
}

USBZMainMenuWeaponVendorWidget::USBZMainMenuWeaponVendorWidget() {
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
}

