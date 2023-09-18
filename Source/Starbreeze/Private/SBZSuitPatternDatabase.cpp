#include "SBZSuitPatternDatabase.h"

USBZSuitPatternDatabase::USBZSuitPatternDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitPatternDatabase::StaticClass();
}


