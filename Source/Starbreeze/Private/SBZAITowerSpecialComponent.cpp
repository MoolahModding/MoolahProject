#include "SBZAITowerSpecialComponent.h"
#include "Net/UnrealNetwork.h"

void USBZAITowerSpecialComponent::OnRep_RefractorShield(ASBZAIRefractorShield* OldRefractorShield) {
}

void USBZAITowerSpecialComponent::OnRep_IsGlitchEffectActive() {
}

void USBZAITowerSpecialComponent::OnHideOrderCompleted(USBZAIOrder* Order, APawn* Owner, TEnumAsByte<EBTNodeResult::Type> NodeResult) {
}

void USBZAITowerSpecialComponent::Multicast_RetractShield_Implementation() {
}

void USBZAITowerSpecialComponent::Multicast_ActivateGlitchEffect_Implementation(bool bIsEffectActive) {
}

void USBZAITowerSpecialComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAITowerSpecialComponent, RefractorShield);
    DOREPLIFETIME(USBZAITowerSpecialComponent, bIsGlitchEffectActive);
}

USBZAITowerSpecialComponent::USBZAITowerSpecialComponent() {
    this->ShieldClass = NULL;
    this->ShieldBrokenComment = NULL;
    this->ShieldDeployedComment = NULL;
    this->RefractorShield = NULL;
    this->bIsGlitchEffectActive = false;
}

