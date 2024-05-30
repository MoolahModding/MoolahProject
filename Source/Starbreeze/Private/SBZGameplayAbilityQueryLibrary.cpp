#include "SBZGameplayAbilityQueryLibrary.h"

USBZGameplayAbilityQueryLibrary::USBZGameplayAbilityQueryLibrary() {
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayTagContainerFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayTagContainerComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayAbilityFromActor(AActor* Actor, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon) {
    return false;
}


