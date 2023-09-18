#include "SBZOnTelegraphAttackComponent.h"

USBZOnTelegraphAttackComponent::USBZOnTelegraphAttackComponent() {
    this->OwnerCharacter = NULL;
    this->OwnerWeapon = NULL;
}

void USBZOnTelegraphAttackComponent::OnUnequip(const ASBZEquippable* Equippable) {
}

void USBZOnTelegraphAttackComponent::OnTelegraphAttackChanged(ASBZAICharacter* Character, bool bActivated) {
}


