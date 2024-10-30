#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlinePresenceState.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlinePresenceState : uint8 {
    Unknown,
    Online,
    Offline,
    Away,
    ExtendedAway,
    DoNotDisturb,
    Chat,
};

