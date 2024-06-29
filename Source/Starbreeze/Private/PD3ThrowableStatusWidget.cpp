#include "PD3ThrowableStatusWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ThrowableStatusWidget::UPD3ThrowableStatusWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->Widget_AbilityAction = NULL;
    this->bHasValidThrowableIndex = false;
    this->CurrentThrowableIndex = 0;
    this->AmmoInventory = 0;
}





