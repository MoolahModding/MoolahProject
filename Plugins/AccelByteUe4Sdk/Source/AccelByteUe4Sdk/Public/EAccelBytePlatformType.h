#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformType.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformType : uint8 {
    Steam,
    PS4,
    PS4CrossGen,
    PS5,
    Live,
    Google,
    Apple,
    Facebook,
    Android,
    iOS,
    Device,
    Twitch,
    Oculus,
    Twitter,
    EpicGames,
    AwsCognito,
    Discord,
    Nintendo,
    SnapChat,
    EAOrigin,
    PS4Web,
    Unset = 0xFF,
};

