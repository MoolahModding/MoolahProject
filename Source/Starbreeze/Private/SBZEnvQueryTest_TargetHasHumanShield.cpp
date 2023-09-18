#include "SBZEnvQueryTest_TargetHasHumanShield.h"

USBZEnvQueryTest_TargetHasHumanShield::USBZEnvQueryTest_TargetHasHumanShield() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


