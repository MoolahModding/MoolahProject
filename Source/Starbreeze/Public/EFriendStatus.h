#pragma once
#include "CoreMinimal.h"
#include "EFriendStatus.generated.h"

UENUM(BlueprintType)
enum class EFriendStatus : uint8 {
    Offline,
    Available,
    Away,
    Invisible,
    Unknown,
};

