#include "SBZEnvQueryTest_Trace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

USBZEnvQueryTest_Trace::USBZEnvQueryTest_Trace() {
    this->TraceChannel = TraceTypeQuery1;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

