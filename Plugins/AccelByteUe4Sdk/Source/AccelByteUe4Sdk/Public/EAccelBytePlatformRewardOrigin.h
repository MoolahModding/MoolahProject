#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformRewardOrigin.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformRewardOrigin : uint8 {
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

