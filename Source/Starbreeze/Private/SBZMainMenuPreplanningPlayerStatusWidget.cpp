#include "SBZMainMenuPreplanningPlayerStatusWidget.h"

USBZMainMenuPreplanningPlayerStatusWidget::USBZMainMenuPreplanningPlayerStatusWidget() {
    this->PlayerIndex = -1;
    this->Widget_PrimaryWeaponVisuals = NULL;
    this->Widget_SecondaryWeaponVisuals = NULL;
    this->Widget_ThrowableVisuals = NULL;
    this->Widget_PlaceableVisuals = NULL;
    this->Widget_ToolVisuals = NULL;
    this->PrimaryWeapon = NULL;
    this->SecondaryWeapon = NULL;
    this->Tool = NULL;
    this->Placeable = NULL;
    this->Throwable = NULL;
}

void USBZMainMenuPreplanningPlayerStatusWidget::SetEmpty() {
}

void USBZMainMenuPreplanningPlayerStatusWidget::OpenPlayerProfile() {
}


void USBZMainMenuPreplanningPlayerStatusWidget::OnLoadoutChanged(const TArray<FSBZLobbyCharacterInfoUi>& LobbyInfoArray) {
}

bool USBZMainMenuPreplanningPlayerStatusWidget::CanOpenPlayerProfile() {
    return false;
}


