#include "SBZThrowableProjectileData.h"

USBZThrowableProjectileData::USBZThrowableProjectileData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZThrowableProjectileData::StaticClass();
}


