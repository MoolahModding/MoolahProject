#include "SBZMarkerWidgetContainer.h"

void USBZMarkerWidgetContainer::OnMarkerAdded(FSBZMarkerRuntime& MarkerRuntime) {
}

USBZMarkerWidgetContainer::USBZMarkerWidgetContainer() {
    this->Root_Canvas = NULL;
    this->MarkerWidgetClass = NULL;
    this->OffScreenRadiusPercentage = 0.25f;
    this->OffScreenTransitionTime = 0.25f;
}

