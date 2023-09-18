#include "SBZTankAbilityData.h"

USBZTankAbilityData::USBZTankAbilityData() {
    this->Visor = 400.00f;
    this->VisorHardness = 1.80f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTankAbilityData::StaticClass();
}


