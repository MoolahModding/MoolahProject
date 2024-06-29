#include "SBZWeapon.h"
#include "SBZModularMeshComponent.h"

ASBZWeapon::ASBZWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMergeMeshes = true;
    this->ModularMeshComponent = CreateDefaultSubobject<USBZModularMeshComponent>(TEXT("SBZModularMeshComponent"));
    this->bIsReloading = false;
    this->bIsEmpty = false;
    this->bIsCycle = false;
    this->ShaderSightOffset = 0.00f;
    this->WeaponCustomizationFOV = 25.00f;
}


