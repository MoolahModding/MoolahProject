#include "SBZLoadoutModCategoryButton.h"

USBZLoadoutModCategoryButton::USBZLoadoutModCategoryButton() {
    this->ModSlot = NULL;
    this->EquippedPart = NULL;
}

void USBZLoadoutModCategoryButton::SetSelectedCallback(FOnCategoryButtonSelected SelectedCallback) {
}


void USBZLoadoutModCategoryButton::InitializeModCategoryData(const USBZModularPartSlotBase* InSlot, const USBZModularPartDataAsset* InPart) {
}


