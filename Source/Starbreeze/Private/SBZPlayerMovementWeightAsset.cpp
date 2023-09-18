#include "SBZPlayerMovementWeightAsset.h"

USBZPlayerMovementWeightAsset::USBZPlayerMovementWeightAsset() {
    this->TierWeight = 50.00f;
    this->VaultMantleData = NULL;
    this->SlideData = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZPlayerMovementWeightAsset::StaticClass();
}


