#include "SBZEnvQueryTest_IsContextActor.h"

USBZEnvQueryTest_IsContextActor::USBZEnvQueryTest_IsContextActor() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->ActorContext = NULL;
}


