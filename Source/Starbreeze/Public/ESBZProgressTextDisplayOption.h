#pragma once
#include "CoreMinimal.h"
#include "ESBZProgressTextDisplayOption.generated.h"

UENUM(BlueprintType)
enum class ESBZProgressTextDisplayOption : uint8 {
    None,
    ShowFraction,
    ShowPercentage,
    ShowSpeed,
    ShowActualTime,
};

