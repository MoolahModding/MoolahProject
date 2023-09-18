#include "SBZSuitPresetDatabase.h"

USBZSuitPresetDatabase::USBZSuitPresetDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitPresetDatabase::StaticClass();
}


