#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUserEntitlementOrigin.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUserEntitlementOrigin : uint8 {
    NONE,
    Playstation,
    Xbox,
    Steam,
    Epic,
    IOS,
    GooglePlay,
    Twitch,
    Nintendo,
    Oculus,
    System,
    Other,
};

