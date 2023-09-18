#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyInvitationType.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyInvitationType : uint8 {
    Incoming,
    Outgoing,
};

