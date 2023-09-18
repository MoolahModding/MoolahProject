#include "SBZChallengeCategoryData.h"

USBZChallengeCategoryData::USBZChallengeCategoryData() {
    this->DisplayIcon = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZChallengeCategoryData::StaticClass();
}


