#include "SBZEnvQueryTest_VisuallyDetected.h"

USBZEnvQueryTest_VisuallyDetected::USBZEnvQueryTest_VisuallyDetected() {
    this->bCriminalsOnly = false;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


