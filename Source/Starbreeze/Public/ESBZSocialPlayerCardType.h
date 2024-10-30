#pragma once
#include "CoreMinimal.h"
#include "ESBZSocialPlayerCardType.generated.h"

UENUM(BlueprintType)
enum class ESBZSocialPlayerCardType : uint8 {
    AccelByteFriend,
    PlatformFriend,
    IncomingFriendRequest,
    OutgoingFriendRequest,
    UserSearchResult,
    BlockedPlayers,
    OfflineFriends,
    RecentlyPlayed,
    PartyMember,
    Matchmaking,
};

