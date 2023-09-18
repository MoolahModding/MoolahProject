#include "SBZSettingsButtonMultipleChoice.h"

USBZSettingsButtonMultipleChoice::USBZSettingsButtonMultipleChoice() {
    this->OptionNames.AddDefaulted(4);
    this->ChoiceIndex = 0;
}

void USBZSettingsButtonMultipleChoice::SetOptionNames(const TArray<FText>& InOptionNames) {
}

void USBZSettingsButtonMultipleChoice::SetChoiceIndex(int32 InChoiceIndex) {
}



