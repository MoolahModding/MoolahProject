#include "SBZEnvQueryTest_CoverHasLOS.h"

USBZEnvQueryTest_CoverHasLOS::USBZEnvQueryTest_CoverHasLOS() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TargetContext = NULL;
}


