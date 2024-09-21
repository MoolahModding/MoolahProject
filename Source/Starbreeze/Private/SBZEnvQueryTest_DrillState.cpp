#include "SBZEnvQueryTest_DrillState.h"

USBZEnvQueryTest_DrillState::USBZEnvQueryTest_DrillState() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bMatchNonDrills = false;
}


