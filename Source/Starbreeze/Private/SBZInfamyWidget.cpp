#include "SBZInfamyWidget.h"

USBZInfamyWidget::USBZInfamyWidget() {
    this->InfamyLevel = 0;
    this->InfamyExperience = 0;
    this->ExperienceForCurrentLevel = 0;
    this->ExperienceForNextLevel = 0;
    this->CurrentLevelProgress = 0.00f;
    this->bIsMaxLevel = false;
}

void USBZInfamyWidget::RefreshCurrentInfamyData() {
}


void USBZInfamyWidget::OnInfamyAdded(const int32 InLevelValue, const int32 InExpirienceValue, const int32 NewRenownLevel, const int32 PreviousRenownLevel) {
}


