#pragma once
#include "CoreMinimal.h"
#include "ESBZMaintenanceBoxState.generated.h"

UENUM(BlueprintType)
enum class ESBZMaintenanceBoxState : uint8 {
    Off,
    On,
    Cutting,
    Deactivate,
};

