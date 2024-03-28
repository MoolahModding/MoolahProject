#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGameStandardEventName.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGameStandardEventName : uint8 {
    resource_Sourced,
    resource_Sinked,
    resource_Upgraded,
    resource_Actioned,
    quest_Started,
    quest_Ended,
    player_Leveled,
    player_Dead,
    reward_Collected,
};

