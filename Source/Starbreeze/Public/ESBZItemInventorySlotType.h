#pragma once
#include "CoreMinimal.h"
#include "ESBZItemInventorySlotType.generated.h"

UENUM(BlueprintType)
enum class ESBZItemInventorySlotType : uint8 {
    PremiumPreset,
    Preset,
    Configurable,
    Preconfig,
};

