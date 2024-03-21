#include "SBZMainMenuLoadoutWeaponModCategoryWidget.h"

void USBZMainMenuLoadoutWeaponModCategoryWidget::OnCategoryButtonSelected(const USBZModularPartSlotBase* ModSlot) {
}


USBZLoadoutModCategoryButton* USBZMainMenuLoadoutWeaponModCategoryWidget::GetAvailibleButton(int32 Index) {
    return NULL;
}

bool USBZMainMenuLoadoutWeaponModCategoryWidget::CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}

USBZMainMenuLoadoutWeaponModCategoryWidget::USBZMainMenuLoadoutWeaponModCategoryWidget() {
    this->ButtonClass = NULL;
    this->ObjectPoolAmount = 15;
    this->CategoryParentPanel = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = -1;
}

