#include "SBZSmashAndGrabStatisticCriteriaData.h"

USBZSmashAndGrabStatisticCriteriaData::USBZSmashAndGrabStatisticCriteriaData() {
    this->CompletionTime = 120.00f;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZSmashAndGrabStatisticCriteriaData::StaticClass();
}


