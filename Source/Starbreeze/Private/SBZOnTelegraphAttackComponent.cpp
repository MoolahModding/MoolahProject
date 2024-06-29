#include "SBZOnTelegraphAttackComponent.h"

USBZOnTelegraphAttackComponent::USBZOnTelegraphAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Owner = NULL;
    this->OwnerWeapon = NULL;
}

void USBZOnTelegraphAttackComponent::OnUnequip(const ASBZEquippable* Equippable) {
}

void USBZOnTelegraphAttackComponent::OnTelegraphAttackChanged(AActor* InActor, bool bActivated) {
}


