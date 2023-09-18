#include "SBZEmotionMapping.h"

USBZEmotionMapping::USBZEmotionMapping() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZEmotionMapping::StaticClass();
}


