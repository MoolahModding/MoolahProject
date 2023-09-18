#include "SBZEnvQueryTest_Trace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryTest_Trace::USBZEnvQueryTest_Trace() {
    this->TraceChannel = TraceTypeQuery1;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    FProperty* p_bWorkOnFloatValues = GetClass()->FindPropertyByName("bWorkOnFloatValues");
    *p_bWorkOnFloatValues->ContainerPtrToValuePtr<uint8>(this) = false;
}


