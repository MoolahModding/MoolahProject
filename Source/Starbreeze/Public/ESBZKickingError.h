#pragma once
#include "CoreMinimal.h"
#include "ESBZKickingError.generated.h"

UENUM(BlueprintType)
enum class ESBZKickingError : uint8 {
    NotEnoughPlayers,
    KickingInProgress,
};

