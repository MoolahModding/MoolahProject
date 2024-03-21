#include "SBZSettingsButtonMultipleChoice.h"

void USBZSettingsButtonMultipleChoice::SetOptionNames(const TArray<FText>& InOptionNames) {
}

void USBZSettingsButtonMultipleChoice::SetChoiceIndex(int32 InChoiceIndex) {
}


USBZSettingsButtonMultipleChoice::USBZSettingsButtonMultipleChoice() {
    this->OptionNames.AddDefaulted(4);
    this->ChoiceIndex = 0;
}

