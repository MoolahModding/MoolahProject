#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponPartLockReason.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponPartLockReason : uint8 {
    None,
    LockedByDLC,
};

