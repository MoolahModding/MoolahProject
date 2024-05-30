#pragma once
#include "CoreMinimal.h"
#include "ESBZPlaceableToolType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlaceableToolType : uint8 {
    None,
    ECMJammer,
    MicroCamera,
    SensorTool,
    TripMine,
    Tripper,
};

