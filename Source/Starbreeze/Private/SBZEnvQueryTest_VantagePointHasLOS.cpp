#include "SBZEnvQueryTest_VantagePointHasLOS.h"

USBZEnvQueryTest_VantagePointHasLOS::USBZEnvQueryTest_VantagePointHasLOS() {
    this->TargetContext = NULL;
    this->TargetContext = NULL;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


