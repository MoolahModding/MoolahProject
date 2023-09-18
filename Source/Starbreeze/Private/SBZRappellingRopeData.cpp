#include "SBZRappellingRopeData.h"

USBZRappellingRopeData::USBZRappellingRopeData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZRappellingRopeData::StaticClass();
}


