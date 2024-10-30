#pragma once
#include "CoreMinimal.h"
#include "ESBZUserStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZUserStatus : uint8 {
    InCrew,
    InHeist,
    InLobby,
    Matchmaking,
    Offline,
    Online,
};

