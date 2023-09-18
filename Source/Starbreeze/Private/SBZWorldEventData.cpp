#include "SBZWorldEventData.h"

USBZWorldEventData::USBZWorldEventData() {
    this->Event = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWorldEventData::StaticClass();
}


