#include "SBZCustomizationManager.h"

ASBZCustomizationManager::ASBZCustomizationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponRotationComponent = NULL;
    this->StandaloneWeaponDisplay = NULL;
    this->StartMaskData = NULL;
    this->MaskRotationComponent = NULL;
    this->MannequinToSpawn = NULL;
    this->SuitRotationComponent = NULL;
    this->GlobalMask = NULL;
    this->GlobalArmor = NULL;
    this->Mannequin = NULL;
    this->ArmorVariationIndex = 0;
    this->bIsArmorVariationChunkType = false;
    this->bIsArmorChunkTypeCPD = true;
    this->ArmorChunkMaterialNameArray.AddDefaulted(4);
    this->ArmorChunkTypeVariableName = TEXT("ChunkType");
    this->ArmorChunkTypeCPDIndex = 3;
}

void ASBZCustomizationManager::SpawnGlobalMaskWithConfig(const FSBZMaskConfig& InMaskConfig) {
}

void ASBZCustomizationManager::SpawnGlobalMask(const USBZMaskData* MaskData) {
}

void ASBZCustomizationManager::ShowMainMenuMannequin() {
}

void ASBZCustomizationManager::ShowGlobalMask(bool InCentered) {
}

void ASBZCustomizationManager::ShowCustomizableMannequin() {
}

void ASBZCustomizationManager::SetWeaponInspect(bool bInIsInspect) {
}

void ASBZCustomizationManager::SetMainMenuMannequinRotationEnabled(bool bEnabled) {
}

void ASBZCustomizationManager::SetArmorVisible(bool bInIsVisible) {
}

void ASBZCustomizationManager::SetArmorVariationIndex(int32 Index) {
}

void ASBZCustomizationManager::SetArmorInspect(bool bIsInspect) {
}

void ASBZCustomizationManager::SetArmorConfig(const FSBZArmorConfig& Config) {
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


