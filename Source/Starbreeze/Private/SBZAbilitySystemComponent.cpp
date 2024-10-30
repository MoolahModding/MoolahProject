#include "SBZAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZLandingEffect.h"

USBZAbilitySystemComponent::USBZAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Character = NULL;
    this->LandingGameplayEffectClass = USBZLandingEffect::StaticClass();
}

void USBZAbilitySystemComponent::Server_ReplicateExplosion_Implementation(UObject* ExplosiveObject, const FSBZExplosionResult& Result, FPredictionKey PredictionKey) {
}

void USBZAbilitySystemComponent::Server_ReplicateCosmeticExplosion_Implementation(UObject* ExplosiveObject) {
}

void USBZAbilitySystemComponent::Server_MaskOn_Implementation() {
}

void USBZAbilitySystemComponent::OnRep_AppliedVolumeDamageNetIDArray() {
}

void USBZAbilitySystemComponent::OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void USBZAbilitySystemComponent::Multicast_ShoveHumanShield_Implementation(const FSBZActorMultiHitResult& ActorMultiHitResult) {
}

void USBZAbilitySystemComponent::Multicast_Melee_Implementation(const FSBZMeleeTargetData& TargetData) {
}

void USBZAbilitySystemComponent::Multicast_MaskOn_Implementation() {
}

void USBZAbilitySystemComponent::Multicast_Landed_Implementation(const FSBZFallDamageTargetData& TargetData) {
}

void USBZAbilitySystemComponent::Multicast_FireWeaponBuildupEnded_Implementation() {
}

void USBZAbilitySystemComponent::Multicast_FireWeaponBuildup_Implementation() {
}

void USBZAbilitySystemComponent::Multicast_FireProjectileSentry_Implementation(const FSBZProjectileTargetData& TargetData) {
}

void USBZAbilitySystemComponent::Multicast_FireProjectile_Implementation(const FSBZProjectileTargetData& TargetData) {
}

void USBZAbilitySystemComponent::Multicast_FireGrenadeProjectile_Implementation() {
}

void USBZAbilitySystemComponent::Multicast_ExitVolumeDamage_Implementation(uint32 NetID) {
}

void USBZAbilitySystemComponent::Multicast_EnterVolumeDamage_Implementation(uint32 NetID) {
}

void USBZAbilitySystemComponent::Multicast_DebugApplyGameplayEffectSpecToSelf_Implementation(FGameplayEffectSpec EffectSpec, float Duration, const FString& NameMagnitudeString) {
}

void USBZAbilitySystemComponent::Multicast_ApplyGameplayEffectSpecToSelf_Implementation(const FGameplayEffectSpec& EffectSpec) {
}

void USBZAbilitySystemComponent::Multicast_AppliedSkillHurtReaction_Implementation(const FSBZSkillTriggeredHurtTargetData& SkillTriggeredHurtTargetData) {
}

void USBZAbilitySystemComponent::Client_RevertDamageAttributeSetArray_Implementation(const TArray<FSBZRevertDamageAttributeSetData>& AttributeSetDataArray) {
}

void USBZAbilitySystemComponent::Client_RevertDamageAttributeSet_Implementation(const FSBZRevertDamageAttributeSetData& AttributeSetData) {
}

void USBZAbilitySystemComponent::Client_PredictedRagdollDenied_Implementation(APawn* InPawn, int32 HurtReactionIndex) {
}

void USBZAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAbilitySystemComponent, AppliedVolumeDamageNetIDArray);
}


