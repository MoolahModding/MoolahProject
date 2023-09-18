#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleDoorState.generated.h"

UENUM(BlueprintType)
enum class ESBZVehicleDoorState : uint8 {
    Opened,
    Closed,
};

