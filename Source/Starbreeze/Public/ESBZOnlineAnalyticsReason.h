#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineAnalyticsReason.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineAnalyticsReason : uint8 {
    Undefined,
    InitialParty,
    Matchmaking,
    PlayTogether,
    DebugSession,
    BeaconLostConnectionToHost,
    PartyHostChangedSession,
    MatchmakingFoundNewSession,
    DebugLeaveSessionNode,
    InviteProcessing,
    InviteProcessingFailed,
    AcceptMatchCooldown,
    RestartMatchCooldown,
    DisconnectedWaitingResult,
    UserLaunchedSoloGame,
    UserLeftParty,
    ReturnToMenuFromActionPhase,
    ReturnToMenuFromLobby,
    ReturnToMenuFromMatchmaking,
    ReturnToMenuFromResult,
    GameError,
    IisError,
};

