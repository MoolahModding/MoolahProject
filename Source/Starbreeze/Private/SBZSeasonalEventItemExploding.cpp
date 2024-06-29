#include "SBZSeasonalEventItemExploding.h"
#include "Components/SceneComponent.h"
#include "SBZExplosionDamageType.h"

ASBZSeasonalEventItemExploding::ASBZSeasonalEventItemExploding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ExplosionSoundEvent = NULL;
    this->ExplosionDelay = 0.10f;
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
    this->ExplosionInstigator = NULL;
    this->ExplosionLocation = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->ExplosionLocation->SetupAttachment(RootComponent);
}

void ASBZSeasonalEventItemExploding::Multicast_ReplicateExplosion_Implementation(const FSBZExplosionResult& Result) {
}


