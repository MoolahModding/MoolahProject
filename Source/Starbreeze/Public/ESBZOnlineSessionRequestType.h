#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineSessionRequestType.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineSessionRequestType : uint8 {
    PartyUpdate,
    LobbyUpdate,
    Join,
    Host,
    DestroyLobby,
    HostParty,
    DestroyParty,
    Search,
    RestoreLobbyBeacon,
    RestorePartyBeacon,
    None,
};

