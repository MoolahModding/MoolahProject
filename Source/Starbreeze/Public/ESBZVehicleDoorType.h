#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleDoorType.generated.h"

UENUM(BlueprintType)
enum class ESBZVehicleDoorType : uint8 {
    Invalid,
    SideFrontLeft,
    SideFrontRight,
    SideBackLeft,
    SideBackRight,
    TopFront,
    TopBack,
    BackLeft,
    BackRight,
};

