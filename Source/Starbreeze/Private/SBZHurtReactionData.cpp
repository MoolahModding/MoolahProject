#include "SBZHurtReactionData.h"

FSBZHurtReactionData::FSBZHurtReactionData() {
    this->HurtReactionWeightCurve = NULL;
    this->HurtReactionWeightModifier = 0.00f;
    this->DesiredHurtReactionWeight = ESBZDamageWeight::Flinch;
    this->HurtReactionWeightBuildupModifier = 0.00f;
    this->CriticalHurtReactionWeightBuildupModifier = 0.00f;
}

