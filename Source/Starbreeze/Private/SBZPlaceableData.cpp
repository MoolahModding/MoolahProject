#include "SBZPlaceableData.h"

USBZPlaceableData::USBZPlaceableData() {
    this->bIsAllStatUsed = true;
    this->AmmoInventoryMax = 2;
    this->AmmoInventory = 2;
    this->MaxTraceDistance = 600.00f;
    this->MaxDropdownTraceDistance = 600.00f;
    this->TraceStepSize = 1.00f;
    this->MaxSlopeAngle = 36.00f;
    this->OverrideGravityZ = 0.00f;
    this->ArcParam = 0.50f;
    this->bIsExtentsCaspule = false;
    this->PlacementOffsetAngle = 7.00f;
    this->bUseLinetraceInitially = false;
}


