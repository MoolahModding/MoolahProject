#include "PD3PlaceableStatusWidget.h"
#include "Components/SlateWrapperTypes.h"

UPD3PlaceableStatusWidget::UPD3PlaceableStatusWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->Widget_AbilityAction = NULL;
    this->bHasValidPlaceableIndex = false;
    this->CurrentPlaceableIndex = 0;
    this->AmmoInventory = 0;
}




