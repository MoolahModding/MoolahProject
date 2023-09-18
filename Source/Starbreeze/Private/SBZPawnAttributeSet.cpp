#include "SBZPawnAttributeSet.h"
#include "Net/UnrealNetwork.h"

USBZPawnAttributeSet::USBZPawnAttributeSet() {
    this->LastDamageTypeCDO = NULL;
    this->LastInstigatorPawn = NULL;
    this->FlashedVoiceComment = NULL;
    this->FlashedByAllyVoiceComment = NULL;
    this->HitByFragVoiceComment = NULL;
}

void USBZPawnAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) {
}

void USBZPawnAttributeSet::OnRep_Armor(const FGameplayAttributeData& OldArmor) {
}

void USBZPawnAttributeSet::Multicast_SetHealth_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::Multicast_SetArmor_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPawnAttributeSet, Health);
    DOREPLIFETIME(USBZPawnAttributeSet, Armor);
}


