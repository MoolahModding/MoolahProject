#include "SBZMainMenuMaskInventoryScreen.h"

USBZMainMenuMaskInventoryScreen::USBZMainMenuMaskInventoryScreen() {
    this->MaskSlotButtonClass = NULL;
    this->MaskSlotButtonClass = NULL;
    this->Panel_MaskSlotButtons = NULL;
    this->Button_BuySlots = NULL;
    this->Button_DefaultMask = NULL;
    this->DiscardMaskPopUpBodyWidgetClass = NULL;
    this->DiscardMaskPopUpBodyWidgetClass = NULL;
    this->CustomizableMaskData = NULL;
    this->MaskMould = NULL;
    this->ActiveMaskSlotButton = NULL;
    this->MaskIndexToDiscard = -1;
    this->DiscardMaskPopUpBody = NULL;
    this->StackValue = TEXT("Default__SBZMainMenuMaskInventoryScreen");
}

void USBZMainMenuMaskInventoryScreen::TryDiscardMaskInSlot(int32 InMaskIndex) {
}




void USBZMainMenuMaskInventoryScreen::OnShowBuySlotPopUpClosed(FName InActionName) {
}



void USBZMainMenuMaskInventoryScreen::OnDiscardMaskPopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuMaskInventoryScreen::OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId) {
}

void USBZMainMenuMaskInventoryScreen::NativeOnMaskSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuMaskInventoryScreen::NativeOnMaskSlotButtonAltSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuMaskInventoryScreen::NativeOnMaskDefaultButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuMaskInventoryScreen::NativeOnDefaultSet(ESBZMetaRequestResult Result) {
}

void USBZMainMenuMaskInventoryScreen::NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuMaskInventoryScreen::NativeMaskSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}


void USBZMainMenuMaskInventoryScreen::DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId) {
}

bool USBZMainMenuMaskInventoryScreen::CanDiscardMaskInSlot(int32 InMaskIndex) const {
    return false;
}


