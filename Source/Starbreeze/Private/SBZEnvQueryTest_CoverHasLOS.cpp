#include "SBZEnvQueryTest_CoverHasLOS.h"

USBZEnvQueryTest_CoverHasLOS::USBZEnvQueryTest_CoverHasLOS() {
    this->TargetContext = NULL;
    this->TargetContext = NULL;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


