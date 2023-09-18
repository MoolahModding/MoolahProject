#pragma once
#include "CoreMinimal.h"
#include "ESBZUIWeaponStat.generated.h"

UENUM(BlueprintType)
enum class ESBZUIWeaponStat : uint8 {
    Damage,
    Recoil,
    Stability,
    Accuracy,
    Handling,
    FireRate,
    MAX,
};

