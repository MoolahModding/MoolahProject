#pragma once
#include "CoreMinimal.h"
#include "ESBZDebugNetEmulationTarget.generated.h"

UENUM(BlueprintType)
enum class ESBZDebugNetEmulationTarget : uint8 {
    Local,
    Server,
    All,
};

