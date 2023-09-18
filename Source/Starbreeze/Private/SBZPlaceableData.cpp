#include "SBZPlaceableData.h"

USBZPlaceableData::USBZPlaceableData() {
    this->AmmoInventoryMax = 2;
    this->AmmoInventory = 2;
    this->MaxTraceDistance = 600.00f;
    this->MaxDropdownTraceDistance = 600.00f;
    this->TraceStepSize = 1.00f;
    this->MaxSlopeAngle = 36.00f;
    this->OverrideGravityZ = 0.00f;
    this->ArcParam = 0.50f;
    this->PlacementOffsetAngle = 7.00f;
    this->bUseLinetraceInitially = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableData::StaticClass();
}


