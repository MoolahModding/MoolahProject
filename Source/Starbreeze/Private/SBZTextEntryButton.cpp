#include "SBZTextEntryButton.h"

void USBZTextEntryButton::SetInputText(const FText& InText) {
}

void USBZTextEntryButton::OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

FText USBZTextEntryButton::GetCurrentText() const {
    return FText::GetEmpty();
}


USBZTextEntryButton::USBZTextEntryButton() {
    this->EditableText_TextInput = NULL;
    this->bSanitizeInputText = true;
}

