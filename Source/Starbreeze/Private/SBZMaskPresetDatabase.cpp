#include "SBZMaskPresetDatabase.h"

USBZMaskPresetDatabase::USBZMaskPresetDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMaskPresetDatabase::StaticClass();
}


