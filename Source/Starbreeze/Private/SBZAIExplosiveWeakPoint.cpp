#include "SBZAIExplosiveWeakPoint.h"

USBZAIExplosiveWeakPoint::USBZAIExplosiveWeakPoint() {
    this->GameplayEffectClass = NULL;
    this->GameplayEffectClass = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
}

void USBZAIExplosiveWeakPoint::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


