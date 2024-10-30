#include "SBZMainMenuPrePlanningWidget.h"

USBZMainMenuPrePlanningWidget::USBZMainMenuPrePlanningWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuPrePlanningWidget");
}



void USBZMainMenuPrePlanningWidget::NativeOnPlayerReadyStatusChanged(bool bInReadyStatus) {
}

bool USBZMainMenuPrePlanningWidget::IsAsyncLoadingDone() {
    return false;
}

ESBZOnlineTacticType USBZMainMenuPrePlanningWidget::GetTacticTypeFromGameSession() const {
    return ESBZOnlineTacticType::Default;
}

ESBZDifficulty USBZMainMenuPrePlanningWidget::GetDifficulty() const {
    return ESBZDifficulty::Default;
}


