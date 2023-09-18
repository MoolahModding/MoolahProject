#include "PD3SecurityCompanyDataAsset.h"

UPD3SecurityCompanyDataAsset::UPD3SecurityCompanyDataAsset() {
    this->SecurityCompanyLogo = NULL;
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = UPD3SecurityCompanyDataAsset::StaticClass();
}


