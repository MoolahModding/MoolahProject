#include "SBZAssaultCountStatisticCriteriaData.h"

USBZAssaultCountStatisticCriteriaData::USBZAssaultCountStatisticCriteriaData() {
    this->NumberOfAssaultsCompleted = 4;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZAssaultCountStatisticCriteriaData::StaticClass();
}


