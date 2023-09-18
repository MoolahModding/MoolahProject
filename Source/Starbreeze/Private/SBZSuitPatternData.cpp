#include "SBZSuitPatternData.h"

USBZSuitPatternData::USBZSuitPatternData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitPatternData::StaticClass();
}


