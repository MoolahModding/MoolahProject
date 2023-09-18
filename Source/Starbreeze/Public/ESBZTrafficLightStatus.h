#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficLightStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZTrafficLightStatus : uint8 {
    FullOff,
    Red,
    Orange,
    Yellow,
    Green,
    FullLights,
    MAX,
};

