#include "SBZMainMenuInventoryWidget.h"

USBZMainMenuInventoryWidget::USBZMainMenuInventoryWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuInventoryWidget");
    this->Button_LoadoutSlotStoreItem = NULL;
}

void USBZMainMenuInventoryWidget::NativeOnLoadoutSlotStoreItemTransactionComplete(ESBZMetaRequestResult MetaResult, const USBZInventoryBaseData* InventoryItemData) {
}



