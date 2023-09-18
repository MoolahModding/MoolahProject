#include "SBZDialogDataAsset.h"

USBZDialogDataAsset::USBZDialogDataAsset() {
    this->DialogType = ESBZDialogType::Mission;
    this->Priority = 0;
    this->bSkipFirstDelay = true;
    this->bIsDeadAllowed = false;
    this->bIsHumanShieldVictimAllowed = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZDialogDataAsset::StaticClass();
}


