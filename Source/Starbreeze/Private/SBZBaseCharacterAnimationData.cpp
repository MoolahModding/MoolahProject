#include "SBZBaseCharacterAnimationData.h"

USBZBaseCharacterAnimationData::USBZBaseCharacterAnimationData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZBaseCharacterAnimationData::StaticClass();
}


