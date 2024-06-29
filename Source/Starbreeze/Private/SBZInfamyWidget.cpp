#include "SBZInfamyWidget.h"

USBZInfamyWidget::USBZInfamyWidget() {
    this->InfamyLevel = 0;
    this->InfamyExperience = 0;
    this->ExperienceForCurrentLevel = 0;
    this->ExperienceForNextLevel = 0;
    this->CurrentLevelProgress = 0.00f;
    this->bIsMaxLevel = false;
}

void USBZInfamyWidget::RefreshCurrentInfamyData(USBZInfamyManager* InfamyManager) {
}


void USBZInfamyWidget::OnInfamyAdded(USBZInfamyManager* InfamyManager, int32 InLevelValue, int32 InExpirienceValue) {
}


