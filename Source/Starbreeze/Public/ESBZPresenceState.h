#pragma once
#include "CoreMinimal.h"
#include "ESBZPresenceState.generated.h"

UENUM(BlueprintType)
enum class ESBZPresenceState : uint8 {
    None,
    InMenu,
    InLobby,
    InLevel,
};

