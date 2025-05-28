#pragma once
#include "CoreMinimal.h"
#include "ESBZArmorSpeedPenalty.generated.h"

UENUM(BlueprintType)
enum class ESBZArmorSpeedPenalty : uint8 {
    None,
    Light,
    Medium,
    Heavy,
};

