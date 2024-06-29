#include "SBZAIGrenadeBelt.h"
#include "ESBZAIWeakPointType.h"

USBZAIGrenadeBelt::USBZAIGrenadeBelt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeakPointType = ESBZAIWeakPointType::GrenadeBelt;
    this->PlayerGameplayEffectClass = NULL;
    this->DamageModifierCurve = NULL;
    this->PlayerStaggerDuration[0] = 0.00f;
    this->PlayerStaggerDuration[1] = 0.00f;
    this->PlayerStaggerDuration[2] = 0.00f;
    this->PlayerStaggerDuration[3] = 0.00f;
}


