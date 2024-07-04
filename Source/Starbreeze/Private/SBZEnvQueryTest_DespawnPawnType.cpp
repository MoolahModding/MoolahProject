#include "SBZEnvQueryTest_DespawnPawnType.h"

USBZEnvQueryTest_DespawnPawnType::USBZEnvQueryTest_DespawnPawnType() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->PawnTypeContext = NULL;
}


