#pragma once
#include "CoreMinimal.h"
#include "ESBZHeistEndReason.generated.h"

UENUM(BlueprintType)
enum class ESBZHeistEndReason : uint8 {
    GameFinished,
    PlayerDroppedOut,
    GameTerminated,
};

