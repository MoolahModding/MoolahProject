#include "PD3TickerWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3TickerWidget::UPD3TickerWidget() {
    this->Visibility = ESlateVisibility::Hidden;
    this->ShowAnimation = NULL;
    this->HideAnimation = NULL;
    this->Prefix = TEXT("///  ");
    this->Postfix = TEXT("  ");
}


void UPD3TickerWidget::OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState) {
}


