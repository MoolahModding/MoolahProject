#include "SBZMaskPreconfigData.h"

USBZMaskPreconfigData::USBZMaskPreconfigData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskPreconfigData::StaticClass();
}

FSBZMaskConfig USBZMaskPreconfigData::GetMaskConfig() const {
    return FSBZMaskConfig{};
}


