#include "SBZSharedPartList.h"

USBZSharedPartList::USBZSharedPartList() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSharedPartList::StaticClass();
}


