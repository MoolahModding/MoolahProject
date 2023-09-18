#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleSpawnResult.generated.h"

UENUM(BlueprintType)
enum class ESBZVehicleSpawnResult : uint8 {
    Success,
    Aborted,
};

