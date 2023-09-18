#pragma once
#include "CoreMinimal.h"
#include "EV2MatchmakingNotifTopic.generated.h"

UENUM(BlueprintType)
enum class EV2MatchmakingNotifTopic : uint8 {
    Invalid,
    OnMatchFound,
    OnMatchmakingStarted,
    OnMatchmakingTicketExpired,
    OnMatchmakingTicketCanceled,
};

