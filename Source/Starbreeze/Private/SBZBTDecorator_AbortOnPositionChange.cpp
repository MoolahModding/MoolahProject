#include "SBZBTDecorator_AbortOnPositionChange.h"

UDEPRECATED_SBZBTDecorator_AbortOnPositionChange::UDEPRECATED_SBZBTDecorator_AbortOnPositionChange() {
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Abort On Position Changed");
}


