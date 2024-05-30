#include "SBZTankAIComponent.h"

USBZTankAIComponent::USBZTankAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Armored = NULL;
    this->ArmorPopOffEvent = NULL;
    this->Cooldown = 10.00f;
    this->StaggerStateCooldown = 5.00f;
    this->HeadshotCollider = NULL;
}

void USBZTankAIComponent::OnAttackTagChanged(const FGameplayTag InTag, int32 TagCount) {
}


