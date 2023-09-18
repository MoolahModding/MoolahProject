#pragma once
#include "CoreMinimal.h"
#include "EPD3MiniGameState.generated.h"

UENUM(BlueprintType)
enum class EPD3MiniGameState : uint8 {
    None,
    Initiated,
    InProgress,
    Failed,
    Aborted,
    Success,
};

