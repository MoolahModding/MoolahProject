#include "SBZEnvQueryTest_IsContextActor.h"

USBZEnvQueryTest_IsContextActor::USBZEnvQueryTest_IsContextActor() {
    this->ActorContext = NULL;
    this->ActorContext = NULL;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


