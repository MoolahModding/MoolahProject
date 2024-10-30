#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineJoinType.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineJoinType : uint8 {
    Debug_DEPRECATED,
    Public,
    Private,
    FriendsOnly,
    InviteOnly,
    Default = Public,
};

