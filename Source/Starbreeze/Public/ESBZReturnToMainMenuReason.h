#pragma once
#include "CoreMinimal.h"
#include "ESBZReturnToMainMenuReason.generated.h"

UENUM(BlueprintType)
enum class ESBZReturnToMainMenuReason : uint8 {
    Unknown,
    UserRequest,
    PartyHostRequest,
    MatchmakingTimeout,
    MissionEnded,
    QuickMatchLostConnectionToSession,
    MatchmakingError,
    InviteProcessing,
    PartyFailedToJoinLobby,
    InvalidReplay,
    CanPlayOnlineCheckFailed,
    JoinProcessing,
    CancelMatchmaking,
    KickedByHost,
};

