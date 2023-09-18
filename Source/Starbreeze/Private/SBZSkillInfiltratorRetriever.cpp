#include "SBZSkillInfiltratorRetriever.h"

USBZSkillInfiltratorRetriever::USBZSkillInfiltratorRetriever() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSkillInfiltratorRetriever::StaticClass();
}


