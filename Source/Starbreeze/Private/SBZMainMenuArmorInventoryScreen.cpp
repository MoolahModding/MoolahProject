#include "SBZMainMenuArmorInventoryScreen.h"

USBZMainMenuArmorInventoryScreen::USBZMainMenuArmorInventoryScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuArmorInventoryScreen");
    this->ArmorSlotButtonClass = NULL;
    this->Panel_ArmorSlotButtons = NULL;
    this->Button_BuySlots = NULL;
    this->DiscardArmorPopUpBodyWidgetClass = NULL;
    this->CustomizableArmorData = NULL;
    this->ActiveArmorSlotButton = NULL;
    this->ArmorIndexToDiscard = -1;
    this->DiscardArmorPopUpBody = NULL;
}

void USBZMainMenuArmorInventoryScreen::TryDiscardArmorInSlot(int32 InArmorIndex) {
}

void USBZMainMenuArmorInventoryScreen::RefreshWidgetVisuals() {
}




void USBZMainMenuArmorInventoryScreen::OnShowBuySlotPopUpClosed(FName InActionName) {
}



void USBZMainMenuArmorInventoryScreen::OnDiscardArmorPopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuArmorInventoryScreen::OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId) {
}

void USBZMainMenuArmorInventoryScreen::NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuArmorInventoryScreen::NativeOnArmorSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuArmorInventoryScreen::NativeOnArmorSlotButtonAltSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuArmorInventoryScreen::NativeArmorSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZMainMenuArmorInventoryScreen::DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId) {
}

bool USBZMainMenuArmorInventoryScreen::CanDiscardArmorInSlot(int32 InArmorIndex) const {
    return false;
}



