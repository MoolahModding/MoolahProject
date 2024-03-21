#include "SBZCustomizationManager.h"

void ASBZCustomizationManager::SpawnGlobalMaskWithConfig(const FSBZMaskConfig& MaskConfig) {
}

void ASBZCustomizationManager::SpawnGlobalMask(const USBZMaskData* MaskData) {
}

void ASBZCustomizationManager::ShowMainMenuMannequin() {
}

void ASBZCustomizationManager::ShowGlobalMask() {
}

void ASBZCustomizationManager::ShowCustomizableWeapon() {
}

void ASBZCustomizationManager::ShowCustomizableMannequin() {
}

void ASBZCustomizationManager::SetMainMenuMannequinRotationEnabled(bool bEnabled) {
}

void ASBZCustomizationManager::HideMainMenuMannequin() {
}

void ASBZCustomizationManager::HideGlobalMask() {
}

void ASBZCustomizationManager::HideCustomizableMannequin() {
}

bool ASBZCustomizationManager::GetMainMenuMannequinVisibility() {
    return false;
}

ASBZCustomizationManager* ASBZCustomizationManager::GetCustomizationManager(const UObject* WorldContextObject) {
    return NULL;
}

ASBZCustomizationManager::ASBZCustomizationManager() {
    this->StartMaskData = NULL;
    this->MaskRotationComponent = NULL;
    this->MannequinToSpawn = NULL;
    this->SuitRotationComponent = NULL;
    this->WeaponRotationComponent = NULL;
    this->StandaloneWeaponDisplay = NULL;
    this->GlobalMask = NULL;
    this->Mannequin = NULL;
}

