#include "SBZMainMenuLoadoutArmorModCategoryWidget.h"

USBZMainMenuLoadoutArmorModCategoryWidget::USBZMainMenuLoadoutArmorModCategoryWidget() {
    this->StackValue = TEXT("Default__SBZMainMenuLoadoutArmorModCategoryWidget");
    this->ButtonClass = NULL;
    this->ObjectPoolAmount = 15;
    this->CategoryParentPanel = NULL;
    this->ArmorSlotIndex = -1;
}

void USBZMainMenuLoadoutArmorModCategoryWidget::OnCategoryButtonSelected(int32 InArmorChunkIndex) {
}


USBZArmorModCategoryButton* USBZMainMenuLoadoutArmorModCategoryWidget::GetAvailableButton(int32 Index) {
    return NULL;
}

bool USBZMainMenuLoadoutArmorModCategoryWidget::CustomizeArmorInSlot(int32 InArmorSlotIndex) {
    return false;
}


