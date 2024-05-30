#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.generated.h"

UENUM(BlueprintType)
enum class ESBZDifficulty : uint8 {
    Normal,
    Hard,
    VeryHard,
    Overkill,
    MAX,
    Default = Normal,
};

