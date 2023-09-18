#include "SBZPlayerAnimationCollectionTPP.h"

USBZPlayerAnimationCollectionTPP::USBZPlayerAnimationCollectionTPP() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerAnimationCollectionTPP::StaticClass();
}


