#include "PD3ToolStatusWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3ToolStatusWidget::UPD3ToolStatusWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->Widget_AbilityAction = NULL;
    this->bHasValidPlaceableIndex = false;
    this->AmmoInventory = 0;
}




