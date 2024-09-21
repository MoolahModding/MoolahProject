#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterLockReason.generated.h"

UENUM(BlueprintType)
enum class ESBZCharacterLockReason : uint8 {
    NotLocked,
    NotOwningDLC,
};

