#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLockReason.generated.h"

UENUM(BlueprintType)
enum class ESBZItemLockReason : uint8 {
    NotLocked,
    InfamyLevel,
    AlreadyPurchased,
    NotOwningDLC,
};

