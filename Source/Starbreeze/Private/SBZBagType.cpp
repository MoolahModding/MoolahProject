#include "SBZBagType.h"

USBZBagType::USBZBagType() {
    this->BagValue = 0;
    this->ThrowSpeed = 500.00f;
    this->WorldItem = NULL;
    this->BackItem = NULL;
    this->SecuredItem = NULL;
    this->BagCategory = ESBZBagCategory::None;
    this->bIsDegradable = false;
    this->WeightTierOffset = 1.00f;
    this->WeightOverride = NULL;
    this->MarkerAsset = NULL;
    this->bIsPersistentMarker = true;
    this->bShouldShowOnEndScreen = true;
    this->bAllowSecuring = true;
}


