#pragma once
#include "CoreMinimal.h"
#include "ESBZWidgetZOrdering.generated.h"

UENUM(BlueprintType)
enum class ESBZWidgetZOrdering : uint8 {
    DefaultBackground,
    Default,
    DefaultForeGround,
    OverlayBackground,
    Overlay,
    OverlayForeGround,
};

