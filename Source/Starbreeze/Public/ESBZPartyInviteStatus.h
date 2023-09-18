#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyInviteStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyInviteStatus : uint8 {
    Pending,
    Active,
    Processed,
};

