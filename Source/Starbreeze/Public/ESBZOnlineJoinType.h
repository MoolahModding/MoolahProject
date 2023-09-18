#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineJoinType.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineJoinType : uint8 {
    Debug,
    Public,
    Private,
    FriendsOnly,
    InviteOnly,
};

