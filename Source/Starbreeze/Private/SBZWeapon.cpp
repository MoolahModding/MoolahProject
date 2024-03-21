#include "SBZWeapon.h"
#include "SBZModularMeshComponent.h"

ASBZWeapon::ASBZWeapon() {
    this->bMergeMeshes = true;
    this->ModularMeshComponent = CreateDefaultSubobject<USBZModularMeshComponent>(TEXT("SBZModularMeshComponent"));
    this->AnimationState = ESBZWeaponAnimationState::Idle;
    this->CurrentAmmoData = NULL;
    this->ShaderSightOffset = 0.00f;
    this->WeaponCustomizationFOV = 25.00f;
}

