#pragma once
#include "CoreMinimal.h"
#include "EBanType.generated.h"

UENUM(BlueprintType)
enum class EBanType : uint8 {
    EMPTY,
    LOGIN,
    CHAT_SEND,
    CHAT_ALL,
    ORDER_AND_PAYMENT,
    STATISTIC,
    LEADERBOARD,
    MATCHMAKING,
    UGC_CREATE_UPDATE,
};

