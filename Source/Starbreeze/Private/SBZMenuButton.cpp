#include "SBZMenuButton.h"
#include "Components/SlateWrapperTypes.h"

USBZMenuButton::USBZMenuButton() {
    this->bOverride_Cursor = true;
    this->Cursor = EMouseCursor::Hand;
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->SelectionActionName = TEXT("UI_Accept");
    this->AlternativeActionName = TEXT("UI_Special");
    this->FocusedAudioEvent = NULL;
    this->bHoverGivesFocus = true;
    this->bSelectGivesFocus = false;
    this->bAlternativeGivesFocus = false;
    this->bShouldTriggerLastFocused = true;
    this->bIsDisabled = false;
}

void USBZMenuButton::SetButtonDisabled(bool bInIsDisabled) {
}

void USBZMenuButton::SelectButton() {
}

void USBZMenuButton::NativeOnSelectionInputPressed() {
}

void USBZMenuButton::NativeOnAlternativeSelectionInputPressed() {
}

bool USBZMenuButton::IsButtonDisabled() const {
    return false;
}









void USBZMenuButton::AlternativeSelectButton() {
}


