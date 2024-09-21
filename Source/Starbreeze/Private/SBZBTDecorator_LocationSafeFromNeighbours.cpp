#include "SBZBTDecorator_LocationSafeFromNeighbours.h"

USBZBTDecorator_LocationSafeFromNeighbours::USBZBTDecorator_LocationSafeFromNeighbours() {
    this->NodeName = TEXT("Location Safe From Neighbours");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
}


