#pragma once
#include "CoreMinimal.h"
#include "ESBZPlaceableChargeType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlaceableChargeType : uint8 {
    None,
    Ammo,
    Armor,
    Health,
    Sentry,
    MAX,
};

