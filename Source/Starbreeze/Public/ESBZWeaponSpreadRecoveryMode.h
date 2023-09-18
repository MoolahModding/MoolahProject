#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponSpreadRecoveryMode.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponSpreadRecoveryMode : uint8 {
    ResetTime,
    DecayRate,
};

