#include "SBZMainMenuInventoryWidget.h"

USBZMainMenuInventoryWidget::USBZMainMenuInventoryWidget() {
    this->Button_LoadoutSlotStoreItem = NULL;
    this->StackValue = TEXT("Default__SBZMainMenuInventoryWidget");
}

void USBZMainMenuInventoryWidget::NativeOnLoadoutSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData) {
}



