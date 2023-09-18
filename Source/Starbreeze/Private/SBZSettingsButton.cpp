#include "SBZSettingsButton.h"

USBZSettingsButton::USBZSettingsButton() {
    this->bCanResetSetting = false;
    this->bSettingIsDirty = false;
    this->bSettingHasDefaultValue = false;
}

bool USBZSettingsButton::SettingIsDirty() const {
    return false;
}

bool USBZSettingsButton::SettingHasDefaultValue() const {
    return false;
}


void USBZSettingsButton::SetSettingNameLocalized(const FText& InSettingNameLocalized) {
}

void USBZSettingsButton::SetSettingName(const FName& InSettingName) {
}

void USBZSettingsButton::SetSettingHelperPanelName(const FName& InSettingHelperPanelName) {
}

void USBZSettingsButton::SetSettingCategoryName(const FName& InSettingCategoryName) {
}

void USBZSettingsButton::SetCanResetSetting(bool InCanResetSetting) {
}


bool USBZSettingsButton::CanResetSetting() const {
    return false;
}


