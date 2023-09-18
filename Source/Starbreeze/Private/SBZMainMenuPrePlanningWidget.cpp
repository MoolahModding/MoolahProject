#include "SBZMainMenuPrePlanningWidget.h"

USBZMainMenuPrePlanningWidget::USBZMainMenuPrePlanningWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuPrePlanningWidget");
}


bool USBZMainMenuPrePlanningWidget::IsAsyncLoadingDone() {
    return false;
}

ESBZDifficulty USBZMainMenuPrePlanningWidget::GetDifficulty() const {
    return ESBZDifficulty::Default;
}


