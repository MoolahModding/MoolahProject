#include "SBZBaseInventoryItemVisualsWidget.h"


void USBZBaseInventoryItemVisualsWidget::SetEmpty() {
}


void USBZBaseInventoryItemVisualsWidget::NativeOnSpriteLoaded() {
}


void USBZBaseInventoryItemVisualsWidget::InitializeItem(const USBZInventoryBaseData* InItem, bool bShouldLoadImage) {
}


USBZBaseInventoryItemVisualsWidget::USBZBaseInventoryItemVisualsWidget() {
    this->Item = NULL;
    this->ItemSprite = NULL;
    this->LastItemSprite = NULL;
}

