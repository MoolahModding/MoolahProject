#pragma once
#include "CoreMinimal.h"
#include "ESBZPartyError.generated.h"

UENUM(BlueprintType)
enum class ESBZPartyError : uint8 {
    DifferentGameClientsVersion,
    FriendNotFound,
    PartyLeaderLeft,
};

