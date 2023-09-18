#include "SBZGameplayAbilityQuery.h"

USBZGameplayAbilityQuery::USBZGameplayAbilityQuery() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZGameplayAbilityQuery::StaticClass();
}


