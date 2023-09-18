#pragma once
#include "CoreMinimal.h"
#include "ESBZImpactConfigType.generated.h"

UENUM(BlueprintType)
enum class ESBZImpactConfigType : uint8 {
    Default,
    Projectile,
    ThrowableProjectile,
    ThrowableProjectileBounce,
    Throwable,
    Melee,
    Explosion,
    FootStep,
    Sliding,
    Mantling,
    StepUp,
    ObjectImpact,
    ObjectRolling,
    DebrisImpact,
    DebrisRolling,
    BagItem,
    Last,
    First = 0x0,
};

