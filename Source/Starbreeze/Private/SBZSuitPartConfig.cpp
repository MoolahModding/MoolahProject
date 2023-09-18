#include "SBZSuitPartConfig.h"

USBZSuitPartConfig::USBZSuitPartConfig() {
    this->SuitPart = ESBZSuitPart::SUIT_PART_LOWER;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSuitPartConfig::StaticClass();
}


