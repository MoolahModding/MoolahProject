#include "SBZBTDecorator_AbortCoverReservation.h"

USBZBTDecorator_AbortCoverReservation::USBZBTDecorator_AbortCoverReservation() {
    this->NodeName = TEXT("Abort Cover Reservation");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
}


