#include "SBZSettingsMenuManager.h"

void USBZSettingsMenuManager::OnPopUpClosedUnappliedChanges(FName ActionName) {
}

void USBZSettingsMenuManager::OnPopUpClosedConfirmResetToDefault(FName ActionName) {
}

void USBZSettingsMenuManager::OnPopUpClosedConfirmChanges(FName ActionName) {
}

void USBZSettingsMenuManager::OnPopUpClosedConfirmAllChanges(FName ActionName) {
}

USBZSettingsMenuManager* USBZSettingsMenuManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

USBZSettingsMenuManager::USBZSettingsMenuManager() {
    this->SettingsMenuConfig = NULL;
    this->SubSettings = NULL;
}

