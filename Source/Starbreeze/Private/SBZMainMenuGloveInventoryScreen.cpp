#include "SBZMainMenuGloveInventoryScreen.h"

USBZMainMenuGloveInventoryScreen::USBZMainMenuGloveInventoryScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuGloveInventoryScreen");
    this->GloveSlotButtonClass = NULL;
    this->Panel_GloveSlotButtons = NULL;
    this->Button_BuySlots = NULL;
    this->Button_DefaultGlove = NULL;
    this->DiscardGlovePopUpBodyWidgetClass = NULL;
    this->GloveIndexToDiscard = -1;
    this->DiscardGlovePopUpBody = NULL;
    this->ActiveGloveSlotButton = NULL;
}

void USBZMainMenuGloveInventoryScreen::TryDiscardGloveInSlot(int32 InGloveIndex) {
}

void USBZMainMenuGloveInventoryScreen::RefreshWidgetVisuals() {
}




void USBZMainMenuGloveInventoryScreen::OnShowBuySlotPopUpClosed(FName InActionName) {
}


void USBZMainMenuGloveInventoryScreen::OnDiscardGlovePopUpClosed(FName ClosingActionName) {
}

void USBZMainMenuGloveInventoryScreen::OnBuySlotItemCompleted(ESBZMetaRequestResult Result, FGuid ItemId) {
}

void USBZMainMenuGloveInventoryScreen::NativeOnGloveSlotButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuGloveInventoryScreen::NativeOnGloveDefaultButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuGloveInventoryScreen::NativeOnDefaultSet(ESBZMetaRequestResult Result) {
}

void USBZMainMenuGloveInventoryScreen::NativeOnBuySlotsButtonSelected(USBZMenuButton* InSelectedButton) {
}

void USBZMainMenuGloveInventoryScreen::NativeGloveSlotButtonFocusedChanged(USBZMenuButton* InFocusedButton, bool bIsFocused) {
}


void USBZMainMenuGloveInventoryScreen::DiscardItemDone(ESBZMetaRequestResult DiscardItemResult, FGuid ItemId) {
}

bool USBZMainMenuGloveInventoryScreen::CanDiscardGloveInSlot(int32 IndexToDiscard) const {
    return false;
}


