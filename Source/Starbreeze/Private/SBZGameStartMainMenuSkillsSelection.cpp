#include "SBZGameStartMainMenuSkillsSelection.h"





void USBZGameStartMainMenuSkillsSelection::NativeOnAlternativeSelectionReleased() {
}

void USBZGameStartMainMenuSkillsSelection::NativeOnAlternativeSelectionPressed() {
}

void USBZGameStartMainMenuSkillsSelection::HandleProgressionSave(ESBZMetaRequestResult Result) {
}

bool USBZGameStartMainMenuSkillsSelection::CustomizeSkillsForPlayerLoadoutIndex(int32 InLoadoutIndex) {
    return false;
}

bool USBZGameStartMainMenuSkillsSelection::CustomizeSkillsForPlayerLoadout(const FSBZPlayerLoadoutConfig& InLoadoutToConfig) {
    return false;
}

USBZGameStartMainMenuSkillsSelection::USBZGameStartMainMenuSkillsSelection() {
    this->AlternativeSelectionInput = TEXT("UI_TertiaryInteraction");
    this->AlternativeSelectionHoldDuration = 0.50f;
    this->DescriptionScrollAxis = TEXT("LookUpRate");
    this->DescriptionScrollSpeed = 1.00f;
    this->AxisDeadZone = 0.10f;
    this->CurrentLoadoutIndex = -1;
}

