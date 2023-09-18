#include "SBZSettingsCategoryScreen.h"

USBZSettingsCategoryScreen::USBZSettingsCategoryScreen() {
    this->ScrollBox_SettingsItems = NULL;
    this->SettingsGroupTitleClass = NULL;
    this->SettingsGroupTitleClass = NULL;
    this->SettingsButtonClassTwoChoice = NULL;
    this->SettingsButtonClassTwoChoice = NULL;
    this->SettingsButtonClassMultipleChoice = NULL;
    this->SettingsButtonClassMultipleChoice = NULL;
    this->SettingsButtonClassResolutionChoice = NULL;
    this->SettingsButtonClassResolutionChoice = NULL;
    this->SettingsButtonClassDLSSSRModeChoice = NULL;
    this->SettingsButtonClassDLSSSRModeChoice = NULL;
    this->SettingsButtonClassSlider = NULL;
    this->SettingsButtonClassSlider = NULL;
    this->SettingsButtonClassKeyboardBinding = NULL;
    this->SettingsButtonClassKeyboardBinding = NULL;
    this->SettingsButtonClassGamepadBinding = NULL;
    this->SettingsButtonClassGamepadBinding = NULL;
    this->StackValue = TEXT("Default__SBZSettingsCategoryScreen");
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


