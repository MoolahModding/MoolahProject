#include "SBZCharacterVaultingComponent.h"

USBZCharacterVaultingComponent::USBZCharacterVaultingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideSoundEvent = NULL;
    this->FoleySoundEvent = NULL;
    this->bCanMakeNoise = false;
    this->VaultingNoiseRange = 500.00f;
    this->OwnerCharacter = NULL;
    this->OwnerCharacterMovementComponent = NULL;
}


