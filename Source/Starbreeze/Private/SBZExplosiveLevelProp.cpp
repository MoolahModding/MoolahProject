#include "SBZExplosiveLevelProp.h"
#include "SBZExplosionDamageType.h"

ASBZExplosiveLevelProp::ASBZExplosiveLevelProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ExplosionSoundEvent = NULL;
    this->AIExplosionRadius = 500.00f;
    this->PlayerExplosionRadius = 300.00f;
    this->DamageDistanceArray.AddDefaulted(1);
    this->ArmorPenetration = 1.00f;
    this->FriendlyFireDamageScale = 1.00f;
    this->FriendlyFireArmorPenetrationScale = 1.00f;
    this->ExplosionDamageType = USBZExplosionDamageType::StaticClass();
    this->GameplayEffectClass = NULL;
    this->ExplosionEffect = NULL;
    this->bDoDecal = true;
    this->LocalPlayerFeedback = NULL;
    this->bIsDestroyedOnExplosion = true;
    this->ExplosionInstigator = NULL;
    this->ExplosionEffectComponent = NULL;
}

void ASBZExplosiveLevelProp::SetExplosionInstigator(AActor* InInstigator) {
}

void ASBZExplosiveLevelProp::ServerStopExplosionTimer() {
}

void ASBZExplosiveLevelProp::ServerStartExplosionTimer() {
}

void ASBZExplosiveLevelProp::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}

void ASBZExplosiveLevelProp::DebugServerStartExplosionTimer() {
}



