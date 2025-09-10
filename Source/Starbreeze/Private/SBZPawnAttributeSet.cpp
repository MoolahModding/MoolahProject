#include "SBZPawnAttributeSet.h"
#include "Net/UnrealNetwork.h"

USBZPawnAttributeSet::USBZPawnAttributeSet() {
    this->LastDamageTypeCDO = NULL;
    this->LastInstigatorPawn = NULL;
    this->FlashedVoiceComment = NULL;
    this->FlashedByAllyVoiceComment = NULL;
    this->HitByFragVoiceComment = NULL;
    this->ArmorBrickBusterIncomingDamageIncrease = 0.00f;
    this->ElectricTenderizerIncomingDamageIncrease = 0.00f;
    this->FragTenderizeIncomingDamageIncrease = 0.00f;
    this->FlashbangMasterIncomingDamageIncrease = 0.00f;
}

void USBZPawnAttributeSet::OnRep_OverHeal(const FGameplayAttributeData& OldValue) {
}

void USBZPawnAttributeSet::OnRep_OutgoingDamageMultiplier(const FGameplayAttributeData& OldValue) {
}

void USBZPawnAttributeSet::OnRep_IncomingDamageMultiplier(const FGameplayAttributeData& OldValue) {
}

void USBZPawnAttributeSet::OnRep_IncomingDamageIncrease() {
}

void USBZPawnAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue) {
}

void USBZPawnAttributeSet::OnRep_ArmorDamageReduction(const FGameplayAttributeData& OldValue) {
}

void USBZPawnAttributeSet::OnRep_Armor(const FGameplayAttributeData& OldValue) {
}

void USBZPawnAttributeSet::Multicast_SetOverHeal_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::Multicast_SetOutgoingDamageMultiplier_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::Multicast_SetIncomingDamageMultiplier_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::Multicast_SetHealth_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::Multicast_SetArmorDamageReduction_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::Multicast_SetArmor_Implementation(float NewCurrentValue) {
}

void USBZPawnAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPawnAttributeSet, Health);
    DOREPLIFETIME(USBZPawnAttributeSet, Armor);
    DOREPLIFETIME(USBZPawnAttributeSet, OverHeal);
    DOREPLIFETIME(USBZPawnAttributeSet, OutgoingDamageMultiplier);
    DOREPLIFETIME(USBZPawnAttributeSet, IncomingDamageMultiplier);
    DOREPLIFETIME(USBZPawnAttributeSet, ArmorDamageReduction);
    DOREPLIFETIME(USBZPawnAttributeSet, ArmorBrickBusterIncomingDamageIncrease);
    DOREPLIFETIME(USBZPawnAttributeSet, ElectricTenderizerIncomingDamageIncrease);
    DOREPLIFETIME(USBZPawnAttributeSet, FragTenderizeIncomingDamageIncrease);
    DOREPLIFETIME(USBZPawnAttributeSet, FlashbangMasterIncomingDamageIncrease);
}


