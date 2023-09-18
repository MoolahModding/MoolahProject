#include "PD3PawnVariation.h"

UPD3PawnVariation::UPD3PawnVariation() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = UPD3PawnVariation::StaticClass();
}


