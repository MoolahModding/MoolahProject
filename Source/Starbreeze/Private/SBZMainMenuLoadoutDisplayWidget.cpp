#include "SBZMainMenuLoadoutDisplayWidget.h"

USBZMainMenuLoadoutDisplayWidget::USBZMainMenuLoadoutDisplayWidget() {
    this->Button_PrimaryWeapon = NULL;
    this->Button_SecondaryWeapon = NULL;
    this->Button_OverkillWeapon = NULL;
    this->Button_Armour = NULL;
    this->Button_Throwable = NULL;
    this->Button_Tool = NULL;
    this->Button_Placeable = NULL;
}

void USBZMainMenuLoadoutDisplayWidget::UpdateLoadoutConfigFromIndex(int32 InLoadoutIndex) {
}

void USBZMainMenuLoadoutDisplayWidget::UpdateLoadoutConfig(const FSBZPlayerLoadoutConfig& PlayerLoadoutConfig) {
}


void USBZMainMenuLoadoutDisplayWidget::OnLocalLoadoutChanged(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex) {
}

void USBZMainMenuLoadoutDisplayWidget::NativeOnWeaponButtonSelected(USBZMenuButton* InButtonSelected) {
}

void USBZMainMenuLoadoutDisplayWidget::NativeOnOverkillWeaponButtonSelected(USBZMenuButton* InButtonSelected) {
}

void USBZMainMenuLoadoutDisplayWidget::NativeOnItemToolButtonSelected(USBZMenuButton* InButtonSelected) {
}

void USBZMainMenuLoadoutDisplayWidget::NativeOnItemThrowableButtonSelected(USBZMenuButton* InButtonSelected) {
}

void USBZMainMenuLoadoutDisplayWidget::NativeOnItemPlaceableButtonSelected(USBZMenuButton* InButtonSelected) {
}

void USBZMainMenuLoadoutDisplayWidget::NativeOnItemArmourButtonSelected(USBZMenuButton* InButtonSelected) {
}


