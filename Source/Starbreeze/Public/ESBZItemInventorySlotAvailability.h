#pragma once
#include "CoreMinimal.h"
#include "ESBZItemInventorySlotAvailability.generated.h"

UENUM(BlueprintType)
enum class ESBZItemInventorySlotAvailability : uint8 {
    Available,
    Taken,
};

