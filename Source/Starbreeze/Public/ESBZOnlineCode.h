#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineCode : uint8 {
    Success,
    Interrupted,
    PlatformTimedOut,
    InvalidRequest,
    InternalError,
    LostConnectionToHost,
    HostFailedToStartLoading,
    PrivilegeError,
    MissionAlreadyFinished,
    QuickMatchLostConnection,
    BeaconSlotReservationFailed,
    BeaconConnectionFailed,
    OnlinePlatformRequestError,
    WrongBeaconPort,
    WrongSessionPhase,
    PartyFailedToJoinLobby,
    ServerVersionMismatch,
    LostConnectionToMatchMakingService,
    DataParsingError,
    PartyLeaderCancelledMatchmaking,
    JoinedCrossPlatformLobby,
    SessionIsFull,
    SessionDoesNotExist,
    ReturnToIIS,
};

