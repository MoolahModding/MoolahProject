#include "SBZEnvQueryTest_IsOrderTargetAreaEnabled.h"

USBZEnvQueryTest_IsOrderTargetAreaEnabled::USBZEnvQueryTest_IsOrderTargetAreaEnabled() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


