#include "SBZAIExplosiveWeakPoint.h"

void USBZAIExplosiveWeakPoint::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

USBZAIExplosiveWeakPoint::USBZAIExplosiveWeakPoint() {
    this->GameplayEffectClass = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
}

