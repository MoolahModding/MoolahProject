#include "SBZHumanShieldData.h"

USBZHumanShieldData::USBZHumanShieldData() {
    this->TimeBufferArray[0] = 0.00f;
    this->TimeBufferArray[1] = 0.00f;
    this->TimeBufferArray[2] = 0.00f;
    this->TimeBufferArray[3] = 0.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZHumanShieldData::StaticClass();
}


