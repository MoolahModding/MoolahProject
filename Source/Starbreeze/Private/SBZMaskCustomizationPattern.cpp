#include "SBZMaskCustomizationPattern.h"

USBZMaskCustomizationPattern::USBZMaskCustomizationPattern() {
    this->PatternSlotAsset = NULL;
    this->SprayCanSlotAsset = NULL;
    this->CurrentMenuMode = EBSZPatternMenuMode::Pattern;
    this->MaxSprayCans = 4;
    this->ReturnPattern = NULL;
    this->SprayCanSelectorButtonClass = NULL;
    this->SprayCanSelectorButtonClass = NULL;
    this->ActiveSprayCanSlotIndex = -1;
    this->Cosmetic_Panel = NULL;
    this->SprayCanHorizontalPanel = NULL;
    this->CurrentPatternSelectedItemButton = NULL;
    this->StackValue = TEXT("Default__SBZMaskCustomizationPattern");
}

void USBZMaskCustomizationPattern::SprayCanSelectorButtonSelected(USBZMenuButton* SelectedButton) {
}

void USBZMaskCustomizationPattern::ShowSprayCans() {
}

void USBZMaskCustomizationPattern::ShowPatterns() {
}

bool USBZMaskCustomizationPattern::SetActiveSprayCanSlotIndex(int32 InIndex) {
    return false;
}

void USBZMaskCustomizationPattern::IncrementSprayCanSlotIndex(int32 InDelta) {
}

void USBZMaskCustomizationPattern::CosmeticPanelDefaultButtonSelected() {
}

void USBZMaskCustomizationPattern::CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton) {
}


