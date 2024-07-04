#pragma once
#include "CoreMinimal.h"
#include "ESBZReflexMode.generated.h"

UENUM()
enum class ESBZReflexMode : int32 {
    Off,
    On,
    OnPlusBoost,
    Invalid = -1,
};

