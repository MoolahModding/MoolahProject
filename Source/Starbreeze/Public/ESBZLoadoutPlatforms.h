#pragma once
#include "CoreMinimal.h"
#include "ESBZLoadoutPlatforms.generated.h"

UENUM(BlueprintType)
enum class ESBZLoadoutPlatforms : uint8 {
    Steam,
    PlayStation,
    XBox,
    Epic,
    MAX,
};

