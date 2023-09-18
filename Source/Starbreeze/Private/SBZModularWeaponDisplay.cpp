#include "SBZModularWeaponDisplay.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBZModularMeshComponent.h"

ASBZModularWeaponDisplay::ASBZModularWeaponDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModularMeshComponent = CreateDefaultSubobject<USBZModularMeshComponent>(TEXT("SBZModularMeshComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->WeaponData = NULL;
    this->RootComponent = Mesh;
}

void ASBZModularWeaponDisplay::SwapModPart(const USBZModularPartSlotBase* Slot, const USBZEquippablePartDataAsset* EquippablePart) {
}

void ASBZModularWeaponDisplay::SetVisible(bool bIsVisible) {
}

void ASBZModularWeaponDisplay::SetupWeaponModMap(FSBZEquippableConfig InWeaponModMap, bool bBuildNow) {
}

void ASBZModularWeaponDisplay::SetupWeaponData(USBZBaseWeaponData* InWeaponData, bool bBuildNow) {
}

void ASBZModularWeaponDisplay::RemoveSlot(const USBZModularPartSlotBase* Slot) {
}

void ASBZModularWeaponDisplay::ModuleMeshLoadingDone() {
}

FSBZEquippableConfig ASBZModularWeaponDisplay::GetWeaponModMap() const {
    return FSBZEquippableConfig{};
}

USBZBaseWeaponData* ASBZModularWeaponDisplay::GetWeaponData() const {
    return NULL;
}

void ASBZModularWeaponDisplay::BuildWeapon() {
}


