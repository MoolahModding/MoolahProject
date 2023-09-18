#include "SBZSkillManipulatorNegotiator.h"

USBZSkillManipulatorNegotiator::USBZSkillManipulatorNegotiator() {
    this->IntArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillManipulatorNegotiator::StaticClass();
}


