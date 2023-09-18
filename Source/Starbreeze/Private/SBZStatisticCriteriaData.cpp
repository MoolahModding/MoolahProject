#include "SBZStatisticCriteriaData.h"

USBZStatisticCriteriaData::USBZStatisticCriteriaData() {
    this->LowestDifficulty = ESBZDifficulty::Default;
    this->MaxPassableState = EPD3HeistState::PointOfNoReturn;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZStatisticCriteriaData::StaticClass();
}


