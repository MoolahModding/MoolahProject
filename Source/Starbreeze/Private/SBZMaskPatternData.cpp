#include "SBZMaskPatternData.h"

USBZMaskPatternData::USBZMaskPatternData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskPatternData::StaticClass();
}


