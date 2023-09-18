#include "SBZLookFocusData.h"

USBZLookFocusData::USBZLookFocusData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZLookFocusData::StaticClass();
}


