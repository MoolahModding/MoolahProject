#include "SBZMaskCustomizationGenericSlotScreen.h"

bool USBZMaskCustomizationGenericSlotScreen::InitializePartsSlot(const USBZCosmeticsPartSlot* PartsSlot, FSBZCosmeticPanelDefaultParams DefaultButtonParams) {
    return false;
}

void USBZMaskCustomizationGenericSlotScreen::CosmeticPanelDefaultButtonSelected() {
}

void USBZMaskCustomizationGenericSlotScreen::CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton) {
}

USBZMaskCustomizationGenericSlotScreen::USBZMaskCustomizationGenericSlotScreen() {
    this->Cosmetic_Panel = NULL;
    this->CosmeticPartsSlot = NULL;
    this->SelectedAsset = NULL;
}

