#pragma once
#include "CoreMinimal.h"
#include "ERelationshipStatusCode.generated.h"

UENUM(BlueprintType)
enum class ERelationshipStatusCode : uint8 {
    Friend = 3,
    Incoming = 2,
    Outgoing = 1,
    NotFriend = 0,
};

