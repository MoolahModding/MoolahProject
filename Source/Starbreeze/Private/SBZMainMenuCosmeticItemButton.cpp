#include "SBZMainMenuCosmeticItemButton.h"

void USBZMainMenuCosmeticItemButton::SetItemCount(int32 InItemCount) {
}



bool USBZMainMenuCosmeticItemButton::IsDefaultItem() const {
    return false;
}

void USBZMainMenuCosmeticItemButton::InitializeCosmeticItem(const USBZCosmeticsDataAsset* InCosmeticItemData, bool bInIsDefault) {
}

USBZCosmeticsDataAsset* USBZMainMenuCosmeticItemButton::GetCosmeticItemData() const {
    return NULL;
}

USBZMainMenuCosmeticItemButton::USBZMainMenuCosmeticItemButton() {
    this->bIsDefault = false;
    this->CosmeticItemData = NULL;
}

