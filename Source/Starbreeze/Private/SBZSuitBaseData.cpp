#include "SBZSuitBaseData.h"

USBZSuitBaseData::USBZSuitBaseData() {
    this->DefaultSizeCategory = EPlayerCharacterSizeCategory::MaleAverage;
    this->CPD00 = 0;
    this->CPD01 = 0;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitBaseData::StaticClass();
}


