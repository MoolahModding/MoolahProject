#pragma once
#include "CoreMinimal.h"
#include "ESBZLoudOptions.generated.h"

UENUM(BlueprintType)
enum class ESBZLoudOptions : uint8 {
    ResetAndRestart,
    ResetAndStop,
    Cancel,
    Continue,
};

