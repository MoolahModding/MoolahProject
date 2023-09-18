#include "SBZHurtReaction.h"

USBZHurtReaction::USBZHurtReaction() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZHurtReaction::StaticClass();
}


