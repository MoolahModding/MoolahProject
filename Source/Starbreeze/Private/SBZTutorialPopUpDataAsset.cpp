#include "SBZTutorialPopUpDataAsset.h"

USBZTutorialPopUpDataAsset::USBZTutorialPopUpDataAsset() {
    this->TutorialIcon = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZTutorialPopUpDataAsset::StaticClass();
}


