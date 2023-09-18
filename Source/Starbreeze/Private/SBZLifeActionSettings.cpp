#include "SBZLifeActionSettings.h"

USBZLifeActionSettings::USBZLifeActionSettings() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZLifeActionSettings::StaticClass();
}


