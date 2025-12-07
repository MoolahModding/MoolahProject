#pragma once
#include "CoreMinimal.h"
#include "ESBZInstigatorSourceType.generated.h"

UENUM(BlueprintType)
enum class ESBZInstigatorSourceType : uint8 {
    None,
    RangedWeapon,
    ThrowableKnife,
    MeleeExplosion,
    GrenadeExplosion,
    GrenadeProjectileExplosion,
    SentryGunExplosion,
    TripMineExplosion,
    MicroCameraExplosion,
    TaserMineExplosion,
    GateExplosion,
    SecurityCameraExplosion,
    GrenadeBeltExplosion,
    TaserBatteryExplosion,
    DroneExplosion,
    CookingStationExplosion,
    SeasonalEventExplosion,
    PropExplosion,
    FallDamage,
    KillVolume,
};

