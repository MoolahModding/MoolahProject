#include "SBZMarkerWidgetContainer.h"

USBZMarkerWidgetContainer::USBZMarkerWidgetContainer() {
    this->Root_Canvas = NULL;
    this->MarkerWidgetClass = NULL;
    this->OffScreenTransitionTime = 0.25f;
    this->OffScreenRadiusPercentageArray[0] = 0.25f;
    this->OffScreenRadiusPercentageArray[1] = 0.25f;
    this->OffScreenRadiusPercentageArray[2] = 0.25f;
}

void USBZMarkerWidgetContainer::OnMarkerAdded(FSBZMarkerRuntime& MarkerRuntime) {
}



