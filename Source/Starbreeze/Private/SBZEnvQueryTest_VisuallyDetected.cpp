#include "SBZEnvQueryTest_VisuallyDetected.h"

USBZEnvQueryTest_VisuallyDetected::USBZEnvQueryTest_VisuallyDetected() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bCriminalsOnly = false;
}


