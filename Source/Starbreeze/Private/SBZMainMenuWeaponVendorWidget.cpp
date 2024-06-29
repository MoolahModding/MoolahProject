#include "SBZMainMenuWeaponVendorWidget.h"

USBZMainMenuWeaponVendorWidget::USBZMainMenuWeaponVendorWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuWeaponVendorWidget");
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
}

void USBZMainMenuWeaponVendorWidget::TryBuyWeaponPreset(const FSBZWeaponPresetStoreItem& WeaponPresetStoreItem) {
}

void USBZMainMenuWeaponVendorWidget::TryBuyWeapon(const FSBZWeaponStoreItem& WeaponStoreItem) {
}





void USBZMainMenuWeaponVendorWidget::NativeOnBuyWeaponPresetDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId) {
}

void USBZMainMenuWeaponVendorWidget::NativeOnBuyWeaponDone(ESBZMetaRequestResult BuyWeaponResult, FGuid ItemId) {
}


