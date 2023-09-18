#include "SBZWatchDatabase.h"

USBZWatchDatabase::USBZWatchDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWatchDatabase::StaticClass();
}


