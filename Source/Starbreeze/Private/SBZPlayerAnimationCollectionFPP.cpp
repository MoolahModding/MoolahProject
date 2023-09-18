#include "SBZPlayerAnimationCollectionFPP.h"

USBZPlayerAnimationCollectionFPP::USBZPlayerAnimationCollectionFPP() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerAnimationCollectionFPP::StaticClass();
}


