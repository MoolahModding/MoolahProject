#include "SBZBuiltInAnimMontage.h"

USBZBuiltInAnimMontage::USBZBuiltInAnimMontage() {
    this->bAutoStopWhenFinished = true;
    this->bIsLooping = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZBuiltInAnimMontage::StaticClass();
}


