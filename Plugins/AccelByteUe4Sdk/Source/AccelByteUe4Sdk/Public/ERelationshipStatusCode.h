#pragma once
#include "CoreMinimal.h"
#include "ERelationshipStatusCode.generated.h"

UENUM(BlueprintType)
enum class ERelationshipStatusCode : uint8 {
    Friend = 0x3,
    Incoming = 0x2,
    Outgoing = 0x1,
    NotFriend = 0x0,
};

