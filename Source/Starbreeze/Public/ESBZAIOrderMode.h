#pragma once
#include "CoreMinimal.h"
#include "ESBZAIOrderMode.generated.h"

UENUM(BlueprintType)
enum class ESBZAIOrderMode : uint8 {
    Instant,
    Deferred,
    Reset,
    Forced,
    None,
};

