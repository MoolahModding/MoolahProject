#include "SBZSkillDemolitionistOvercooked.h"

USBZSkillDemolitionistOvercooked::USBZSkillDemolitionistOvercooked() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillDemolitionistOvercooked::StaticClass();
}


