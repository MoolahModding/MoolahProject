#pragma once
#include "CoreMinimal.h"
#include "ESBZMultipleChoiceState.generated.h"

UENUM()
enum class ESBZMultipleChoiceState {
    Low,
    Medium,
    High,
    Ultra,
    Invalid = -1,
};

