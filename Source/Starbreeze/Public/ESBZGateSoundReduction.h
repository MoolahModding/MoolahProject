#pragma once
#include "CoreMinimal.h"
#include "ESBZGateSoundReduction.generated.h"

UENUM(BlueprintType)
enum class ESBZGateSoundReduction : uint8 {
    None,
    Low,
    Medium,
    High,
    Total,
    MAX,
};

