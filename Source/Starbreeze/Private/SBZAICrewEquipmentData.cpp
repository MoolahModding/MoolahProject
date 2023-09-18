#include "SBZAICrewEquipmentData.h"

USBZAICrewEquipmentData::USBZAICrewEquipmentData() {
    this->MaskData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAICrewEquipmentData::StaticClass();
}


