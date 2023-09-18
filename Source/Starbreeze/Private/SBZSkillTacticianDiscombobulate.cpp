#include "SBZSkillTacticianDiscombobulate.h"
#include "SBZTacticianDiscombobulateEffect.h"

USBZSkillTacticianDiscombobulate::USBZSkillTacticianDiscombobulate() {
    this->PostSmokeFlashEffect = USBZTacticianDiscombobulateEffect::StaticClass();
    this->FloatArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillTacticianDiscombobulate::StaticClass();
}


