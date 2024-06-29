#include "SBZAIWeakPointAttributeSet.h"
#include "Net/UnrealNetwork.h"

USBZAIWeakPointAttributeSet::USBZAIWeakPointAttributeSet() {
    this->WeakPoint = NULL;
    this->Instigator = NULL;
}

void USBZAIWeakPointAttributeSet::OnRep_WeakPointHealth(const FGameplayAttributeData& OldValue) {
}

void USBZAIWeakPointAttributeSet::Multicast_SetWeakPointHealth_Implementation(float NewCurrentValue) {
}

void USBZAIWeakPointAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIWeakPointAttributeSet, WeakPointHealth);
}


