#include "SBZTaserPackStunsCriteriaData.h"

USBZTaserPackStunsCriteriaData::USBZTaserPackStunsCriteriaData() {
    this->NumberOfStuns = 4;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTaserPackStunsCriteriaData::StaticClass();
}


