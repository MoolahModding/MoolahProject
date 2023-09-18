#include "SBZEnvQueryTest_DrillState.h"

USBZEnvQueryTest_DrillState::USBZEnvQueryTest_DrillState() {
    this->bMatchNonDrills = false;
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


