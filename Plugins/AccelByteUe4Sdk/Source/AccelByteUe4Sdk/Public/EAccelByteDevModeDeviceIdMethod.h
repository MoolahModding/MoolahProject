#pragma once
#include "CoreMinimal.h"
#include "EAccelByteDevModeDeviceIdMethod.generated.h"

UENUM(BlueprintType)
enum class EAccelByteDevModeDeviceIdMethod : uint8 {
    UNSPECIFIED,
    COMMANDLINE,
    PICK_RANDOM,
    RANDOMIZE,
    PERSISTENT,
};

