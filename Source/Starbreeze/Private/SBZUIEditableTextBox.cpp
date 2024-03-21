#include "SBZUIEditableTextBox.h"

bool USBZUIEditableTextBox::IsEmptyOrConsistsOfWhitespaces(const FString& InString) const {
    return false;
}

USBZUIEditableTextBox::USBZUIEditableTextBox() {
    this->bEnableUserTextLengthLimit = false;
    this->MaxInputLength = 100;
}

