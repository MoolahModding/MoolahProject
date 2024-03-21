#include "SBZMenuButton.h"

void USBZMenuButton::SetButtonDisabled(bool bInIsDisabled) {
}

void USBZMenuButton::SelectButton() {
}

void USBZMenuButton::NativeOnSelectionInputPressed() {
}

void USBZMenuButton::NativeOnAlternativeSelectionInputPressed() {
}








void USBZMenuButton::AlternativeSelectButton() {
}

USBZMenuButton::USBZMenuButton() {
    this->SelectionActionName = TEXT("UI_Accept");
    this->AlternativeActionName = TEXT("UI_Special");
    this->FocusedAudioEvent = NULL;
    this->bHoverGivesFocus = true;
    this->bSelectGivesFocus = false;
    this->bAlternativeGivesFocus = false;
    this->bShouldTriggerLastFocused = true;
    this->bIsDisabled = false;
}

