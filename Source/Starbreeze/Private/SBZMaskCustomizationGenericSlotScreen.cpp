#include "SBZMaskCustomizationGenericSlotScreen.h"

USBZMaskCustomizationGenericSlotScreen::USBZMaskCustomizationGenericSlotScreen() {
    this->StackValue = TEXT("Default__SBZMaskCustomizationGenericSlotScreen");
    this->Cosmetic_Panel = NULL;
    this->CosmeticPartsSlot = NULL;
    this->SelectedAsset = NULL;
}

bool USBZMaskCustomizationGenericSlotScreen::InitializePartsSlot(const USBZCosmeticsPartSlot* PartsSlot, FSBZCosmeticPanelDefaultParams DefaultButtonParams) {
    return false;
}

void USBZMaskCustomizationGenericSlotScreen::CosmeticPanelDefaultButtonSelected() {
}

void USBZMaskCustomizationGenericSlotScreen::CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton) {
}


