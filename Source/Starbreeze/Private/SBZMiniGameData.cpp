#include "SBZMiniGameData.h"

USBZMiniGameData::USBZMiniGameData() {
    this->WidgetClass = NULL;
    this->WidgetClass = NULL;
    this->PlayerFeedback = NULL;
    this->PlayerFeedback = NULL;
    this->bIsLockpickMiniGame = false;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZMiniGameData::StaticClass();
}


