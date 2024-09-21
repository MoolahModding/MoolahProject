#include "SBZGameStartMainMenuSkillsSelection.h"

USBZGameStartMainMenuSkillsSelection::USBZGameStartMainMenuSkillsSelection() {
    this->StackValue = TEXT("SkillsCustomization");
    this->AlternativeSelectionInput = TEXT("UI_TertiaryInteraction");
    this->AlternativeSelectionHoldDuration = 0.50f;
    this->DescriptionScrollAxis = TEXT("LookUpRate");
    this->DescriptionScrollSpeed = 1.00f;
    this->AxisDeadZone = 0.10f;
    this->CurrentLoadoutIndex = -1;
}





void USBZGameStartMainMenuSkillsSelection::NativeOnAlternativeSelectionReleased() {
}

void USBZGameStartMainMenuSkillsSelection::NativeOnAlternativeSelectionPressed() {
}

void USBZGameStartMainMenuSkillsSelection::HandleProgressionSave(ESBZMetaRequestResult Result) {
}

bool USBZGameStartMainMenuSkillsSelection::CustomizeSkillsForPlayerLoadoutIndex(int32 InLoadoutIndex) {
    return false;
}


