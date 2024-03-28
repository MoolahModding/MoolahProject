#include "SBZSettingsButtonTwoChoice.h"

void USBZSettingsButtonTwoChoice::SetToggleValue(bool bIsToggled) {
}

void USBZSettingsButtonTwoChoice::SetOptionTwoName(const FText& InOptionTwoName) {
}

void USBZSettingsButtonTwoChoice::SetOptionOneName(const FText& InOptionOneName) {
}



USBZSettingsButtonTwoChoice::USBZSettingsButtonTwoChoice() {
    this->OptionOneName = FText::FromString(TEXT("On"));
    this->OptionTwoName = FText::FromString(TEXT("Off"));
    this->bToggleValue = true;
}

