#include "SBZEnvQueryTest_IsInDefeatState.h"

USBZEnvQueryTest_IsInDefeatState::USBZEnvQueryTest_IsInDefeatState() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


