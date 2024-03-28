#include "PD3TickerWidget.h"


void UPD3TickerWidget::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}

UPD3TickerWidget::UPD3TickerWidget() {
    this->ShowAnimation = NULL;
    this->HideAnimation = NULL;
    this->Prefix = TEXT("///  ");
    this->Postfix = TEXT("  ");
}

