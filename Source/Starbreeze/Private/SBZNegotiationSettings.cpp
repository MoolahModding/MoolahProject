#include "SBZNegotiationSettings.h"

USBZNegotiationSettings::USBZNegotiationSettings() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZNegotiationSettings::StaticClass();
}


