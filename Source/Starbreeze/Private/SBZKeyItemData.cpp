#include "SBZKeyItemData.h"

USBZKeyItemData::USBZKeyItemData() {
    this->KeyItemIcon = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZKeyItemData::StaticClass();
}


