#include "SBZSkillLineDatabase.h"

USBZSkillLineDatabase::USBZSkillLineDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillLineDatabase::StaticClass();
}


