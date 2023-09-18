#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestFeedbackType.generated.h"

UENUM(BlueprintType)
enum class ESBZRequestFeedbackType : uint8 {
    FriendRequest,
    RemoveFriendRequest,
    CancelFriendRequest,
    AcceptFriendRequest,
    RejectFriendRequest,
    BlockPlayerRequest,
    UnblockPlayerRequest,
    ReportPlayerRequest,
};

