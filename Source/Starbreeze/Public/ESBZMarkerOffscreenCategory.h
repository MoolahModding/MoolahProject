#pragma once
#include "CoreMinimal.h"
#include "ESBZMarkerOffscreenCategory.generated.h"

UENUM(BlueprintType)
enum class ESBZMarkerOffscreenCategory : uint8 {
    Close,
    Mid,
    Far,
    MAX,
};

