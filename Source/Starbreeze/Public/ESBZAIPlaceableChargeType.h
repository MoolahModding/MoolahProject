#pragma once
#include "CoreMinimal.h"
#include "ESBZAIPlaceableChargeType.generated.h"

UENUM(BlueprintType)
enum class ESBZAIPlaceableChargeType : uint8 {
    None,
    Ammo,
    Armor,
    Health,
    Sentry,
    MAX,
};

