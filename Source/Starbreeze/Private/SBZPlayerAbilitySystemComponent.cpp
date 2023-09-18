#include "SBZPlayerAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

USBZPlayerAbilitySystemComponent::USBZPlayerAbilitySystemComponent() {
    this->StaggeredTargetDamageIncrease = 0.10f;
    this->BuffTimeArray[0] = 0.00f;
    this->BuffTimeArray[1] = 0.00f;
    this->BuffTimeArray[2] = 0.00f;
    this->ServerBuffTimeArray[0] = 0.00f;
    this->ServerBuffTimeArray[1] = 0.00f;
    this->ServerBuffTimeArray[2] = 0.00f;
    this->BuffDurationArray[0] = 30.00f;
    this->BuffDurationArray[1] = 30.00f;
    this->BuffDurationArray[2] = 30.00f;
    this->BuffMovementSpeedIncrease = 0.10f;
    this->BuffDamageReduction = 0.10f;
    this->BuffDamageIncrease = 0.10f;
    this->PredictingBuffBitmask = 0;
    this->BuffTickCount = 0;
    this->BuffBlockCountArray[0] = 0.00f;
    this->BuffBlockCountArray[1] = 0.00f;
    this->BuffBlockCountArray[2] = 0.00f;
    this->BuffGUIEffectDataArray[0] = NULL;
    this->BuffGUIEffectDataArray[1] = NULL;
    this->BuffGUIEffectDataArray[2] = NULL;
    this->TankLastManStandingImmuneGUIEffectData = NULL;
    this->TankLastManStandingBlockingGUIEffectData = NULL;
    this->BuffGUIEffectHandleArray[0] = 0;
    this->BuffGUIEffectHandleArray[1] = 0;
    this->BuffGUIEffectHandleArray[2] = 0;
    this->TankLastManStandingImmuneGUIEffectHandle = 0;
    this->TankLastManStandingBlockingGUIEffectHandle = 0;
    this->SkillTankLastManStandingImmuneTime = 0.00f;
    this->bIsSkillTankLastManStandingBlocking = false;
    this->bIsAmmoSpecialistHighGrainSkillActive = false;
    this->bCanTriggerCoupDeGraceSkill = false;
}

void USBZPlayerAbilitySystemComponent::Server_SetSpeedBuffTime_Implementation(const FGameplayTag& SkillTag, float Time) {
}

void USBZPlayerAbilitySystemComponent::Server_SetMitigationBuffTime_Implementation(const FGameplayTag& SkillTag, float Time) {
}

void USBZPlayerAbilitySystemComponent::Server_SetDamageBuffTime_Implementation(const FGameplayTag& SkillTag, float Time) {
}

void USBZPlayerAbilitySystemComponent::Server_ResetSpeedBuffTime_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Server_ResetMitigationBuffTime_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Server_ResetDamageBuffTime_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Server_DeactivateAmmoSpecialistHighGrainSkill_Implementation() {
}

void USBZPlayerAbilitySystemComponent::OnSkillTankLastManStandingImmuneTimeChanged() {
}

void USBZPlayerAbilitySystemComponent::OnSkillTankLastManStandingBlockingChanged() {
}

void USBZPlayerAbilitySystemComponent::OnRep_BuffTimeArray() {
}

void USBZPlayerAbilitySystemComponent::Multicast_UnblockSkillTankLastManStanding_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Multicast_SetSpeedBuffTime_Implementation(float Time) {
}

void USBZPlayerAbilitySystemComponent::Multicast_SetSkillTankLastManStandingImmuneTime_Implementation(float ImmuneTime) {
}

void USBZPlayerAbilitySystemComponent::Multicast_SetMitigationBuffTime_Implementation(float Time) {
}

void USBZPlayerAbilitySystemComponent::Multicast_SetDamageBuffTime_Implementation(float Time) {
}

void USBZPlayerAbilitySystemComponent::Multicast_ResetSpeedBuffTime_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Multicast_ResetMitigationBuffTime_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Multicast_ResetDamageBuffTime_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Multicast_MarkedForDeath_Implementation(const TArray<ASBZAIBaseCharacter*>& AICharacters) {
}

void USBZPlayerAbilitySystemComponent::Multicast_DeactivateAmmoSpecialistHighGrainSkill_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Multicast_ActivateAmmoSpecialistHighGrainSkill_Implementation() {
}

void USBZPlayerAbilitySystemComponent::Client_RejectBuffTime_Implementation(ESBZPlayerAbilityBuffType Type) {
}

void USBZPlayerAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerAbilitySystemComponent, BuffTimeArray);
    DOREPLIFETIME(USBZPlayerAbilitySystemComponent, SkillTankLastManStandingImmuneTime);
    DOREPLIFETIME(USBZPlayerAbilitySystemComponent, bIsSkillTankLastManStandingBlocking);
    DOREPLIFETIME(USBZPlayerAbilitySystemComponent, bIsAmmoSpecialistHighGrainSkillActive);
}


