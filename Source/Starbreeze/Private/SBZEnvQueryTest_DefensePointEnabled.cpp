#include "SBZEnvQueryTest_DefensePointEnabled.h"

USBZEnvQueryTest_DefensePointEnabled::USBZEnvQueryTest_DefensePointEnabled() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


