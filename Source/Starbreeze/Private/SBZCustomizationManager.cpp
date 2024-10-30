#include "SBZCustomizationManager.h"

ASBZCustomizationManager::ASBZCustomizationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartMaskData = NULL;
    this->MaskRotationComponent = NULL;
    this->MannequinToSpawn = NULL;
    this->SuitRotationComponent = NULL;
    this->WeaponRotationComponent = NULL;
    this->StandaloneWeaponDisplay = NULL;
    this->GlobalMask = NULL;
    this->Mannequin = NULL;
}

void ASBZCustomizationManager::SpawnGlobalMaskWithConfig(const FSBZMaskConfig& InMaskConfig) {
}

void ASBZCustomizationManager::SpawnGlobalMask(const USBZMaskData* MaskData) {
}

void ASBZCustomizationManager::ShowMainMenuMannequin() {
}

void ASBZCustomizationManager::ShowGlobalMask(const bool InCentered) {
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


