#pragma once
#include "CoreMinimal.h"
#include "ESBZHoldOutModeDifficulty.generated.h"

UENUM(BlueprintType)
enum class ESBZHoldOutModeDifficulty : uint8 {
    Normal,
    Hard,
    VeryHard,
    Overkill,
    OverkillPlus,
    OverkillPlusPlus,
    MAX,
    Default = VeryHard,
};

