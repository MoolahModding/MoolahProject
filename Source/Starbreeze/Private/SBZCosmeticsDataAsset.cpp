#include "SBZCosmeticsDataAsset.h"

USBZCosmeticsDataAsset::USBZCosmeticsDataAsset() {
    this->Rarity = ESBZRarity::Common;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZCosmeticsDataAsset::StaticClass();
}

bool USBZCosmeticsDataAsset::IsConsumable() const {
    return false;
}

ESBZRarity USBZCosmeticsDataAsset::GetRarity() const {
    return ESBZRarity::Common;
}


