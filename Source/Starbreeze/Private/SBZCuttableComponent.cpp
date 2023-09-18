#include "SBZCuttableComponent.h"
#include "Net/UnrealNetwork.h"

USBZCuttableComponent::USBZCuttableComponent() {
    this->FuelCost = 1;
    this->CuttableType = ESBZCuttableType::Circle;
    this->CuttableState = ESBZCuttableState::Whole;
    this->TotalCutTime = 8.00f;
    this->CuttableTier = ESBZCuttingMaterialTier::None;
    this->HotSpeed = 6.00f;
    this->CoolSpeed = 50.00f;
    this->InitialCutAngle = 0.00f;
    this->NiagaraEffectVisibilityTime = 0.10f;
    
}

void USBZCuttableComponent::OnRep_InitialCutAngle() {
}

void USBZCuttableComponent::OnRep_CuttableState() {
}

void USBZCuttableComponent::OnRep_CutProgressData() {
}


void USBZCuttableComponent::Multicast_SetCuttableState_Implementation(ESBZCuttableState NewCuttableState) {
}

void USBZCuttableComponent::Multicast_CreateLineCut_Implementation(FSBZCutProgressData NewCutProgressData) {
}

void USBZCuttableComponent::Multicast_CreateInitialCutAngle_Implementation(float InCutAngle) {
}

void USBZCuttableComponent::Multicast_CreateInitialCut_Implementation(FSBZCutProgressData NewCutProgressData) {
}

void USBZCuttableComponent::Multicast_CreateCut_Implementation(FSBZCutProgressData NewCutProgressData) {
}

ESBZCuttableType USBZCuttableComponent::GetCuttableType() const {
    return ESBZCuttableType::Circle;
}

ESBZCuttableState USBZCuttableComponent::GetCuttableState() const {
    return ESBZCuttableState::Whole;
}

void USBZCuttableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZCuttableComponent, CuttableState);
    DOREPLIFETIME(USBZCuttableComponent, CutProgressData);
    DOREPLIFETIME(USBZCuttableComponent, InitialCutAngle);
}


