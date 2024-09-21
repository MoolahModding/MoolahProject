#include "SBZEnvQueryTest_VantagePointHasLOS.h"

USBZEnvQueryTest_VantagePointHasLOS::USBZEnvQueryTest_VantagePointHasLOS() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TargetContext = NULL;
}


