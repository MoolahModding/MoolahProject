#include "SBZBTDecorator_AbortCoverReservation.h"

USBZBTDecorator_AbortCoverReservation::USBZBTDecorator_AbortCoverReservation() {
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->NodeName = TEXT("Abort Cover Reservation");
}


