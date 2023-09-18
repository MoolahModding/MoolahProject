#pragma once
#include "CoreMinimal.h"
#include "ESBZVotingType.generated.h"

UENUM(BlueprintType)
enum class ESBZVotingType : uint8 {
    RestartLevel,
    KickPlayer,
    Debug,
};

