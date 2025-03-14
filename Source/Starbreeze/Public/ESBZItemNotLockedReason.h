#pragma once
#include "CoreMinimal.h"
#include "ESBZItemNotLockedReason.generated.h"

UENUM(BlueprintType)
enum class ESBZItemNotLockedReason : uint8 {
    OwningItem,
    FreeDLCEventItem,
};

