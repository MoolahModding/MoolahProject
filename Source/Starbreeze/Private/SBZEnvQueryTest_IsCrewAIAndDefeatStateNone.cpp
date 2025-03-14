#include "SBZEnvQueryTest_IsCrewAIAndDefeatStateNone.h"

USBZEnvQueryTest_IsCrewAIAndDefeatStateNone::USBZEnvQueryTest_IsCrewAIAndDefeatStateNone() {
    this->TestComment = TEXT("Used to check if Character is CrewAI and not in a defeat state, mainly used as a filter for finding wards to follow.");
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


