#include "SBZPayDayCreditData.h"

USBZPayDayCreditData::USBZPayDayCreditData() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPayDayCreditData::StaticClass();
}


