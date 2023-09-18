#include "SBZInventoryBaseData.h"

USBZInventoryBaseData::USBZInventoryBaseData() {
    this->ItemRarity = ESBZItemRarity::NoRarity;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZInventoryBaseData::StaticClass();
}

void USBZInventoryBaseData::GetDisplayName(FText& OutDisplayName, bool& OutHasText) const {
}


