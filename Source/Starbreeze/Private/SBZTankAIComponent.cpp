#include "SBZTankAIComponent.h"

USBZTankAIComponent::USBZTankAIComponent() {
    this->Armored = NULL;
    this->ArmorPopOffEvent = NULL;
    this->Cooldown = 10.00f;
    this->StaggerStateCooldown = 5.00f;
    this->HeadshotCollider = NULL;
}

void USBZTankAIComponent::OnFiringTagChanged(const FGameplayTag InTag, int32 TagCount) {
}


