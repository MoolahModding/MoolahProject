#include "SBZEnvQueryTest_DespawnPawnType.h"

USBZEnvQueryTest_DespawnPawnType::USBZEnvQueryTest_DespawnPawnType() {
    this->PawnTypeContext = NULL;
    this->PawnTypeContext = NULL;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


