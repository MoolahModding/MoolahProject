#include "SBZMainMenuSuitCosmeticCustomizationScreen.h"

USBZMainMenuSuitCosmeticCustomizationScreen::USBZMainMenuSuitCosmeticCustomizationScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuSuitCosmeticCustomizationScreen");
    this->Widget_CosmeticPanel = NULL;
    this->SuitPartConfig = NULL;
    this->CosmeticPartSlot = NULL;
    this->SuitSlotIndex = -1;
    this->PopUpBodyWidgetClass = NULL;
    this->PreviousEquippedConfig = NULL;
    this->PopUpBody = NULL;
}

void USBZMainMenuSuitCosmeticCustomizationScreen::OnPopUpClosed(FName ClosingActionName) {
}


void USBZMainMenuSuitCosmeticCustomizationScreen::CosmeticPanelDefaultButtonSelected() {
}

void USBZMainMenuSuitCosmeticCustomizationScreen::CosmeticPanelButtonSelected(USBZMainMenuCosmeticItemButton* SelectedButton) {
}


