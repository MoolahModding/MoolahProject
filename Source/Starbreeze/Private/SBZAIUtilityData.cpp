#include "SBZAIUtilityData.h"

USBZAIUtilityData::USBZAIUtilityData() {
    this->RootTree = NULL;
    this->Default = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAIUtilityData::StaticClass();
}


