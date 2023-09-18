#include "SBZPlaceableTripMineData.h"

USBZPlaceableTripMineData::USBZPlaceableTripMineData() {
    this->Range = 500.00f;
    this->AdditionalPlayerRange = 0.00f;
    this->StunTime = 6.00f;
    this->GameplayEffectClass = NULL;
    this->GameplayEffectClass = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlaceableTripMineData::StaticClass();
}


