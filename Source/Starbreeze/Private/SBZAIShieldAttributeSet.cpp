#include "SBZAIShieldAttributeSet.h"
#include "Net/UnrealNetwork.h"

USBZAIShieldAttributeSet::USBZAIShieldAttributeSet() {
    this->Shield = NULL;
    this->ShieldVisor = NULL;
}

void USBZAIShieldAttributeSet::OnRep_VisorArmor(const FGameplayAttributeData& OldValue) {
}

void USBZAIShieldAttributeSet::Multicast_SetVisorArmor_Implementation(float NewCurrentValue) {
}

void USBZAIShieldAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAIShieldAttributeSet, VisorArmor);
}


