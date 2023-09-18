#include "SBZMainMenuChallengesWidget.h"

USBZMainMenuChallengesWidget::USBZMainMenuChallengesWidget() {
    this->Panel_ChallengeButtons = NULL;
    this->Widget_Loading = NULL;
    this->ChallengeButtonClass = NULL;
    this->ChallengeButtonClass = NULL;
    this->ChallengesDisplayedPerPage = 8;
    this->CategoryCurrent = NULL;
    this->AllStatuses = true;
    this->PagesTotalCount = 1;
    this->PageCurrent = 1;
    this->StackValue = TEXT("Default__SBZMainMenuChallengesWidget");
}

void USBZMainMenuChallengesWidget::ToggleFilterStatus(EChallengeStatusEnum Status, bool ForceSingleOrNone) {
}

void USBZMainMenuChallengesWidget::SetPage(int32 Index) {
}

void USBZMainMenuChallengesWidget::SetFilterCategory(const USBZChallengeCategoryData* Category) {
}

void USBZMainMenuChallengesWidget::ResetFilterStatuses() {
}

void USBZMainMenuChallengesWidget::PrevPage() {
}





void USBZMainMenuChallengesWidget::NextPage() {
}

void USBZMainMenuChallengesWidget::NativeOnChallengeButtonFocusedChanged(USBZMenuButton* InCategoryButton, bool bIsFocused) {
}

void USBZMainMenuChallengesWidget::CycleFilterStatuses() {
}


