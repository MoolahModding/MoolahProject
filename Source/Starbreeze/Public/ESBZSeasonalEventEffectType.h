#pragma once
#include "CoreMinimal.h"
#include "ESBZSeasonalEventEffectType.generated.h"

UENUM(BlueprintType)
enum class ESBZSeasonalEventEffectType : uint8 {
    None,
    GainAllBuffs,
    FirstAid,
    ArmorBag,
    AmmoBag,
    Punishment,
};

