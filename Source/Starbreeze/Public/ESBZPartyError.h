#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyError.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyError : uint8 {
    DifferentGameClientsVersion,
    FriendNotFound,
    PartyLeaderLeft,
    DifferentHostingProvider,
    JoinedCrossPlatformSession,
    SessionIsFull,
    SessionDoesNotExist,
    AlreadyInSession,
    InvalidFriendship,
    InvalidCode,
    MaxActiveSessionReached,
    InvalidJoinability,
    InactiveTimeout,
    MemberBlock,
    UnknownError,
};

