#include "SBZPlaceableSensorToolData.h"

USBZPlaceableSensorToolData::USBZPlaceableSensorToolData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableSensorToolData::StaticClass();
}


