#include "SBZMainMenuPrePlanningWidget.h"

USBZMainMenuPrePlanningWidget::USBZMainMenuPrePlanningWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuPrePlanningWidget");
}



void USBZMainMenuPrePlanningWidget::NativeOnPlayerReadyStatusChanged(bool bInReadyStatus) {
}

bool USBZMainMenuPrePlanningWidget::IsAsyncLoadingDone() {
    return false;
}

ESBZDifficulty USBZMainMenuPrePlanningWidget::GetDifficulty() const {
    return ESBZDifficulty::Default;
}


