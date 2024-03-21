#include "SBZPlayerAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZPlayerAttributeSet::OnRep_TertiaryToolPlaceableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_TertiaryToolAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_TertiaryThrowableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_TertiaryPlaceableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_TertiaryEquippableAmmoLoaded(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_TertiaryEquippableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_SecondaryToolPlaceableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_SecondaryToolAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_SecondaryThrowableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_SecondaryPlaceableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_SecondaryEquippableAmmoLoaded(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_SecondaryEquippableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_PrimaryToolPlaceableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_PrimaryToolAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_PrimaryThrowableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_PrimaryPlaceableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_PrimaryEquippableAmmoLoaded(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_PrimaryEquippableAmmoInventory(const FGameplayAttributeData& OldData) {
}

void USBZPlayerAttributeSet::OnRep_DownedCount(const FGameplayAttributeData& OldDownedCount) {
}

void USBZPlayerAttributeSet::OnRep_Dodge(const FGameplayAttributeData& OldDodge) {
}

void USBZPlayerAttributeSet::OnRep_ArmorTrauma(const FGameplayAttributeData& OldArmorTrauma) {
}

void USBZPlayerAttributeSet::OnRep_ArmorChunkCount(const FGameplayAttributeData& OldArmorChunkCount) {
}

void USBZPlayerAttributeSet::Multicast_SetTertiaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetTertiaryToolAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetTertiaryThrowableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetTertiaryPlaceableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetTertiaryEquippableAmmoLoaded_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetTertiaryEquippableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetSecondaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetSecondaryToolAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetSecondaryThrowableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetSecondaryPlaceableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetSecondaryEquippableAmmoLoaded_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetSecondaryEquippableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetPrimaryToolPlaceableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetPrimaryToolAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetPrimaryThrowableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetPrimaryPlaceableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetPrimaryEquippableAmmoLoaded_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetPrimaryEquippableAmmoInventory_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetDownedCount_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetDodge_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetArmorTrauma_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::Multicast_SetArmorChunkCount_Implementation(float NewCurrentValue) {
}

void USBZPlayerAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerAttributeSet, PrimaryEquippableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, SecondaryEquippableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, TertiaryEquippableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, PrimaryEquippableAmmoLoaded);
    DOREPLIFETIME(USBZPlayerAttributeSet, SecondaryEquippableAmmoLoaded);
    DOREPLIFETIME(USBZPlayerAttributeSet, TertiaryEquippableAmmoLoaded);
    DOREPLIFETIME(USBZPlayerAttributeSet, PrimaryThrowableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, SecondaryThrowableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, TertiaryThrowableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, PrimaryPlaceableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, SecondaryPlaceableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, TertiaryPlaceableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, PrimaryToolPlaceableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, SecondaryToolPlaceableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, TertiaryToolPlaceableAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, PrimaryToolAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, SecondaryToolAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, TertiaryToolAmmoInventory);
    DOREPLIFETIME(USBZPlayerAttributeSet, DownedCount);
    DOREPLIFETIME(USBZPlayerAttributeSet, Dodge);
    DOREPLIFETIME(USBZPlayerAttributeSet, ArmorChunkCount);
    DOREPLIFETIME(USBZPlayerAttributeSet, ArmorTrauma);
}

USBZPlayerAttributeSet::USBZPlayerAttributeSet() {
    this->PrimaryEquippableAmmoInventoryServer = -1.00f;
    this->SecondaryEquippableAmmoInventoryServer = -1.00f;
    this->TertiaryEquippableAmmoInventoryServer = -1.00f;
    this->PrimaryEquippableAmmoLoadedServer = -1.00f;
    this->SecondaryEquippableAmmoLoadedServer = -1.00f;
    this->TertiaryEquippableAmmoLoadedServer = -1.00f;
    this->PrimaryThrowableAmmoInventoryServer = -1.00f;
    this->SecondaryThrowableAmmoInventoryServer = -1.00f;
    this->TertiaryThrowableAmmoInventoryServer = -1.00f;
    this->PrimaryPlaceableAmmoInventoryServer = -1.00f;
    this->SecondaryPlaceableAmmoInventoryServer = -1.00f;
    this->TertiaryPlaceableAmmoInventoryServer = -1.00f;
    this->PrimaryToolPlaceableAmmoInventoryServer = -1.00f;
    this->SecondaryToolPlaceableAmmoInventoryServer = -1.00f;
    this->TertiaryToolPlaceableAmmoInventoryServer = -1.00f;
    this->PrimaryToolAmmoInventoryServer = -1.00f;
    this->SecondaryToolAmmoInventoryServer = -1.00f;
    this->TertiaryToolAmmoInventoryServer = -1.00f;
    this->ArmorData = NULL;
    this->AbilityData = NULL;
}

