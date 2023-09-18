#include "SBZModularPartSlot.h"

USBZModularPartSlot::USBZModularPartSlot() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZModularPartSlot::StaticClass();
}


