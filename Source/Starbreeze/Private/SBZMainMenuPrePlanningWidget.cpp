#include "SBZMainMenuPrePlanningWidget.h"



void USBZMainMenuPrePlanningWidget::NativeOnPlayerReadyStatusChanged(bool bInReadyStatus) {
}

bool USBZMainMenuPrePlanningWidget::IsAsyncLoadingDone() {
    return false;
}

ESBZDifficulty USBZMainMenuPrePlanningWidget::GetDifficulty() const {
    return ESBZDifficulty::Default;
}

USBZMainMenuPrePlanningWidget::USBZMainMenuPrePlanningWidget() {
}

