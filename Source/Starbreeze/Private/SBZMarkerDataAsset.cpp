#include "SBZMarkerDataAsset.h"

USBZMarkerDataAsset::USBZMarkerDataAsset() {
    this->MarkerWidgetOverride = NULL;
    this->bHasOffScreenTracking = true;
    this->bShowDistance = true;
    this->OnDisplayAudioEvent = NULL;
}

