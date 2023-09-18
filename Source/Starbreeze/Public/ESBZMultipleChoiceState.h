#pragma once
#include "CoreMinimal.h"
#include "ESBZMultipleChoiceState.generated.h"

UENUM(BlueprintType)
enum class ESBZMultipleChoiceState : uint8 {
    Low,
    Medium,
    High,
    Ultra,
    Invalid = -0x1,
};

