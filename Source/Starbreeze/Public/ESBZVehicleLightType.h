#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleLightType.generated.h"

UENUM(BlueprintType)
enum class ESBZVehicleLightType : uint8 {
    Headlights,
    TailLights,
    FogLights,
    BrakeLights,
    ReverseLights,
    TurnLeft,
    TurnRight,
};

