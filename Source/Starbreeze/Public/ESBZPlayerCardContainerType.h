#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerCardContainerType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerCardContainerType : uint8 {
    PCCT_Friends,
    PCCT_Requests,
    PCCT_RecentlyPlayed,
    PCCT_Blocked,
    PCCT_Crew,
    PCCT_SearchUsers,
};

