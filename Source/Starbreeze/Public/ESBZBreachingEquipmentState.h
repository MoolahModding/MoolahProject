#pragma once
#include "CoreMinimal.h"
#include "ESBZBreachingEquipmentState.generated.h"

UENUM(BlueprintType)
enum class ESBZBreachingEquipmentState : uint8 {
    HeatingUp,
    Drilling,
    NotAssembled,
    Off,
    NeedsAdjusting,
    Jammed,
    Done,
};

