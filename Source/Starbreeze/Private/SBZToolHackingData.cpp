#include "SBZToolHackingData.h"

USBZToolHackingData::USBZToolHackingData() {
    this->MaxHackingDistance = 600.00f;
    this->HackingSynchTimer = 5.00f;
    this->HackingToolDOFFeedback = NULL;
    this->HackingToolDOFFeedback = NULL;
    this->HackingAimDegreePadding = 6.00f;
    this->bIsCameraLockedWhenActive = true;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZToolHackingData::StaticClass();
}


