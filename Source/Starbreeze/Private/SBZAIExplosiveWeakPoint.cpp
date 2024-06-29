#include "SBZAIExplosiveWeakPoint.h"

USBZAIExplosiveWeakPoint::USBZAIExplosiveWeakPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayEffectClass = NULL;
    this->AIExplosionRange = 500.00f;
    this->PlayerExplosionRange = 300.00f;
}

void USBZAIExplosiveWeakPoint::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


