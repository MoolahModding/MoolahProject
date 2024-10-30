#pragma once
#include "CoreMinimal.h"
#include "ESBZSessionType.generated.h"

UENUM(BlueprintType)
enum class ESBZSessionType : uint8 {
    Unknown,
    GameSession,
    PartySession,
};

