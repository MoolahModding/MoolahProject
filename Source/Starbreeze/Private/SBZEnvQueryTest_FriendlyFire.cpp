#include "SBZEnvQueryTest_FriendlyFire.h"

USBZEnvQueryTest_FriendlyFire::USBZEnvQueryTest_FriendlyFire() {
    this->OriginContext = NULL;
    this->OriginContext = NULL;
    this->TargetContext = NULL;
    this->TargetContext = NULL;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


