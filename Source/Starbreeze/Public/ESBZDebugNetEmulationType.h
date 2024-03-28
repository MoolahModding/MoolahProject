#pragma once
#include "CoreMinimal.h"
#include "ESBZDebugNetEmulationType.generated.h"

UENUM(BlueprintType)
enum class ESBZDebugNetEmulationType : uint8 {
    None,
    Average,
    Bad,
};

