#include "SBZMaskCustomizationGenericSlotScreen.h"

USBZMaskCustomizationGenericSlotScreen::USBZMaskCustomizationGenericSlotScreen() {
    this->Cosmetic_Panel = NULL;
    this->CosmeticPartsSlot = NULL;
    this->SelectedAsset = NULL;
    this->StackValue = TEXT("Default__SBZMaskCustomizationGenericSlotScreen");
}

bool USBZMaskCustomizationGenericSlotScreen::InitializePartsSlot(const USBZCosmeticsPartSlot* PartsSlot, FSBZCosmeticPanelDefaultParams DefaultButtonParams) {
    return false;
}

void USBZMaskCustomizationGenericSlotScreen::CosmeticPanelDefaultButtonSelected() {
}

void USBZMaskCustomizationGenericSlotScreen::CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton) {
}


