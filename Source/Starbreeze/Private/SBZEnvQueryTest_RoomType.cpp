#include "SBZEnvQueryTest_RoomType.h"

USBZEnvQueryTest_RoomType::USBZEnvQueryTest_RoomType() {
    this->RoomType = 1;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


