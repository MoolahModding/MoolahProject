#include "SBZPlaceableSentryData.h"

USBZPlaceableSentryData::USBZPlaceableSentryData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableSentryData::StaticClass();
}


