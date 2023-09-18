#pragma once
#include "CoreMinimal.h"
#include "ESBZVotingError.generated.h"

UENUM(BlueprintType)
enum class ESBZVotingError : uint8 {
    NotEnoughPlayers,
    VotingInProgress,
};

