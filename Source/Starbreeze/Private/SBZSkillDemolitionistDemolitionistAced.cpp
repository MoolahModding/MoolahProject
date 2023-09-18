#include "SBZSkillDemolitionistDemolitionistAced.h"

USBZSkillDemolitionistDemolitionistAced::USBZSkillDemolitionistDemolitionistAced() {
    this->BuffActivationArray.AddDefaulted(1);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillDemolitionistDemolitionistAced::StaticClass();
}


