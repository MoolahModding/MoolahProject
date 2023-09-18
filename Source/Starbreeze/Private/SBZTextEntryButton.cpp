#include "SBZTextEntryButton.h"

USBZTextEntryButton::USBZTextEntryButton() {
    this->EditableText_TextInput = NULL;
    this->bSanitizeInputText = true;
    this->Cursor = EMouseCursor::TextEditBeam;
}

void USBZTextEntryButton::SetInputText(const FText& InText) {
}

void USBZTextEntryButton::OnTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

FText USBZTextEntryButton::GetCurrentText() const {
    return FText::GetEmpty();
}



