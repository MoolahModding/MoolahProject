#include "SBZCustomizationLibrary.h"

USBZCustomizationLibrary::USBZCustomizationLibrary() {
}

void USBZCustomizationLibrary::UseDefaultMask() {
}

void USBZCustomizationLibrary::SetPreviewSuitConfig(const FSBZSuitConfig& InSuitConfig) {
}

void USBZCustomizationLibrary::SetPreviewMaskConfig(const FSBZMaskConfig& MaskConfig) {
}

void USBZCustomizationLibrary::SetPartInPreview(const USBZSuitPartConfig* InSuitPartConfig, const USBZCosmeticsPartSlot* InCosmeticPartSlot, const USBZCosmeticsDataAsset* InCosmeticsDataAsset) {
}

void USBZCustomizationLibrary::SetDefaultSuitOnPreviewSuitConfig() {
}

void USBZCustomizationLibrary::SetDefaultMaskOnPreviewMaskConfig() {
}

void USBZCustomizationLibrary::RemoveSuitPreviewAssetFromSlot(const USBZSuitPartConfig* InSuitPartConfig, const USBZCosmeticsPartSlot* Slot) {
}

void USBZCustomizationLibrary::RemoveMaskPreviewAssetFromSlot(const USBZCosmeticsPartSlot* Slot) {
}

void USBZCustomizationLibrary::PreviewSuitAssetInSlot(const USBZCosmeticsPartSlot* Slot, const FSBZSuitPartConfigGroup& SuitPartConfigGroup) {
}

void USBZCustomizationLibrary::PreviewEquippedMask() {
}

void USBZCustomizationLibrary::MaskPreviewAssetInSlot(const USBZCosmeticsPartSlot* Slot, const FSBZMaskPartConfigGroup& MaskPartConfigGroup) {
}

USBZModularPartDataAsset* USBZCustomizationLibrary::GetSuitCosmeticDataAssetFromInventorySlot(const FSBZSuitInventorySlot& InventorySlot, const USBZCosmeticsPartSlot* Slot, const USBZSuitPartConfig* Config) {
    return NULL;
}

USBZModularPartDataAsset* USBZCustomizationLibrary::GetPreviewSuitCosmeticDataAsset(const USBZCosmeticsPartSlot* Slot, const USBZSuitPartConfig* Config) {
    return NULL;
}

FSBZSuitConfig USBZCustomizationLibrary::GetPreviewSuitConfig() {
    return FSBZSuitConfig{};
}

FSBZMaskConfig USBZCustomizationLibrary::GetPreviewMaskConfig() {
    return FSBZMaskConfig{};
}

USBZCustomizableSuitMeshComponent* USBZCustomizationLibrary::GetMainMenuMannequinCustomizableSuitComponent() {
    return NULL;
}

ASBZMask* USBZCustomizationLibrary::GetGlobalMaskPreviewActor() {
    return NULL;
}

ASBZCustomizationManager* USBZCustomizationLibrary::GetCustomizationManager() {
    return NULL;
}

void USBZCustomizationLibrary::ApplyCosmeticPartOnMask(const int32 SlotIndex, const USBZCosmeticsPartSlot* CosmeticsPartSlot, const FSBZMaskPartConfigGroup& MaskPartConfigGroup) {
}

void USBZCustomizationLibrary::ApplyAllCosmeticPartsFromPreviewOnSuit(const int32 SlotIndex) {
}

void USBZCustomizationLibrary::ApplyAllCosmeticPartsFromPreviewOnMask(const int32 SlotIndex) {
}


