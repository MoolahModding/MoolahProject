#include "PD3ThrowableStatusWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ThrowableStatusWidget::UPD3ThrowableStatusWidget() {
    this->Widget_AbilityAction = NULL;
    this->bHasValidThrowableIndex = false;
    this->CurrentThrowableIndex = 0;
    this->AmmoInventory = 0;
    this->Visibility = ESlateVisibility::Collapsed;
}





