#include "SBZUIEditableTextBox.h"

USBZUIEditableTextBox::USBZUIEditableTextBox() {
    this->bEnableUserTextLengthLimit = false;
    this->MaxInputLength = 100;
}

bool USBZUIEditableTextBox::IsEmptyOrConsistsOfWhitespaces(const FString& InString) const {
    return false;
}


