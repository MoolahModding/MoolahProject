#pragma once
#include "CoreMinimal.h"
#include "ESocialFriendButtonType.generated.h"

UENUM(BlueprintType)
enum class ESocialFriendButtonType : uint8 {
    AccelByteFriend,
    PlatformFriend,
    IncomingFriendRequest,
    OutgoingFriendRequest,
    UserSearchResult,
    BlockedPlayers,
    OfflineFriends,
};

