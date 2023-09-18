#include "SBZModGripAnimData.h"

USBZModGripAnimData::USBZModGripAnimData() {
    this->Priority = 0;
    this->OverrideRightGripFPPose = NULL;
    this->OverrideLeftGripFPPose = NULL;
    this->OverrideRightGripTPPose = NULL;
    this->OverrideLeftGripTPPose = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZModGripAnimData::StaticClass();
}


