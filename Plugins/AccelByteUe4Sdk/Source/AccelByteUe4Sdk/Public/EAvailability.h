#pragma once
#include "CoreMinimal.h"
#include "EAvailability.generated.h"

UENUM(BlueprintType)
enum class EAvailability : uint8 {
    Offline,
    Online,
    Busy,
    Invisible,
    Away,
};

