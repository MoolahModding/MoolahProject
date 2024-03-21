#pragma once
#include "CoreMinimal.h"
#include "ESBZFirstPartyPlatform.generated.h"

UENUM(BlueprintType)
enum class ESBZFirstPartyPlatform : uint8 {
    Unknown,
    Null,
    Steam,
    PlayStationNetwork,
    XboxLive,
    EpicOnlineSystem,
    MAX,
};

