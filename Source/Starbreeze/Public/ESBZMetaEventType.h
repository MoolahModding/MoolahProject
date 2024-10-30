#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaEventType.generated.h"

UENUM(BlueprintType)
enum class ESBZMetaEventType : uint8 {
    None,
    IncreasedXP,
    IncreasedCash,
    IncreasedInfamy,
    FreeHeist,
    NewYear,
    Halloween,
    AprilsFool,
    Midsummer,
};

