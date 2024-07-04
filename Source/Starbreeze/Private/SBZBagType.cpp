#include "SBZBagType.h"

USBZBagType::USBZBagType() {
    this->BagValue = 0;
    this->ThrowSpeed = 500.00f;
    this->WorldItem = NULL;
    this->BackItem = NULL;
    this->SecuredItem = NULL;
    this->bShouldShowOnEndScreen = true;
    this->bIsDegradable = false;
    this->bAllowSecuring = true;
    this->WeightTierOffset = 1.00f;
    this->MarkerAsset = NULL;
    this->bIsPersistentMarker = true;
}


