#pragma once
#include "CoreMinimal.h"
#include "ESBZGameMachineStateError.generated.h"

UENUM(BlueprintType)
enum class ESBZGameMachineStateError : uint8 {
    HostDisconnected,
    HostFailedToStartLoading,
    DropInIntoEndedMission,
    WrongGameVersion,
    NoMatchingServerVersion,
    MatchmakingError,
    HostBeaconDisconnected,
    ActionBeaconTimeout,
    TravelToHostTimeout,
    StartTravellingHandshakeFailed,
    MissionEnded,
    InvalidReturnToMainMenu,
    HostMigrationFailed,
    WrongLevel,
    SteamNotSignedIn,
    EOSNotSignedIn,
    PSNNotSignedIn,
    XboxLiveNotSignedIn,
    PremiumAccountEligibilityCheck,
    NetworkNoConnection,
    FailedToFetchRequiredAccelByteData,
    LostConnectionToMatchMakingService,
    SessionIsFull,
    NebulaLoginConnectionFailed,
    NebulaLoginConnectionFailedAlreadyLinked,
    NebulaLoginFailed,
    NebulaLoginLinking,
    NebulaLoginLinkingOtherXbox,
    NebulaLoginWrongCreds,
    Unknown,
    PartySessionDoesNotExist,
    GameSessionDoesNotExist,
    ReturningFromSuspendedState,
    LobbyClosedConnection,
    PlayerBanned,
};

