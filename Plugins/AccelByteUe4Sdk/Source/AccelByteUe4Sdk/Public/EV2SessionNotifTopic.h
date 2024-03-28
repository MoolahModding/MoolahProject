#pragma once
#include "CoreMinimal.h"
#include "EV2SessionNotifTopic.generated.h"

UENUM(BlueprintType)
enum class EV2SessionNotifTopic : uint8 {
    Invalid,
    OnPartyInvited,
    OnPartyMembersChanged,
    OnPartyJoined,
    OnPartyRejected,
    OnPartyKicked,
    OnSessionInvited,
    OnSessionJoined,
    OnSessionMembersChanged,
    OnSessionKicked,
    OnSessionRejected,
    OnDSStatusChanged,
    OnPartyUpdated,
    OnGameSessionUpdated,
    OnSessionStorageChanged,
    OnSessionEnded,
    OnSessionNativePlatformSynced,
};

