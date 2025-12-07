#include "SBZSkillGrazePlayerEffect.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"

USBZSkillGrazePlayerEffect::USBZSkillGrazePlayerEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->GrantedAbilities.AddDefaulted(1);
}


