#include "SBZEnvQueryTest_FriendlyFire.h"

USBZEnvQueryTest_FriendlyFire::USBZEnvQueryTest_FriendlyFire() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->OriginContext = NULL;
    this->TargetContext = NULL;
}


