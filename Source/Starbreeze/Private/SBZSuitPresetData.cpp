#include "SBZSuitPresetData.h"

USBZSuitPresetData::USBZSuitPresetData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitPresetData::StaticClass();
}


