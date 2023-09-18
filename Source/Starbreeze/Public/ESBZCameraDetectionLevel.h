#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraDetectionLevel.generated.h"

UENUM(BlueprintType)
enum class ESBZCameraDetectionLevel : uint8 {
    None,
    Investigate,
    Criminal,
    Alarm,
};

