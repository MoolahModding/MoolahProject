#include "SBZBTDecorator_ShowMarker.h"

USBZBTDecorator_ShowMarker::USBZBTDecorator_ShowMarker() {
    this->NodeName = TEXT("Show Marker");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->Marker = ESBZMarkerState::None;
    this->bShouldChangeDependantOnState = false;
    this->NewMarkerStateThreshold = EPD3HeistState::Assault;
    this->StateDependantMarker = ESBZMarkerState::None;
}


