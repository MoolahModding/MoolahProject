#include "SBZMainMenuLoadoutWeaponModCategoryWidget.h"

USBZMainMenuLoadoutWeaponModCategoryWidget::USBZMainMenuLoadoutWeaponModCategoryWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuLoadoutWeaponModCategoryWidget");
    this->ButtonClass = NULL;
    this->ObjectPoolAmount = 15;
    this->CategoryParentPanel = NULL;
    this->EquippableSlot = ESBZEquippableLoadoutSlot::PrimaryWeapon;
    this->WeaponSlotIndex = -1;
}

void USBZMainMenuLoadoutWeaponModCategoryWidget::OnCategoryButtonSelected(const USBZModularPartSlotBase* ModSlot) {
}


USBZLoadoutModCategoryButton* USBZMainMenuLoadoutWeaponModCategoryWidget::GetAvailibleButton(int32 Index) {
    return NULL;
}

bool USBZMainMenuLoadoutWeaponModCategoryWidget::CustomizeWeaponInSlot(ESBZEquippableLoadoutSlot InEquippableSlot, int32 InWeaponSlotIndex) {
    return false;
}


