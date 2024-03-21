#include "SBZLoadoutModCategoryButton.h"

void USBZLoadoutModCategoryButton::SetSelectedCallback(FOnCategoryButtonSelected SelectedCallback) {
}


void USBZLoadoutModCategoryButton::InitializeModCategoryData(const USBZModularPartSlotBase* InSlot, const USBZModularPartDataAsset* InPart) {
}

USBZLoadoutModCategoryButton::USBZLoadoutModCategoryButton() {
    this->ModSlot = NULL;
    this->EquippedPart = NULL;
}

