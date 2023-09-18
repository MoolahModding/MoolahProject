#pragma once
#include "CoreMinimal.h"
#include "ESBZKickingMode.generated.h"

UENUM(BlueprintType)
enum class ESBZKickingMode : uint8 {
    PartyDirectKicking,
    PartyKickRequest,
    GameKickInitiation,
    GameKickVoteUp,
    GameKickVoteDown,
};

