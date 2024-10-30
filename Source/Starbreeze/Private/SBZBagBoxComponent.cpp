#include "SBZBagBoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

USBZBagBoxComponent::USBZBagBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->ImpulseCooldown = 1.00f;
    this->ImpulseBuildUp = 6;
    this->ImpulseMultiplier = 0.20f;
}


