#include "SBZOnTelegraphAttackComponent.h"

void USBZOnTelegraphAttackComponent::OnUnequip(const ASBZEquippable* Equippable) {
}

void USBZOnTelegraphAttackComponent::OnTelegraphAttackChanged(ASBZAICharacter* Character, bool bActivated) {
}

USBZOnTelegraphAttackComponent::USBZOnTelegraphAttackComponent() {
    this->OwnerCharacter = NULL;
    this->OwnerWeapon = NULL;
}

