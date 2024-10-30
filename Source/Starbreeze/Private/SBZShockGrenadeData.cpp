#include "SBZShockGrenadeData.h"

USBZShockGrenadeData::USBZShockGrenadeData() {
    this->bArmOnThrow = false;
    this->RepeatDelay = 3.00f;
    this->ExplosionCount = 4;
    this->ChainRange = 200.00f;
    this->ChainSpeed = 1000.00f;
    this->MaxChainCount = 7;
    this->StunDuration = 1.00f;
    this->StunDurationCrewInstigator = 0.50f;
    this->StunDurationCrew = 0.00f;
    this->StunGameplayEffectClass = NULL;
    this->SlowDuration = 6.00f;
    this->SlowDurationCrewInstigator = 0.00f;
    this->SlowDurationCrew = 0.00f;
    this->SlowGameplayEffectClass = NULL;
    this->Damage = 200.00f;
    this->ArmorPenetration = -1.00f;
    this->DamageGameplayEffectClass = NULL;
    this->ActiveDetonationEvent = NULL;
    this->ActiveDetonationEffect = NULL;
}


