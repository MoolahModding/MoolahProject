#include "SBZSkillManipulatorStockholmSyndrome.h"

USBZSkillManipulatorStockholmSyndrome::USBZSkillManipulatorStockholmSyndrome() {
    this->FloatArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillManipulatorStockholmSyndrome::StaticClass();
}


