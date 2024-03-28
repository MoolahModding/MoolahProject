#include "SBZSocialMainMenuScreenBaseWidget.h"

void USBZSocialMainMenuScreenBaseWidget::SetToggleSocialScreenInput(FName InNewToggleActionName) {
}

void USBZSocialMainMenuScreenBaseWidget::OnToggleSocialScreenPressed() {
}




USBZSocialMainMenuScreenBaseWidget::USBZSocialMainMenuScreenBaseWidget() {
    this->bSocialScreenVisible = false;
    this->ToggleSocialScreenInputName = TEXT("UI_FriendMenuOpen");
}

