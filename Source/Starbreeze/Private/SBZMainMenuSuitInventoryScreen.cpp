#include "SBZMainMenuSuitInventoryScreen.h"

USBZMainMenuSuitInventoryScreen::USBZMainMenuSuitInventoryScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuSuitInventoryScreen");
    this->SuitSlotButtonClass = NULL;
    this->Panel_SuitSlotButtons = NULL;
    this->Button_BuySlots = NULL;
    this->Button_DefaultSuit = NULL;
    this->DiscardSuitPopUpBodyWidgetClass = NULL;
    this->SuitIndexToDiscard = -1;
    this->DiscardSuitPopUpBody = NULL;
    this->ActiveSuitSlotButton = NULL;
}

void USBZMainMenuSuitInventoryScreen::TryDiscardSuitInSlot(int32 InSuitIndex) {
}


void USBZMainMenuSuitInventoryScreen::RefreshWidgetVisuals() {
}




void USBZMainMenuSuitInventoryScreen::OnShowBuySlotPopUpClosed(FName InActionName) {
}


void USBZMainMenuSuitInventoryScreen::OnDiscardSuitPopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuSuitInventoryScreen::OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId) {
}

void USBZMainMenuSuitInventoryScreen::NativeSuitSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}

void USBZMainMenuSuitInventoryScreen::NativeOnSuitSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuSuitInventoryScreen::NativeOnSuitDefaultButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuSuitInventoryScreen::NativeOnDefaultSet(ESBZMetaRequestResult Result) {
}

void USBZMainMenuSuitInventoryScreen::NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuSuitInventoryScreen::DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId) {
}

bool USBZMainMenuSuitInventoryScreen::CanDiscardSuitInSlot(int32 IndexToDiscard) const {
    return false;
}


