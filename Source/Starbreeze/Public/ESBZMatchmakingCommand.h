#pragma once
#include "CoreMinimal.h"
#include "ESBZMatchmakingCommand.generated.h"

UENUM(BlueprintType)
enum class ESBZMatchmakingCommand : uint8 {
    RegularMatchmaking,
    ForceListenServer,
    ForceClient,
};

