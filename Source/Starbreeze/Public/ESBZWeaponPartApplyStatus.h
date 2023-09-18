#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponPartApplyStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponPartApplyStatus : uint8 {
    NotAllowed,
    CanBeAppliedForCost,
    FeeAlreadyPayed,
    CanAlwaysBeAppliedAtNoCost,
};

