#include "SBZVolumeDamageProp.h"
#include "Net/UnrealNetwork.h"

void ASBZVolumeDamageProp::SetServerDamageEnabled(const TScriptInterface<IAbilitySystemInterface>& AbilitySystemScriptInterface, bool bIsEnabled) {
}

void ASBZVolumeDamageProp::OnVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZVolumeDamageProp::OnVolumeCollisionChanged(UPrimitiveComponent* ChangedComponent) {
}

void ASBZVolumeDamageProp::OnVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZVolumeDamageProp::OnRep_IsCollisionEnabled() {
}

void ASBZVolumeDamageProp::Multicast_CollisionEnabled_Implementation(bool bIsEnabled) {
}


void ASBZVolumeDamageProp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZVolumeDamageProp, bIsCollisionEnabled);
}

ASBZVolumeDamageProp::ASBZVolumeDamageProp() {
    this->EffectInnerLocationArrayName = TEXT("ParticleLocations");
    this->EffectInnerLocationCountName = TEXT("ParticleCount");
    this->EffectBorderLocationArrayName = TEXT("BorderParticleLocations");
    this->EffectBorderLocationCountName = TEXT("BorderParticleCount");
    this->EffectDurationName = TEXT("Duration");
    this->EffectComponent = NULL;
    this->EffectAsset = NULL;
    this->bIsEffectRotationSupported = false;
    this->bIsCollisionEnabled = false;
}

