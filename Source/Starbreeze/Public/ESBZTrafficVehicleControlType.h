#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficVehicleControlType.generated.h"

UENUM(BlueprintType)
enum class ESBZTrafficVehicleControlType : uint8 {
    StopAtDistance,
    Start,
    SetCruisingSpeed,
    SetDeceleration,
    SetAcceleration,
    SoundHorn,
    None,
};

