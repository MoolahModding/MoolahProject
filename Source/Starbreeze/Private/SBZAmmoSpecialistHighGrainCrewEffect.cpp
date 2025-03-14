#include "SBZAmmoSpecialistHighGrainCrewEffect.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"

USBZAmmoSpecialistHighGrainCrewEffect::USBZAmmoSpecialistHighGrainCrewEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->bExecutePeriodicEffectOnApplication = false;
}


