#include "SBZEnvQueryTest_IsVantagePointTaken.h"

USBZEnvQueryTest_IsVantagePointTaken::USBZEnvQueryTest_IsVantagePointTaken() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


