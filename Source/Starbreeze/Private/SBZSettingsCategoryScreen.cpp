#include "SBZSettingsCategoryScreen.h"

USBZSettingsCategoryScreen::USBZSettingsCategoryScreen() {
    this->StackValue = TEXT("Default__SBZSettingsCategoryScreen");
    this->ScrollBox_SettingsItems = NULL;
    this->SettingsGroupTitleClass = NULL;
    this->SettingsButtonClassActionClick = NULL;
    this->SettingsButtonClassTwoChoice = NULL;
    this->SettingsButtonClassMultipleChoice = NULL;
    this->SettingsButtonClassResolutionChoice = NULL;
    this->SettingsButtonClassAntiAliasingModeChoice = NULL;
    this->SettingsButtonClassUpscalerChoice = NULL;
    this->SettingsButtonClassUpscalingModeChoice = NULL;
    this->SettingsButtonClassSlider = NULL;
    this->SettingsButtonClassKeyboardBinding = NULL;
    this->SettingsButtonClassGamepadBinding = NULL;
    this->SettingsButtonClassFrameInterpolatorChoice = NULL;
}


void USBZSettingsCategoryScreen::ResetSettingsCategory(const FName& SettingsCategoryName) {
}



bool USBZSettingsCategoryScreen::IsSettingsCategoryDirty(const FName& SettingsCategoryName) const {
    return false;
}

void USBZSettingsCategoryScreen::InitializeSettingsItems(const FName& SettingsCategoryName) {
}

void USBZSettingsCategoryScreen::ApplySettingsCategory(const FName& SettingsCategoryName) {
}


