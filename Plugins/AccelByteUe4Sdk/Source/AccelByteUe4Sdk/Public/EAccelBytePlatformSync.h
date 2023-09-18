#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformSync.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformSync : uint8 {
    STEAM,
    XBOX_LIVE,
    PLAYSTATION,
    EPIC_GAMES,
    OTHER,
};

