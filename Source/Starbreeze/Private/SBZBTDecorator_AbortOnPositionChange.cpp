#include "SBZBTDecorator_AbortOnPositionChange.h"

UDEPRECATED_SBZBTDecorator_AbortOnPositionChange::UDEPRECATED_SBZBTDecorator_AbortOnPositionChange() {
    this->NodeName = TEXT("Abort On Position Changed");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
}


