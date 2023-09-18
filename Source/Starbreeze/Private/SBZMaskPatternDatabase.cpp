#include "SBZMaskPatternDatabase.h"

USBZMaskPatternDatabase::USBZMaskPatternDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskPatternDatabase::StaticClass();
}


