#include "PD3DefeatTimerWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3DefeatTimerWidget::UPD3DefeatTimerWidget() {
    this->Visibility = ESlateVisibility::Hidden;
    this->TimerText = NULL;
}

void UPD3DefeatTimerWidget::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


