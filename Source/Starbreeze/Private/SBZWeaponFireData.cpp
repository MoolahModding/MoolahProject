#include "SBZWeaponFireData.h"
#include "SBZBulletDamageType.h"
#include "SBZRangedWeaponEffect.h"

USBZWeaponFireData::USBZWeaponFireData() {
    this->DamageTypeClass = USBZBulletDamageType::StaticClass();
    this->TargetEffectClass = USBZRangedWeaponEffect::StaticClass();
    this->CriticalDamageMultiplierDistanceArray.AddDefaulted(1);
    this->FireMode = ESBZFireMode::Single;
    this->FireType = ESBZFireType::Semi;
    this->ProjectilesPerFiredRound = 1;
    this->BurstRoundCount = 3;
    this->MaximumPenetrationCount = 0;
    this->bCanHitEnvironmentAfterPenetration = false;
    this->bCanPenetrateBlocked = false;
    this->Range = 10000;
    this->AdditionalPlayerRange = 0.00f;
    this->OverHealDamageMultiplier = 1.00f;
    this->ArmorPenetration = 0.00f;
    this->ImpactType = ESBZProjectileImpactType::Light;
    this->FireBuildupIncrease = 0.00f;
    this->FireBuildupShotIncrease = 0.00f;
    this->FireBuildupDecrease = 0.00f;
    this->StartFireBuildupIncrease = 0.00f;
    this->StartFireBuildupShotIncrease = 0.00f;
    this->StartFireBuildupDecrease = 0.00f;
    this->StartFireMinBuildup = 0.00f;
    this->AmmoVisibilityType = ESBZWeaponAmmoVisibilityType::Never;
    this->ArmorPenetrationProjectile = 2.00f;
    this->FriendlyPlayerDamageScale = 0.25f;
    this->InstigatorPlayerDamageScale = 1.00f;
    this->bUseInstigatorPlayerDamageScale = false;
    this->bIsFriendlyFireAllowed = true;
    this->DamageDistanceProjectileArray.AddDefaulted(1);
    this->AmmoLoadedMax = 10;
    this->AmmoPerReload = 10;
    this->AmmoVisibleMax = 10;
    this->AmmoVisibleMaxPreviewOverride = -1;
    this->bIsEmptyAmmoEjected = false;
    this->bIsEquippedAmmoLoadedTracked = false;
    this->bIsChamberRotatedEachFiredRound = false;
    this->bIsChamberRotatedEachReloadedRound = false;
    this->bIsUsingRemoveMagazineCycle = false;
    this->bIsUsingInsertMagazine = false;
    this->bIsUsingInsertMagazineCycle = false;
    this->bIsUsingInsertAmmoCycle1 = false;
    this->bIsUsingInsertAmmoCycle2 = false;
    this->RoundsPerMinute = 600.00f;
}

int32 USBZWeaponFireData::GetProjectilesPerFiredRound() const {
    return 0;
}

void USBZWeaponFireData::GetCriticalMultipliersOnEachDistance(float MinDistance, float MaxDistance, float DistanceStep, TArray<float>& OutMultiplierArray) const {
}


