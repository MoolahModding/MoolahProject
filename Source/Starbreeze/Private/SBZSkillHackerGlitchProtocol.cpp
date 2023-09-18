#include "SBZSkillHackerGlitchProtocol.h"

USBZSkillHackerGlitchProtocol::USBZSkillHackerGlitchProtocol() {
    this->FloatArray.AddDefaulted(2);
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillHackerGlitchProtocol::StaticClass();
}


