#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2SessionType : uint8 {
    Unknown,
    GameSession,
    PartySession,
};

