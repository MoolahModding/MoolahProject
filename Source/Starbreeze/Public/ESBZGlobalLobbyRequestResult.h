#pragma once
#include "CoreMinimal.h"
#include "ESBZGlobalLobbyRequestResult.generated.h"

UENUM(BlueprintType)
enum class ESBZGlobalLobbyRequestResult : uint8 {
    Success,
    LobbyConnectionFailed,
    SetupChallengesFailed,
};

