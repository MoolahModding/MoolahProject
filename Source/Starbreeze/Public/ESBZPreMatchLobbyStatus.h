#pragma once
#include "CoreMinimal.h"
#include "ESBZPreMatchLobbyStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZPreMatchLobbyStatus : uint8 {
    WaitingForReady,
    WaitingForLoading,
    ReadyToTravel,
    MatchInProgress,
    Default = WaitingForReady,
};

